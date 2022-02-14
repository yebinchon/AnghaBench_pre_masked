
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ ncall; scalar_t__ selfcalls; scalar_t__ propself; scalar_t__ propchild; scalar_t__ name; scalar_t__ cycleno; int printflag; } ;
typedef TYPE_1__ nltype ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;

void
FUNC_8(nltype **VAR_3)
{
    int VAR_4;
    nltype *VAR_5;




    FUNC_1();
    for ( VAR_4 = 0 ; VAR_4 < VAR_1 + VAR_0 ; VAR_4 ++ ) {
 VAR_5 = VAR_3[ VAR_4 ];
 if ( VAR_2 == 0 &&
      VAR_5 -> ncall == 0 &&
      VAR_5 -> selfcalls == 0 &&
      VAR_5 -> propself == 0 &&
      VAR_5 -> propchild == 0 ) {
     continue;
 }
 if ( ! VAR_5 -> printflag ) {
     continue;
 }
 if ( VAR_5 -> name == 0 && VAR_5 -> cycleno != 0 ) {



     FUNC_4( VAR_5 );
     FUNC_6( VAR_5 );
 } else {
     FUNC_7( VAR_5 );
     FUNC_2( VAR_5 );
     FUNC_3( VAR_5 );
 }
 FUNC_5( "\n" );
 FUNC_5( "-----------------------------------------------\n" );
 FUNC_5( "\n" );
    }
    FUNC_0( VAR_3 );
}
