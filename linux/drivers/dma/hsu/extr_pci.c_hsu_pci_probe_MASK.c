
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct hsu_dma_chip {int irq; int offset; int length; int regs; int * dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char*) ;
 struct hsu_dma_chip* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct hsu_dma_chip*) ;
 int FUNC_5 (struct hsu_dma_chip*) ;
 int VAR_4 ;
 int FUNC_6 (struct pci_dev*,int,int,int ) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,struct hsu_dma_chip*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*,int ,int ) ;
 int * FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (int ,int ,int ,char*,struct hsu_dma_chip*) ;

__attribute__((used)) static int FUNC_19(struct pci_dev *VAR_5, const struct pci_device_id *VAR_6)
{
 struct hsu_dma_chip *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_15(VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_16(VAR_5, FUNC_0(0), FUNC_8(VAR_5));
 if (VAR_8) {
  FUNC_2(&VAR_5->dev, "I/O memory remapping failed\n");
  return VAR_8;
 }

 FUNC_13(VAR_5);
 FUNC_14(VAR_5);

 VAR_8 = FUNC_11(VAR_5, FUNC_1(32));
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_10(VAR_5, FUNC_1(32));
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_3(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_6(VAR_5, 1, 1, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7->dev = &VAR_5->dev;
 VAR_7->regs = FUNC_17(VAR_5)[0];
 VAR_7->length = FUNC_9(VAR_5, 0);
 VAR_7->offset = VAR_2;
 VAR_7->irq = FUNC_7(VAR_5, 0);

 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_18(VAR_7->irq, VAR_4, 0, "hsu_dma_pci", VAR_7);
 if (VAR_8)
  goto err_register_irq;

 FUNC_12(VAR_5, VAR_7);

 return 0;

err_register_irq:
 FUNC_5(VAR_7);
 return VAR_8;
}
