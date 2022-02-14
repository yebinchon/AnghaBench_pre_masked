
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int ngpio; } ;
struct sdv_gpio_chip_data {TYPE_3__ chip; scalar_t__ gpio_pub_base; } ;
struct pci_device_id {int dummy; } ;
struct TYPE_8__ {int of_node; } ;
struct pci_dev {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*,int,scalar_t__,scalar_t__,int *,scalar_t__,int *,int ) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*,struct sdv_gpio_chip_data*) ;
 struct sdv_gpio_chip_data* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (int ,char*,int *) ;
 int FUNC_6 (struct pci_dev*,struct sdv_gpio_chip_data*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int,int ) ;
 scalar_t__* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct sdv_gpio_chip_data*,struct pci_dev*) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_9,
     const struct pci_device_id *VAR_10)
{
 struct sdv_gpio_chip_data *VAR_11;
 int VAR_12;
 u32 VAR_13;

 VAR_11 = FUNC_4(&VAR_9->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_12 = FUNC_7(VAR_9);
 if (VAR_12) {
  FUNC_1(&VAR_9->dev, "can't enable device.\n");
  return VAR_12;
 }

 VAR_12 = FUNC_8(VAR_9, 1 << VAR_4, VAR_0);
 if (VAR_12) {
  FUNC_1(&VAR_9->dev, "can't alloc PCI BAR #%d\n", VAR_4);
  return VAR_12;
 }

 VAR_11->gpio_pub_base = FUNC_9(VAR_9)[VAR_4];

 VAR_12 = FUNC_5(VAR_9->dev.of_node, "intel,muxctl", &VAR_13);
 if (!VAR_12)
  FUNC_11(VAR_13, VAR_11->gpio_pub_base + VAR_5);

 VAR_12 = FUNC_0(&VAR_11->chip, &VAR_9->dev, 4,
   VAR_11->gpio_pub_base + VAR_3, VAR_11->gpio_pub_base + VAR_7,
   ((void*)0), VAR_11->gpio_pub_base + VAR_6, ((void*)0), 0);
 if (VAR_12)
  return VAR_12;

 VAR_11->chip.ngpio = VAR_8;

 VAR_12 = FUNC_3(&VAR_9->dev, &VAR_11->chip, VAR_11);
 if (VAR_12 < 0) {
  FUNC_1(&VAR_9->dev, "gpiochip_add() failed.\n");
  return VAR_12;
 }

 VAR_12 = FUNC_10(VAR_11, VAR_9);
 if (VAR_12)
  return VAR_12;

 FUNC_6(VAR_9, VAR_11);
 FUNC_2(&VAR_9->dev, "Sodaville GPIO driver registered.\n");
 return 0;
}
