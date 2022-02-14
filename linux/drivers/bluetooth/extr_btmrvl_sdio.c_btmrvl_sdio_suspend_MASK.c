
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
struct btmrvl_sdio_card {TYPE_2__* plt_wake_cfg; struct btmrvl_private* priv; } ;
struct TYPE_4__ {struct hci_dev* hcidev; } ;
struct btmrvl_private {TYPE_3__* adapter; TYPE_1__ btmrvl_dev; } ;
typedef int mmc_pm_flag_t ;
struct TYPE_6__ {int is_suspending; scalar_t__ hs_state; int is_suspended; } ;
struct TYPE_5__ {scalar_t__ irq_bt; int wake_by_bt; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct btmrvl_private*) ;
 struct sdio_func* FUNC_3 (struct device*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct sdio_func*) ;
 struct btmrvl_sdio_card* FUNC_10 (struct sdio_func*) ;
 int FUNC_11 (struct sdio_func*) ;
 int FUNC_12 (struct sdio_func*,int) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_4)
{
 struct sdio_func *VAR_5 = FUNC_3(VAR_4);
 struct btmrvl_sdio_card *VAR_6;
 struct btmrvl_private *VAR_7;
 mmc_pm_flag_t VAR_8;
 struct hci_dev *VAR_9;

 if (VAR_5) {
  VAR_8 = FUNC_11(VAR_5);
  FUNC_0("%s: suspend: PM flags = 0x%x", FUNC_9(VAR_5),
         VAR_8);
  if (!(VAR_8 & VAR_3)) {
   FUNC_1("%s: cannot remain alive while suspended",
          FUNC_9(VAR_5));
   return -VAR_1;
  }
  VAR_6 = FUNC_10(VAR_5);
  if (!VAR_6 || !VAR_6->priv) {
   FUNC_1("card or priv structure is not valid");
   return 0;
  }
 } else {
  FUNC_1("sdio_func is not specified");
  return 0;
 }


 if (VAR_6->plt_wake_cfg && VAR_6->plt_wake_cfg->irq_bt >= 0) {
  VAR_6->plt_wake_cfg->wake_by_bt = 0;
  FUNC_6(VAR_6->plt_wake_cfg->irq_bt);
  FUNC_7(VAR_6->plt_wake_cfg->irq_bt);
 }

 VAR_7 = VAR_6->priv;
 VAR_7->adapter->is_suspending = 1;
 VAR_9 = VAR_7->btmrvl_dev.hcidev;
 FUNC_0("%s: SDIO suspend", VAR_9->name);
 FUNC_8(VAR_9);

 if (VAR_7->adapter->hs_state != VAR_2) {
  if (FUNC_2(VAR_7)) {
   FUNC_1("HS not activated, suspend failed!");

   if (VAR_6->plt_wake_cfg &&
       VAR_6->plt_wake_cfg->irq_bt >= 0) {
    FUNC_5(VAR_6->plt_wake_cfg->irq_bt);
    FUNC_4(VAR_6->plt_wake_cfg->irq_bt);
   }

   VAR_7->adapter->is_suspending = 0;
   return -VAR_0;
  }
 }

 VAR_7->adapter->is_suspending = 0;
 VAR_7->adapter->is_suspended = 1;


 if (VAR_7->adapter->hs_state == VAR_2) {
  FUNC_0("suspend with MMC_PM_KEEP_POWER");
  return FUNC_12(VAR_5, VAR_3);
 }

 FUNC_0("suspend without MMC_PM_KEEP_POWER");
 return 0;
}
