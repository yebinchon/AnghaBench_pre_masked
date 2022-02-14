
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_head {size_t pd_idx; TYPE_1__* dev; int state; TYPE_2__* raid_conf; } ;
struct r5l_log {scalar_t__ r5c_journal_mode; } ;
struct TYPE_4__ {struct r5l_log* log; } ;
struct TYPE_3__ {int flags; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct stripe_head*) ;
 int FUNC_2 (struct stripe_head*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct stripe_head *VAR_3)
{
 struct r5l_log *VAR_4 = VAR_3->raid_conf->log;

 if (VAR_4->r5c_journal_mode == VAR_0) {
  FUNC_0(FUNC_4(VAR_2, &VAR_3->state));






  FUNC_3(VAR_1, &VAR_3->dev[VAR_3->pd_idx].flags);
 } else if (FUNC_4(VAR_2, &VAR_3->state)) {
  FUNC_1(VAR_3);
 } else {
  FUNC_2(VAR_3);
  FUNC_3(VAR_1, &VAR_3->dev[VAR_3->pd_idx].flags);
 }
}
