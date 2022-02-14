
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ace_device {int fsm_continue_flag; int lock; int stall_timer; int data_count; int fsm_iter_num; int fsm_task; int fsm_state; int dev; } ;


 scalar_t__ VAR_0 ;
 struct ace_device* VAR_1 ;
 int FUNC_0 (struct ace_device*) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ) ;
 struct ace_device* FUNC_2 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_4)
{
 struct ace_device *VAR_5 = FUNC_2(VAR_5, VAR_4, VAR_3);
 unsigned long VAR_6;

 FUNC_1(VAR_5->dev,
   "kicking stalled fsm; state=%i task=%i iter=%i dc=%i\n",
   VAR_5->fsm_state, VAR_5->fsm_task, VAR_5->fsm_iter_num,
   VAR_5->data_count);
 FUNC_4(&VAR_5->lock, VAR_6);



 FUNC_3(&VAR_5->stall_timer, VAR_2 + VAR_0);


 VAR_5->fsm_continue_flag = 1;
 while (VAR_5->fsm_continue_flag)
  FUNC_0(VAR_5);

 FUNC_5(&VAR_5->lock, VAR_6);
}
