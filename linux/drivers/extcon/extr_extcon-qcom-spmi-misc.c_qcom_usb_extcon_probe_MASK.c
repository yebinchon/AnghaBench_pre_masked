
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct qcom_usb_extcon_info {scalar_t__ irq; TYPE_1__ wq_detcable; int debounce_jiffies; int edev; } ;
struct device {int dummy; } ;
struct platform_device {int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int (*) (int *)) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct device*,int ) ;
 int FUNC_5 (struct device*,int ) ;
 struct qcom_usb_extcon_info* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int,int *,int ,int,int ,struct qcom_usb_extcon_info*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct platform_device*,char*) ;
 int FUNC_10 (struct platform_device*,struct qcom_usb_extcon_info*) ;
 int VAR_6 ;
 int FUNC_11 (int *) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct qcom_usb_extcon_info *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_6(VAR_9, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->edev = FUNC_4(VAR_9, VAR_6);
 if (FUNC_1(VAR_10->edev)) {
  FUNC_2(VAR_9, "failed to allocate extcon device\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_5(VAR_9, VAR_10->edev);
 if (VAR_11 < 0) {
  FUNC_2(VAR_9, "failed to register extcon device\n");
  return VAR_11;
 }

 VAR_10->debounce_jiffies = FUNC_8(VAR_5);
 FUNC_0(&VAR_10->wq_detcable, FUNC_11);

 VAR_10->irq = FUNC_9(VAR_8, "usb_id");
 if (VAR_10->irq < 0)
  return VAR_10->irq;

 VAR_11 = FUNC_7(VAR_9, VAR_10->irq, ((void*)0),
     VAR_7,
     VAR_4 |
     VAR_3 | VAR_2,
     VAR_8->name, VAR_10);
 if (VAR_11 < 0) {
  FUNC_2(VAR_9, "failed to request handler for ID IRQ\n");
  return VAR_11;
 }

 FUNC_10(VAR_8, VAR_10);
 FUNC_3(VAR_9, 1);


 FUNC_11(&VAR_10->wq_detcable.work);

 return 0;
}
