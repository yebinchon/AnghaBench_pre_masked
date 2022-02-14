
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int index; int propself; int propchild; int ncall; scalar_t__ selfcalls; int npropcall; } ;
typedef TYPE_1__ nltype ;


 int VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,int) ;

void
FUNC_3(register nltype *VAR_3)
{
    char VAR_4[ VAR_0 ];

    FUNC_2( VAR_4 , "[%d]" , VAR_3 -> index );
    FUNC_0( "%-6.6s %5.1f %7.2f %11.2f" ,
     VAR_4 ,
     100 * ( VAR_3 -> propself + VAR_3 -> propchild ) / VAR_2 ,
     VAR_3 -> propself / VAR_1 ,
     VAR_3 -> propchild / VAR_1 );
    if ( ( VAR_3 -> ncall + VAR_3 -> selfcalls ) != 0 ) {
 FUNC_0( " %7ld" , VAR_3 -> npropcall );
 if ( VAR_3 -> selfcalls != 0 ) {
     FUNC_0( "+%-7ld " , VAR_3 -> selfcalls );
 } else {
     FUNC_0( " %7.7s " , "" );
 }
    } else {
 FUNC_0( " %7.7s %7.7s " , "" , "" );
    }
    FUNC_1( VAR_3 );
    FUNC_0( "\n" );
}
