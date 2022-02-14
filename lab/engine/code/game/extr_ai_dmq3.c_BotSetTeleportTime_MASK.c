
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int eFlags; } ;
struct TYPE_5__ {int last_eFlags; TYPE_1__ cur_ps; int teleport_time; } ;
typedef TYPE_2__ bot_state_t ;


 int VAR_0 ;
 int FUNC_0 () ;

void FUNC_1(bot_state_t *VAR_1) {
 if ((VAR_1->cur_ps.eFlags ^ VAR_1->last_eFlags) & VAR_0) {
  VAR_1->teleport_time = FUNC_0();
 }
 VAR_1->last_eFlags = VAR_1->cur_ps.eFlags;
}
