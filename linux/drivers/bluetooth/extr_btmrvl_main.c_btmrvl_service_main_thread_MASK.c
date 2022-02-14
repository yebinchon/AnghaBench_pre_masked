
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wait_queue_entry_t ;
typedef int ulong ;
struct sk_buff {scalar_t__ len; } ;
struct btmrvl_thread {int wait_q; struct btmrvl_private* priv; } ;
struct TYPE_6__ {TYPE_2__* hcidev; int tx_dnld_rdy; } ;
struct btmrvl_private {TYPE_3__ btmrvl_dev; struct btmrvl_adapter* adapter; int driver_lock; int (* hw_wakeup_firmware ) (struct btmrvl_private*) ;int (* hw_process_int_status ) (struct btmrvl_private*) ;scalar_t__ surprise_removed; } ;
struct btmrvl_adapter {scalar_t__ ps_state; int tx_queue; scalar_t__ is_suspended; scalar_t__ wakeup_tries; scalar_t__ int_count; } ;
struct TYPE_4__ {int byte_tx; int err_tx; } ;
struct TYPE_5__ {TYPE_1__ stat; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct btmrvl_private*,struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 struct sk_buff* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (struct btmrvl_private*) ;
 int FUNC_14 (struct btmrvl_private*) ;

__attribute__((used)) static int FUNC_15(void *VAR_4)
{
 struct btmrvl_thread *VAR_5 = VAR_4;
 struct btmrvl_private *VAR_6 = VAR_5->priv;
 struct btmrvl_adapter *VAR_7 = VAR_6->adapter;
 wait_queue_entry_t VAR_8;
 struct sk_buff *VAR_9;
 ulong VAR_10;

 FUNC_3(&VAR_8, VAR_3);

 for (;;) {
  FUNC_1(&VAR_5->wait_q, &VAR_8);

  FUNC_8(VAR_1);
  if (FUNC_5() || VAR_6->surprise_removed) {
   FUNC_0("main_thread: break from main thread");
   break;
  }

  if (VAR_7->wakeup_tries ||
    ((!VAR_7->int_count) &&
    (!VAR_6->btmrvl_dev.tx_dnld_rdy ||
    FUNC_10(&VAR_7->tx_queue)))) {
   FUNC_0("main_thread is sleeping...");
   FUNC_7();
  }

  FUNC_8(VAR_2);

  FUNC_6(&VAR_5->wait_q, &VAR_8);

  FUNC_0("main_thread woke up");

  if (FUNC_5() || VAR_6->surprise_removed) {
   FUNC_0("main_thread: break from main thread");
   break;
  }

  FUNC_11(&VAR_6->driver_lock, VAR_10);
  if (VAR_7->int_count) {
   VAR_7->int_count = 0;
   FUNC_12(&VAR_6->driver_lock, VAR_10);
   VAR_6->hw_process_int_status(VAR_6);
  } else if (VAR_7->ps_state == VAR_0 &&
     !FUNC_10(&VAR_7->tx_queue)) {
   FUNC_12(&VAR_6->driver_lock, VAR_10);
   VAR_7->wakeup_tries++;
   VAR_6->hw_wakeup_firmware(VAR_6);
   continue;
  } else {
   FUNC_12(&VAR_6->driver_lock, VAR_10);
  }

  if (VAR_7->ps_state == VAR_0)
   continue;

  if (!VAR_6->btmrvl_dev.tx_dnld_rdy ||
      VAR_6->adapter->is_suspended)
   continue;

  VAR_9 = FUNC_9(&VAR_7->tx_queue);
  if (VAR_9) {
   if (FUNC_2(VAR_6, VAR_9))
    VAR_6->btmrvl_dev.hcidev->stat.err_tx++;
   else
    VAR_6->btmrvl_dev.hcidev->stat.byte_tx += VAR_9->len;

   FUNC_4(VAR_9);
  }
 }

 return 0;
}
