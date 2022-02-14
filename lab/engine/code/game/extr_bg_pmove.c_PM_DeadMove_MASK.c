
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ps; } ;
struct TYPE_5__ {int walking; } ;
struct TYPE_4__ {int velocity; } ;


 int FUNC_0 (int ) ;
 float FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,float,int ) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_4( void ) {
 float VAR_2;

 if ( !VAR_1.walking ) {
  return;
 }



 VAR_2 = FUNC_1 (VAR_0->ps->velocity);
 VAR_2 -= 20;
 if ( VAR_2 <= 0 ) {
  FUNC_0 (VAR_0->ps->velocity);
 } else {
  FUNC_2 (VAR_0->ps->velocity);
  FUNC_3 (VAR_0->ps->velocity, VAR_2, VAR_0->ps->velocity);
 }
}
