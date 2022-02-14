
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cec_msg {int len; int* msg; int rx_ts; } ;
struct cec_pin {int work_tx_status; unsigned int work_pin_events_rd; int* work_pin_events; int enable_irq_failed; int timer; TYPE_1__* ops; int work_irq_change; int work_pin_num_events; int * work_pin_ts; int work_tx_ts; struct cec_msg work_rx_msg; int kthread_waitq; } ;
struct cec_adapter {struct cec_pin* pin; } ;
struct TYPE_2__ {int (* enable_irq ) (struct cec_adapter*) ;int (* disable_irq ) (struct cec_adapter*) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct cec_pin*) ;
 int FUNC_4 (struct cec_pin*) ;
 int FUNC_5 (struct cec_adapter*,int,int,int ) ;
 int FUNC_6 (struct cec_adapter*,struct cec_msg*,int ) ;
 int FUNC_7 (struct cec_adapter*,unsigned int,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct cec_pin*) ;
 scalar_t__ FUNC_12 (struct cec_pin*) ;
 int FUNC_13 (struct cec_adapter*) ;
 int FUNC_14 (struct cec_adapter*) ;
 int FUNC_15 (int ,int) ;

__attribute__((used)) static int FUNC_16(void *VAR_6)
{
 struct cec_adapter *VAR_7 = VAR_6;
 struct cec_pin *VAR_8 = VAR_7->pin;

 for (;;) {
  FUNC_15(VAR_8->kthread_waitq,
   FUNC_9() ||
   VAR_8->work_rx_msg.len ||
   VAR_8->work_tx_status ||
   FUNC_1(&VAR_8->work_irq_change) ||
   FUNC_1(&VAR_8->work_pin_num_events));

  if (VAR_8->work_rx_msg.len) {
   struct cec_msg *VAR_9 = &VAR_8->work_rx_msg;

   if (VAR_9->len > 1 && VAR_9->len < VAR_0 &&
       FUNC_11(VAR_8)) {

    VAR_9->msg[VAR_9->len++] = 0x55;
   }
   if (VAR_9->len > 2 && FUNC_12(VAR_8)) {

    VAR_9->len--;
   }
   if (VAR_9->len > VAR_0)
    VAR_9->len = VAR_0;
   FUNC_6(VAR_7, VAR_9,
    FUNC_10(VAR_8->work_rx_msg.rx_ts));
   VAR_9->len = 0;
  }
  if (VAR_8->work_tx_status) {
   unsigned int VAR_10 = VAR_8->work_tx_status;

   VAR_8->work_tx_status = 0;
   FUNC_7(VAR_7, VAR_10,
           VAR_8->work_tx_ts);
  }

  while (FUNC_1(&VAR_8->work_pin_num_events)) {
   unsigned int VAR_11 = VAR_8->work_pin_events_rd;
   u8 VAR_12 = VAR_8->work_pin_events[VAR_11];

   FUNC_5(VAR_7,
      VAR_12 & VAR_3,
      VAR_12 & VAR_2,
      VAR_8->work_pin_ts[VAR_11]);
   VAR_8->work_pin_events_rd = (VAR_11 + 1) % VAR_1;
   FUNC_0(&VAR_8->work_pin_num_events);
  }

  switch (FUNC_2(&VAR_8->work_irq_change,
        VAR_4)) {
  case 129:
   VAR_8->ops->disable_irq(VAR_7);
   FUNC_3(VAR_8);
   FUNC_4(VAR_8);
   FUNC_8(&VAR_8->timer, FUNC_10(0),
          VAR_5);
   break;
  case 128:
   VAR_8->enable_irq_failed = !VAR_8->ops->enable_irq(VAR_7);
   if (VAR_8->enable_irq_failed) {
    FUNC_4(VAR_8);
    FUNC_8(&VAR_8->timer, FUNC_10(0),
           VAR_5);
   }
   break;
  default:
   break;
  }

  if (FUNC_9())
   break;
 }
 return 0;
}
