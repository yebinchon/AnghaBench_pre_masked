
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int revision; int device; int vendor; } ;
struct TYPE_4__ {int dropped; int completed; int posted; } ;
struct TYPE_3__ {int revision_id; int device_id; int vendor_id; } ;
struct nitrox_device {scalar_t__ node; int state; TYPE_2__ stats; int qlen; int nr_queues; int bar_addr; int timeout; TYPE_1__ hw; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct nitrox_device*) ;
 struct nitrox_device* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct nitrox_device*) ;
 int FUNC_14 () ;
 int FUNC_15 (struct nitrox_device*) ;
 int FUNC_16 (struct nitrox_device*) ;
 int FUNC_17 (struct pci_dev*) ;
 int VAR_9 ;
 int FUNC_18 (struct nitrox_device*) ;
 int FUNC_19 (struct nitrox_device*) ;
 int FUNC_20 (struct nitrox_device*) ;
 int FUNC_21 (struct nitrox_device*) ;
 int FUNC_22 () ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (struct pci_dev*) ;
 int FUNC_25 (struct pci_dev*) ;
 int FUNC_26 (struct pci_dev*,int ) ;
 int FUNC_27 (struct pci_dev*,int ) ;
 int FUNC_28 (struct pci_dev*,int ) ;
 int FUNC_29 (struct pci_dev*,struct nitrox_device*) ;
 int FUNC_30 (struct pci_dev*) ;
 int VAR_10 ;
 int FUNC_31 () ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_32(struct pci_dev *VAR_12,
   const struct pci_device_id *VAR_13)
{
 struct nitrox_device *VAR_14;
 int VAR_15;

 FUNC_5(&VAR_12->dev, "%s driver version %s\n",
        VAR_9, VAR_1);

 VAR_15 = FUNC_24(VAR_12);
 if (VAR_15)
  return VAR_15;


 VAR_15 = FUNC_17(VAR_12);
 if (VAR_15) {
  FUNC_4(&VAR_12->dev, "FLR failed\n");
  FUNC_23(VAR_12);
  return VAR_15;
 }

 if (!FUNC_7(&VAR_12->dev, FUNC_0(64))) {
  FUNC_3(&VAR_12->dev, "DMA to 64-BIT address\n");
 } else {
  VAR_15 = FUNC_7(&VAR_12->dev, FUNC_0(32));
  if (VAR_15) {
   FUNC_4(&VAR_12->dev, "DMA configuration failed\n");
   FUNC_23(VAR_12);
   return VAR_15;
  }
 }

 VAR_15 = FUNC_26(VAR_12, VAR_9);
 if (VAR_15) {
  FUNC_23(VAR_12);
  return VAR_15;
 }
 FUNC_30(VAR_12);

 VAR_14 = FUNC_10(sizeof(*VAR_14), VAR_4);
 if (!VAR_14) {
  VAR_15 = -VAR_3;
  goto ndev_fail;
 }

 FUNC_29(VAR_12, VAR_14);
 VAR_14->pdev = VAR_12;


 FUNC_13(VAR_14);

 VAR_14->hw.vendor_id = VAR_12->vendor;
 VAR_14->hw.device_id = VAR_12->device;
 VAR_14->hw.revision_id = VAR_12->revision;

 VAR_14->timeout = FUNC_12(VAR_0);
 VAR_14->node = FUNC_6(&VAR_12->dev);
 if (VAR_14->node == VAR_6)
  VAR_14->node = 0;

 VAR_14->bar_addr = FUNC_8(FUNC_28(VAR_12, 0),
     FUNC_27(VAR_12, 0));
 if (!VAR_14->bar_addr) {
  VAR_15 = -VAR_2;
  goto ioremap_err;
 }

 VAR_14->nr_queues = FUNC_11(VAR_11, VAR_5, FUNC_22());
 VAR_14->qlen = VAR_10;

 VAR_15 = FUNC_20(VAR_14);
 if (VAR_15)
  goto ioremap_err;

 VAR_15 = FUNC_18(VAR_14);
 if (VAR_15)
  goto pf_hw_fail;

 FUNC_16(VAR_14);


 FUNC_1(&VAR_14->stats.posted, 0);
 FUNC_1(&VAR_14->stats.completed, 0);
 FUNC_1(&VAR_14->stats.dropped, 0);

 FUNC_2(&VAR_14->state, VAR_8);

 FUNC_31();

 VAR_15 = FUNC_14();
 if (VAR_15)
  goto crypto_fail;

 return 0;

crypto_fail:
 FUNC_15(VAR_14);
 FUNC_2(&VAR_14->state, VAR_7);

 FUNC_31();
pf_hw_fail:
 FUNC_19(VAR_14);
ioremap_err:
 FUNC_21(VAR_14);
 FUNC_9(VAR_14);
 FUNC_29(VAR_12, ((void*)0));
ndev_fail:
 FUNC_25(VAR_12);
 FUNC_23(VAR_12);
 return VAR_15;
}
