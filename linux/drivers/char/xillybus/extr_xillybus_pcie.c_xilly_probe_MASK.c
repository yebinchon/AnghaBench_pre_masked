
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilly_endpoint {int dma_using_dac; int dev; int registers; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int irq; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ,int ,int ,int ,struct xilly_endpoint*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int VAR_4 ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,struct xilly_endpoint*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int,int ) ;
 int * FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct xilly_endpoint*) ;
 struct xilly_endpoint* FUNC_13 (struct pci_dev*,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_14(struct pci_dev *VAR_7,
         const struct pci_device_id *VAR_8)
{
 struct xilly_endpoint *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_13(VAR_7, &VAR_7->dev, &VAR_4);

 if (!VAR_9)
  return -VAR_1;

 FUNC_7(VAR_7, VAR_9);

 VAR_10 = FUNC_9(VAR_7);
 if (VAR_10) {
  FUNC_1(VAR_9->dev,
   "pcim_enable_device() failed. Aborting.\n");
  return VAR_10;
 }



 FUNC_3(VAR_7, VAR_3);

 if (!(FUNC_5(VAR_7, 0) & VAR_2)) {
  FUNC_1(VAR_9->dev,
   "Incorrect BAR configuration. Aborting.\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_10(VAR_7, 0x01, VAR_6);
 if (VAR_10) {
  FUNC_1(VAR_9->dev,
   "pcim_iomap_regions() failed. Aborting.\n");
  return VAR_10;
 }

 VAR_9->registers = FUNC_11(VAR_7)[0];

 FUNC_8(VAR_7);


 if (FUNC_4(VAR_7)) {
  FUNC_1(VAR_9->dev,
   "Failed to enable MSI interrupts. Aborting.\n");
  return -VAR_0;
 }
 VAR_10 = FUNC_2(&VAR_7->dev, VAR_7->irq, VAR_5, 0,
         VAR_6, VAR_9);
 if (VAR_10) {
  FUNC_1(VAR_9->dev,
   "Failed to register MSI handler. Aborting.\n");
  return -VAR_0;
 }
 if (!FUNC_6(VAR_7, FUNC_0(32))) {
  VAR_9->dma_using_dac = 0;
 } else if (!FUNC_6(VAR_7, FUNC_0(64))) {
  VAR_9->dma_using_dac = 1;
 } else {
  FUNC_1(VAR_9->dev, "Failed to set DMA mask. Aborting.\n");
  return -VAR_0;
 }

 return FUNC_12(VAR_9);
}
