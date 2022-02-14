
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ weaponstate; } ;
struct TYPE_5__ {int weaponnum; int client; int weaponchange_time; int inventory; int ws; TYPE_1__ cur_ps; } ;
typedef TYPE_2__ bot_state_t ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(bot_state_t *VAR_2) {
 int VAR_3;

 if (VAR_2->cur_ps.weaponstate == VAR_1 ||
   VAR_2->cur_ps.weaponstate == VAR_0) {
  FUNC_2(VAR_2->client, VAR_2->weaponnum);
 }
 else {
  VAR_3 = FUNC_1(VAR_2->ws, VAR_2->inventory);
  if (VAR_2->weaponnum != VAR_3) VAR_2->weaponchange_time = FUNC_0();
  VAR_2->weaponnum = VAR_3;

  FUNC_2(VAR_2->client, VAR_2->weaponnum);
 }
}
