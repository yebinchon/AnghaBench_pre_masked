
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int scoreBoardShowing; int time; int scoreFadeTime; } ;
struct TYPE_3__ {scalar_t__ gametype; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_2( void ) {







 if ( VAR_2.gametype == VAR_0 ) {
  FUNC_0();
  return;
 }

 VAR_1.scoreFadeTime = VAR_1.time;
 VAR_1.scoreBoardShowing = FUNC_1();
}
