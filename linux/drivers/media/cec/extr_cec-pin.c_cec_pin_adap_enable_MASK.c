
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; } ;
struct cec_pin {int enabled; int work_pin_events_dropped; int state; int kthread; int timer; TYPE_2__* ops; int work_irq_change; int timer_ts; TYPE_1__ tx_msg; scalar_t__ work_pin_events_wr; scalar_t__ work_pin_events_rd; int work_pin_num_events; } ;
struct cec_adapter {struct cec_pin* pin; } ;
struct TYPE_4__ {int (* disable_irq ) (struct cec_adapter*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct cec_pin*) ;
 int VAR_3 ;
 int FUNC_4 (struct cec_pin*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ,struct cec_adapter*,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct cec_adapter*) ;

__attribute__((used)) static int FUNC_12(struct cec_adapter *VAR_4, bool VAR_5)
{
 struct cec_pin *VAR_6 = VAR_4->pin;

 VAR_6->enabled = VAR_5;
 if (VAR_5) {
  FUNC_2(&VAR_6->work_pin_num_events, 0);
  VAR_6->work_pin_events_rd = VAR_6->work_pin_events_wr = 0;
  VAR_6->work_pin_events_dropped = 0;
  FUNC_3(VAR_6);
  FUNC_4(VAR_6);
  VAR_6->tx_msg.len = 0;
  VAR_6->timer_ts = FUNC_9(0);
  FUNC_2(&VAR_6->work_irq_change, VAR_0);
  VAR_6->kthread = FUNC_7(VAR_3, VAR_4,
        "cec-pin");
  if (FUNC_0(VAR_6->kthread)) {
   FUNC_10("cec-pin: kernel_thread() failed\n");
   return FUNC_1(VAR_6->kthread);
  }
  FUNC_6(&VAR_6->timer, FUNC_9(0),
         VAR_2);
 } else {
  if (VAR_6->ops->disable_irq)
   VAR_6->ops->disable_irq(VAR_4);
  FUNC_5(&VAR_6->timer);
  FUNC_8(VAR_6->kthread);
  FUNC_3(VAR_6);
  FUNC_4(VAR_6);
  VAR_6->state = VAR_1;
 }
 return 0;
}
