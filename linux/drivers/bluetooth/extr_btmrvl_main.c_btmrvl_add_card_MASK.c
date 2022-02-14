
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_dnld_rdy; void* card; } ;
struct TYPE_4__ {int task; int wait_q; struct btmrvl_private* priv; } ;
struct btmrvl_private {TYPE_1__ btmrvl_dev; TYPE_2__ main_thread; int driver_lock; void* adapter; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct btmrvl_private*) ;
 int FUNC_4 (struct btmrvl_private*) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct btmrvl_private*) ;
 int FUNC_7 (int ,TYPE_2__*,char*) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;

struct btmrvl_private *FUNC_10(void *VAR_2)
{
 struct btmrvl_private *VAR_3;

 VAR_3 = FUNC_8(sizeof(*VAR_3), VAR_0);
 if (!VAR_3) {
  FUNC_1("Can not allocate priv");
  goto err_priv;
 }

 VAR_3->adapter = FUNC_8(sizeof(*VAR_3->adapter), VAR_0);
 if (!VAR_3->adapter) {
  FUNC_1("Allocate buffer for btmrvl_adapter failed!");
  goto err_adapter;
 }

 FUNC_4(VAR_3);

 FUNC_0("Starting kthread...");
 VAR_3->main_thread.priv = VAR_3;
 FUNC_9(&VAR_3->driver_lock);

 FUNC_5(&VAR_3->main_thread.wait_q);
 VAR_3->main_thread.task = FUNC_7(VAR_1,
    &VAR_3->main_thread, "btmrvl_main_service");
 if (FUNC_2(VAR_3->main_thread.task))
  goto err_thread;

 VAR_3->btmrvl_dev.card = VAR_2;
 VAR_3->btmrvl_dev.tx_dnld_rdy = 1;

 return VAR_3;

err_thread:
 FUNC_3(VAR_3);

err_adapter:
 FUNC_6(VAR_3);

err_priv:
 return ((void*)0);
}
