
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ weaponnum; int* inventory; } ;
typedef TYPE_1__ bot_state_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

float FUNC_0(bot_state_t *VAR_3) {
 if (VAR_3->weaponnum == VAR_1) {
  return 100;
 }
 if (VAR_3->inventory[VAR_0] < 40) {
  return 100;
 }
 if (VAR_3->weaponnum == VAR_2) {
  return 90;
 }
 if (VAR_3->inventory[VAR_0] < 60) {
  return 80;
 }
 return 0;
}
