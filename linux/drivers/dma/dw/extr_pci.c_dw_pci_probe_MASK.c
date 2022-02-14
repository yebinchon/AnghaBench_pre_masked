
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int irq; int devfn; int dev; } ;
struct dw_dma_chip_pdata {int (* probe ) (struct dw_dma_chip*) ;struct dw_dma_chip* chip; int pdata; } ;
struct dw_dma_chip {int pdata; int irq; int regs; int id; int * dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 struct dw_dma_chip_pdata* FUNC_2 (int *,struct dw_dma_chip_pdata const*,int,int ) ;
 struct dw_dma_chip* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,struct dw_dma_chip_pdata*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int,int ) ;
 int * FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct dw_dma_chip*) ;

__attribute__((used)) static int FUNC_14(struct pci_dev *VAR_2, const struct pci_device_id *VAR_3)
{
 const struct dw_dma_chip_pdata *VAR_4 = (void *)VAR_3->driver_data;
 struct dw_dma_chip_pdata *VAR_5;
 struct dw_dma_chip *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_10(VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_11(VAR_2, 1 << 0, FUNC_4(VAR_2));
 if (VAR_7) {
  FUNC_1(&VAR_2->dev, "I/O memory remapping failed\n");
  return VAR_7;
 }

 FUNC_8(VAR_2);
 FUNC_9(VAR_2);

 VAR_7 = FUNC_6(VAR_2, FUNC_0(32));
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_2, FUNC_0(32));
 if (VAR_7)
  return VAR_7;

 VAR_5 = FUNC_2(&VAR_2->dev, VAR_4, sizeof(*VAR_4), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_3(&VAR_2->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->dev = &VAR_2->dev;
 VAR_6->id = VAR_2->devfn;
 VAR_6->regs = FUNC_12(VAR_2)[0];
 VAR_6->irq = VAR_2->irq;
 VAR_6->pdata = VAR_5->pdata;

 VAR_5->chip = VAR_6;

 VAR_7 = VAR_5->probe(VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_7(VAR_2, VAR_5);

 return 0;
}
