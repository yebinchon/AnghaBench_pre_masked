
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sdio_func {int dummy; } ;
struct hci_dev {int name; } ;
struct device {int dummy; } ;
struct btmrvl_sdio_card {TYPE_3__* plt_wake_cfg; struct btmrvl_private* priv; } ;
struct TYPE_4__ {struct hci_dev* hcidev; } ;
struct btmrvl_private {TYPE_2__* adapter; TYPE_1__ btmrvl_dev; int (* hw_wakeup_firmware ) (struct btmrvl_private*) ;} ;
typedef int mmc_pm_flag_t ;
struct TYPE_6__ {scalar_t__ irq_bt; scalar_t__ wake_by_bt; } ;
struct TYPE_5__ {int is_suspended; int hs_state; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 struct sdio_func* FUNC_2 (struct device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct sdio_func*) ;
 struct btmrvl_sdio_card* FUNC_8 (struct sdio_func*) ;
 int FUNC_9 (struct sdio_func*) ;
 int FUNC_10 (struct btmrvl_private*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_1)
{
 struct sdio_func *VAR_2 = FUNC_2(VAR_1);
 struct btmrvl_sdio_card *VAR_3;
 struct btmrvl_private *VAR_4;
 mmc_pm_flag_t VAR_5;
 struct hci_dev *VAR_6;

 if (VAR_2) {
  VAR_5 = FUNC_9(VAR_2);
  FUNC_0("%s: resume: PM flags = 0x%x", FUNC_7(VAR_2),
         VAR_5);
  VAR_3 = FUNC_8(VAR_2);
  if (!VAR_3 || !VAR_3->priv) {
   FUNC_1("card or priv structure is not valid");
   return 0;
  }
 } else {
  FUNC_1("sdio_func is not specified");
  return 0;
 }
 VAR_4 = VAR_3->priv;

 if (!VAR_4->adapter->is_suspended) {
  FUNC_0("device already resumed");
  return 0;
 }

 VAR_4->hw_wakeup_firmware(VAR_4);
 VAR_4->adapter->hs_state = VAR_0;
 VAR_6 = VAR_4->btmrvl_dev.hcidev;
 FUNC_0("%s: HS DEACTIVATED in resume!", VAR_6->name);
 VAR_4->adapter->is_suspended = 0;
 FUNC_0("%s: SDIO resume", VAR_6->name);
 FUNC_6(VAR_6);


 if (VAR_3->plt_wake_cfg && VAR_3->plt_wake_cfg->irq_bt >= 0) {
  FUNC_4(VAR_3->plt_wake_cfg->irq_bt);
  FUNC_3(VAR_3->plt_wake_cfg->irq_bt);
  if (VAR_3->plt_wake_cfg->wake_by_bt)



   FUNC_5(VAR_3->plt_wake_cfg->irq_bt);
 }

 return 0;
}
