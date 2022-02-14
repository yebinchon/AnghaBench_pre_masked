
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirf_data {int active; int irq; struct gnss_device* gdev; void* vcc; void* on_off; void* wakeup; void* lna; int power_wait; int serdev_mutex; int gdev_mutex; struct serdev_device* serdev; } ;
struct device {int dummy; } ;
struct serdev_device {struct device dev; } ;
struct gnss_device {int * ops; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct device*,char*,int) ;
 void* FUNC_4 (struct device*,char*,int ) ;
 struct sirf_data* FUNC_5 (struct device*,int,int ) ;
 void* FUNC_6 (struct device*,char*) ;
 int FUNC_7 (int,struct sirf_data*) ;
 struct gnss_device* FUNC_8 (struct device*) ;
 int FUNC_9 (struct gnss_device*) ;
 int FUNC_10 (struct gnss_device*) ;
 int FUNC_11 (struct gnss_device*,struct sirf_data*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (void*) ;
 int FUNC_21 (void*) ;
 int FUNC_22 (int,int *,int ,int,char*,struct sirf_data*) ;
 int FUNC_23 (struct serdev_device*,int *) ;
 int FUNC_24 (struct serdev_device*,struct sirf_data*) ;
 int VAR_11 ;
 int FUNC_25 (struct serdev_device*) ;
 int FUNC_26 (struct device*) ;
 int FUNC_27 (struct device*) ;
 int FUNC_28 (struct sirf_data*) ;
 int FUNC_29 (struct sirf_data*) ;
 int VAR_12 ;
 int FUNC_30 (struct sirf_data*,int) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_31(struct serdev_device *VAR_14)
{
 struct device *VAR_15 = &VAR_14->dev;
 struct gnss_device *VAR_16;
 struct sirf_data *VAR_17;
 int VAR_18;

 VAR_17 = FUNC_5(VAR_15, sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_1;

 VAR_16 = FUNC_8(VAR_15);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->type = VAR_3;
 VAR_16->ops = &VAR_11;
 FUNC_11(VAR_16, VAR_17);

 VAR_17->serdev = VAR_14;
 VAR_17->gdev = VAR_16;

 FUNC_16(&VAR_17->gdev_mutex);
 FUNC_16(&VAR_17->serdev_mutex);
 FUNC_14(&VAR_17->power_wait);

 FUNC_24(VAR_14, VAR_17);
 FUNC_23(VAR_14, &VAR_12);

 VAR_18 = FUNC_25(VAR_14);
 if (VAR_18)
  goto err_put_device;

 VAR_17->vcc = FUNC_6(VAR_15, "vcc");
 if (FUNC_1(VAR_17->vcc)) {
  VAR_18 = FUNC_2(VAR_17->vcc);
  goto err_put_device;
 }

 VAR_17->lna = FUNC_6(VAR_15, "lna");
 if (FUNC_1(VAR_17->lna)) {
  VAR_18 = FUNC_2(VAR_17->lna);
  goto err_put_device;
 }

 VAR_17->on_off = FUNC_4(VAR_15, "sirf,onoff",
   VAR_5);
 if (FUNC_1(VAR_17->on_off))
  goto err_put_device;

 if (VAR_17->on_off) {
  VAR_17->wakeup = FUNC_4(VAR_15, "sirf,wakeup",
    VAR_4);
  if (FUNC_1(VAR_17->wakeup))
   goto err_put_device;

  VAR_18 = FUNC_21(VAR_17->vcc);
  if (VAR_18)
   goto err_put_device;


  FUNC_15(VAR_9);
 }

 if (VAR_17->wakeup) {
  VAR_18 = FUNC_12(VAR_17->wakeup);
  if (VAR_18 < 0)
   goto err_disable_vcc;
  VAR_17->active = VAR_18;

  VAR_18 = FUNC_13(VAR_17->wakeup);
  if (VAR_18 < 0)
   goto err_disable_vcc;
  VAR_17->irq = VAR_18;

  VAR_18 = FUNC_22(VAR_17->irq, ((void*)0), VAR_13,
    VAR_8 | VAR_7 | VAR_6,
    "wakeup", VAR_17);
  if (VAR_18)
   goto err_disable_vcc;
 }

 if (VAR_17->on_off) {
  if (!VAR_17->wakeup) {
   VAR_17->active = 0;

   VAR_18 = FUNC_29(VAR_17);
   if (VAR_18)
    goto err_disable_vcc;

   FUNC_15(VAR_10);
   FUNC_28(VAR_17);
  }


  if (VAR_17->active) {
   VAR_18 = FUNC_30(VAR_17, 0);
   if (VAR_18) {
    FUNC_3(VAR_15, "failed to set hibernate mode: %d\n",
      VAR_18);
    goto err_free_irq;
   }
  }
 }

 if (FUNC_0(VAR_0)) {
  FUNC_19(VAR_15);
  FUNC_18(VAR_15);
 } else {
  VAR_18 = FUNC_26(VAR_15);
  if (VAR_18 < 0)
   goto err_free_irq;
 }

 VAR_18 = FUNC_10(VAR_16);
 if (VAR_18)
  goto err_disable_rpm;

 return 0;

err_disable_rpm:
 if (FUNC_0(VAR_0))
  FUNC_17(VAR_15);
 else
  FUNC_27(VAR_15);
err_free_irq:
 if (VAR_17->wakeup)
  FUNC_7(VAR_17->irq, VAR_17);
err_disable_vcc:
 if (VAR_17->on_off)
  FUNC_20(VAR_17->vcc);
err_put_device:
 FUNC_9(VAR_17->gdev);

 return VAR_18;
}
