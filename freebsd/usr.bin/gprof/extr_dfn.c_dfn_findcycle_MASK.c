
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* cyclehead; struct TYPE_6__* cnext; } ;
typedef TYPE_1__ nltype ;
struct TYPE_7__ {TYPE_1__* nlentryp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_4 ;

void
FUNC_5(nltype *VAR_5)
{
    int VAR_6;
    nltype *VAR_7;
    nltype *VAR_8;
    int VAR_9;

    for ( VAR_6 = VAR_2 ; VAR_6 > 0 ; VAR_6 -= 1 ) {
 VAR_7 = VAR_3[ VAR_6 ].nlentryp;
 if ( VAR_5 == VAR_7 ) {
     break;
 }
 if ( VAR_5 -> cyclehead != VAR_5 &&
     VAR_5 -> cyclehead == VAR_7 ) {
     break;
 }
    }
    if ( VAR_6 <= 0 )
 FUNC_1( 1 , "[dfn_findcycle] couldn't find head of cycle" );
    if ( VAR_6 == VAR_2 ) {




 FUNC_0( VAR_5 );
    } else {






 for ( VAR_8 = VAR_7 ; VAR_8 -> cnext ; VAR_8 = VAR_8 -> cnext ) {
 }





 if ( VAR_7 -> cyclehead != VAR_7 ) {
     VAR_7 = VAR_7 -> cyclehead;







 }
 for ( VAR_9 = VAR_6 + 1 ; VAR_9 <= VAR_2 ; VAR_9 += 1 ) {
     VAR_5 = VAR_3[ VAR_9 ].nlentryp;
     if ( VAR_5 -> cyclehead == VAR_5 ) {




  VAR_8 -> cnext = VAR_5;
  VAR_5 -> cyclehead = VAR_7;
  for ( VAR_8 = VAR_5 ; VAR_8->cnext ; VAR_8 = VAR_8->cnext ) {
      VAR_8 -> cnext -> cyclehead = VAR_7;
  }
     } else if ( VAR_5 -> cyclehead != VAR_7 ) {
  FUNC_2( VAR_4 ,
   "[dfn_busy] glommed, but not to cyclehead\n" );
     }
 }
    }
}
