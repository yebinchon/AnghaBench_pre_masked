
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wait_q; } ;
struct btmrvl_private {TYPE_1__ main_thread; TYPE_2__* adapter; } ;
struct TYPE_4__ {scalar_t__ hs_state; int int_count; scalar_t__ wakeup_tries; int ps_state; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct btmrvl_private *VAR_3)
{
 VAR_3->adapter->ps_state = VAR_2;

 VAR_3->adapter->wakeup_tries = 0;

 VAR_3->adapter->int_count++;

 if (VAR_3->adapter->hs_state == VAR_0) {
  FUNC_0("BT: HS DEACTIVATED in ISR!");
  VAR_3->adapter->hs_state = VAR_1;
 }

 FUNC_1(&VAR_3->main_thread.wait_q);
}
