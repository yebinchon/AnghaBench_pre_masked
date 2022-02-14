
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {int creg_timeout; } ;
struct TYPE_5__ {int lock; scalar_t__ active; TYPE_1__ creg_stats; struct creg_cmd* active_cmd; } ;
struct rsxx_cardinfo {TYPE_2__ creg_ctrl; } ;
struct creg_cmd {int (* cb ) (struct rsxx_cardinfo*,struct creg_cmd*,int ) ;} ;
struct TYPE_6__ {int cmd_timer; } ;


 int FUNC_0 (struct rsxx_cardinfo*) ;
 int VAR_0 ;
 struct rsxx_cardinfo* VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (struct rsxx_cardinfo*) ;
 int FUNC_2 (int ,char*) ;
 struct rsxx_cardinfo* FUNC_3 (int ,struct timer_list*,int ) ;
 int FUNC_4 (int ,struct creg_cmd*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct rsxx_cardinfo*,struct creg_cmd*,int ) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_4)
{
 struct rsxx_cardinfo *VAR_5 = FUNC_3(VAR_5, VAR_4, VAR_3.cmd_timer);
 struct creg_cmd *VAR_6;

 FUNC_5(&VAR_5->creg_ctrl.lock);
 VAR_6 = VAR_5->creg_ctrl.active_cmd;
 VAR_5->creg_ctrl.active_cmd = ((void*)0);
 FUNC_6(&VAR_5->creg_ctrl.lock);

 if (VAR_6 == ((void*)0)) {
  VAR_5->creg_ctrl.creg_stats.creg_timeout++;
  FUNC_2(FUNC_0(VAR_5),
   "No active command associated with timeout!\n");
  return;
 }

 if (VAR_6->cb)
  VAR_6->cb(VAR_5, VAR_6, -VAR_0);

 FUNC_4(VAR_2, VAR_6);


 FUNC_5(&VAR_5->creg_ctrl.lock);
 VAR_5->creg_ctrl.active = 0;
 FUNC_1(VAR_5);
 FUNC_6(&VAR_5->creg_ctrl.lock);
}
