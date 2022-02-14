
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; int propself; int propchild; int cycleno; int selfcalls; int npropcall; } ;
typedef TYPE_1__ nltype ;


 int VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int) ;

void
FUNC_2(nltype *VAR_3)
{
    char VAR_4[ VAR_0 ];

    FUNC_1( VAR_4 , "[%d]" , VAR_3 -> index );
    FUNC_0( "%-6.6s %5.1f %7.2f %11.2f %7ld" ,
     VAR_4 ,
     100 * ( VAR_3 -> propself + VAR_3 -> propchild ) / VAR_2 ,
     VAR_3 -> propself / VAR_1 ,
     VAR_3 -> propchild / VAR_1 ,
     VAR_3 -> npropcall );
    if ( VAR_3 -> selfcalls != 0 ) {
 FUNC_0( "+%-7ld" , VAR_3 -> selfcalls );
    } else {
 FUNC_0( " %7.7s" , "" );
    }
    FUNC_0( " <cycle %d as a whole>\t[%d]\n" ,
     VAR_3 -> cycleno , VAR_3 -> index );
}
