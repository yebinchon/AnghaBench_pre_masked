
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int printflag; double propfraction; int propself; int time; int name; struct TYPE_5__* cyclehead; } ;
typedef TYPE_1__ nltype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 double VAR_11 ;
 TYPE_1__** VAR_12 ;

void
FUNC_4(void)
{
    int VAR_13;
    nltype *VAR_14;
    nltype *VAR_15;

    VAR_15 = 0;
    for ( VAR_13 = VAR_10-1 ; VAR_13 >= 0 ; VAR_13 -= 1 ) {
 VAR_14 = VAR_12[ VAR_13 ];







 if ( VAR_14 -> cyclehead != VAR_15 ) {
     VAR_15 = VAR_14 -> cyclehead;
     FUNC_0( VAR_14 );
 }
 if ( ! VAR_14 -> printflag ) {






     if ( FUNC_1( VAR_9 , VAR_14 -> name )
  || ( !VAR_8 && !FUNC_1( VAR_7 , VAR_14 -> name ) ) ) {
  VAR_14 -> printflag = VAR_5;
     }
 } else {





     if ( ( !FUNC_1( VAR_9 , VAR_14 -> name ) )
  && FUNC_1( VAR_7 , VAR_14 -> name ) ) {
  VAR_14 -> printflag = VAR_1;
     }
 }
 if ( VAR_14 -> propfraction == 0.0 ) {






     if ( FUNC_1( VAR_3 , VAR_14 -> name )
  || ( !VAR_2 && !FUNC_1( VAR_0 , VAR_14 -> name ) ) ) {
      VAR_14 -> propfraction = 1.0;
     }
 } else {





     if ( !FUNC_1( VAR_3 , VAR_14 -> name )
  && FUNC_1( VAR_0 , VAR_14 -> name ) ) {
  VAR_14 -> propfraction = 0.0;
     }
 }
 VAR_14 -> propself = VAR_14 -> time * VAR_14 -> propfraction;
 VAR_11 += VAR_14 -> propself;
    }
}
