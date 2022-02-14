
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct resource {int dummy; } ;
struct priv {TYPE_1__* bus; int base; int mapbase; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_7__ {int get_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ,int ) ;
 struct priv* FUNC_6 (int *,int,int ) ;
 struct resource* FUNC_7 (int *,int ,int ,int ) ;
 TYPE_1__* FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 unsigned long FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*,struct priv*) ;
 int FUNC_16 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_17(struct pci_dev *VAR_9, const struct pci_device_id *VAR_10)
{
 struct resource *VAR_11;
 struct priv *VAR_12;
 int VAR_13;
 unsigned long VAR_14;

 VAR_12 = FUNC_6(&VAR_9->dev, sizeof(struct priv), VAR_5);
 if (!VAR_12)
  return -VAR_3;

 VAR_13 = FUNC_12(VAR_9);
 if (VAR_13) {
  FUNC_4(&VAR_9->dev, "Failed to enable PCI device\n");
  return -VAR_2;
 }
 FUNC_16(VAR_9);

 VAR_12->mapbase = FUNC_14(VAR_9, 0);
 if (!VAR_12->mapbase) {
  FUNC_4(&VAR_9->dev, "No PCI resource\n");
  VAR_13 = -VAR_2;
  goto out_disable;
 }

 VAR_11 = FUNC_7(&VAR_9->dev, VAR_12->mapbase,
          VAR_0,
          VAR_7);
 if (!VAR_11) {
  FUNC_4(&VAR_9->dev, "Failed to request PCI memory\n");
  VAR_13 = -VAR_1;
  goto out_disable;
 }

 VAR_12->base = FUNC_5(&VAR_9->dev, VAR_12->mapbase, VAR_0);
 if (!VAR_12->base) {
  FUNC_4(&VAR_9->dev, "Cannot ioremap\n");
  VAR_13 = -VAR_3;
  goto out_disable;
 }

 VAR_14 = FUNC_13(VAR_9, 0);
 if (VAR_14 & VAR_6) {
  VAR_13 = -VAR_4;
  FUNC_4(&VAR_9->dev,
   "IO mapped PCI devices are not supported\n");
  goto out_disable;
 }

 FUNC_15(VAR_9, VAR_12);

 VAR_12->bus = FUNC_8(&VAR_9->dev);
 if (FUNC_0(VAR_12->bus)) {
  VAR_13 = FUNC_1(VAR_12->bus);
  goto out_disable;
 }

 VAR_12->bus->get_irq = VAR_8;

 VAR_13 = FUNC_2(VAR_12->bus, VAR_12->mapbase, VAR_12->base);
 if (VAR_13 < 0)
  goto out_mcb_bus;

 FUNC_3(&VAR_9->dev, "Found %d cells\n", VAR_13);

 FUNC_9(VAR_12->bus);

 return 0;

out_mcb_bus:
 FUNC_10(VAR_12->bus);
out_disable:
 FUNC_11(VAR_9);
 return VAR_13;
}
