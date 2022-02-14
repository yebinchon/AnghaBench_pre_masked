
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_ring_irq_data {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct pci_dev {struct device dev; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int,int ,int ,int ,int ,struct safexcel_ring_irq_data*) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct platform_device*,char*) ;
 int FUNC_6 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_7(void *VAR_3, int VAR_4,
         int VAR_5,
         irq_handler_t VAR_6,
         irq_handler_t VAR_7,
         struct safexcel_ring_irq_data *VAR_8)
{
 int VAR_9, VAR_10;
 struct device *VAR_11;

 if (FUNC_0(VAR_1) && VAR_5) {
  struct pci_dev *VAR_12 = VAR_3;

  VAR_11 = &VAR_12->dev;
  VAR_10 = FUNC_4(VAR_12, VAR_4);
  if (VAR_10 < 0) {
   FUNC_1(VAR_11, "unable to get device MSI IRQ %d (err %d)\n",
    VAR_4, VAR_10);
   return VAR_10;
  }
 } else if (FUNC_0(VAR_0)) {
  struct platform_device *VAR_13 = VAR_3;
  char VAR_14[6] = {0};

  FUNC_6(VAR_14, 6, "ring%d", VAR_4);
  VAR_11 = &VAR_13->dev;
  VAR_10 = FUNC_5(VAR_13, VAR_14);

  if (VAR_10 < 0) {
   FUNC_1(VAR_11, "unable to get IRQ '%s' (err %d)\n",
    VAR_14, VAR_10);
   return VAR_10;
  }
 }

 VAR_9 = FUNC_3(VAR_11, VAR_10, VAR_6,
     VAR_7, VAR_2,
     FUNC_2(VAR_11), VAR_8);
 if (VAR_9) {
  FUNC_1(VAR_11, "unable to request IRQ %d\n", VAR_10);
  return VAR_9;
 }

 return VAR_10;
}
