
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double propself; double propchild; int selfcalls; int npropcall; struct TYPE_5__* cnext; } ;
typedef TYPE_1__ nltype ;


 double VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(nltype *VAR_1)
{
    nltype *VAR_2;

    FUNC_2( VAR_1 );
    for ( VAR_2 = VAR_1 -> cnext ; VAR_2 ; VAR_2 = VAR_2 -> cnext ) {
 FUNC_0( "%6.6s %5.5s %7.2f %11.2f %7ld" ,
  "" , "" , VAR_2 -> propself / VAR_0 , VAR_2 -> propchild / VAR_0 ,
  VAR_2 -> npropcall );
 if ( VAR_2 -> selfcalls != 0 ) {
     FUNC_0( "+%-7ld" , VAR_2 -> selfcalls );
 } else {
     FUNC_0( " %7.7s" , "" );
 }
 FUNC_0( "     " );
 FUNC_1( VAR_2 );
 FUNC_0( "\n" );
    }
}
