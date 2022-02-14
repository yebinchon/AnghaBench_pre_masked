
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_6__ {TYPE_1__ dev; int * quirks; int * algo; int name; int owner; } ;
struct gpu_i2c_dev {TYPE_2__ adapter; int regs; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,struct gpu_i2c_dev*) ;
 struct gpu_i2c_dev* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct gpu_i2c_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct gpu_i2c_dev*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,struct gpu_i2c_dev*) ;
 int FUNC_8 (struct pci_dev*,int,int,int ) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,char*,int) ;

__attribute__((used)) static int FUNC_18(struct pci_dev *VAR_6, const struct pci_device_id *VAR_7)
{
 struct gpu_i2c_dev *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(&VAR_6->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->dev = &VAR_6->dev;
 FUNC_1(&VAR_6->dev, VAR_8);

 VAR_9 = FUNC_11(VAR_6);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_6->dev, "pcim_enable_device failed %d\n", VAR_9);
  return VAR_9;
 }

 FUNC_10(VAR_6);

 VAR_8->regs = FUNC_12(VAR_6, 0, 0);
 if (!VAR_8->regs) {
  FUNC_0(&VAR_6->dev, "pcim_iomap failed\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_8(VAR_6, 1, 1, VAR_2);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_6->dev, "pci_alloc_irq_vectors err %d\n", VAR_9);
  return VAR_9;
 }

 FUNC_3(VAR_8);

 FUNC_7(&VAR_8->adapter, VAR_8);
 VAR_8->adapter.owner = VAR_3;
 FUNC_17(VAR_8->adapter.name, "NVIDIA GPU I2C adapter",
  sizeof(VAR_8->adapter.name));
 VAR_8->adapter.algo = &VAR_4;
 VAR_8->adapter.quirks = &VAR_5;
 VAR_8->adapter.dev.parent = &VAR_6->dev;
 VAR_9 = FUNC_5(&VAR_8->adapter);
 if (VAR_9 < 0)
  goto free_irq_vectors;

 VAR_9 = FUNC_4(VAR_8, VAR_6->irq);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_6->dev, "gpu_populate_client failed %d\n", VAR_9);
  goto del_adapter;
 }

 FUNC_15(&VAR_6->dev, 3000);
 FUNC_16(&VAR_6->dev);
 FUNC_14(&VAR_6->dev);
 FUNC_13(&VAR_6->dev);

 return 0;

del_adapter:
 FUNC_6(&VAR_8->adapter);
free_irq_vectors:
 FUNC_9(VAR_6);
 return VAR_9;
}
