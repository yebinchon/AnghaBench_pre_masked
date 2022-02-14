
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int * resource; } ;
struct TYPE_7__ {int * parent; } ;
struct TYPE_6__ {int name; int retries; TYPE_4__ dev; int * algo; int class; int owner; } ;
struct ismt_priv {TYPE_2__ adapter; int smba; struct pci_dev* pci_dev; } ;
struct TYPE_5__ {int name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,unsigned long) ;
 int FUNC_5 (int *,char*,...) ;
 struct ismt_priv* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,struct ismt_priv*) ;
 int FUNC_9 (struct ismt_priv*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_10 (struct ismt_priv*) ;
 int FUNC_11 (struct ismt_priv*) ;
 int FUNC_12 (struct pci_dev*,size_t,int ) ;
 unsigned long FUNC_13 (struct pci_dev*,size_t) ;
 unsigned long FUNC_14 (struct pci_dev*,size_t) ;
 scalar_t__ FUNC_15 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_16 (struct pci_dev*,int ) ;
 int FUNC_17 (struct pci_dev*,struct ismt_priv*) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*,size_t,unsigned long) ;
 int VAR_8 ;
 int FUNC_21 (int ,int,char*,unsigned long) ;

__attribute__((used)) static int
FUNC_22(struct pci_dev *VAR_9, const struct pci_device_id *VAR_10)
{
 int VAR_11;
 struct ismt_priv *VAR_12;
 unsigned long VAR_13, VAR_14;

 VAR_12 = FUNC_6(&VAR_9->dev, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 FUNC_17(VAR_9, VAR_12);

 FUNC_8(&VAR_12->adapter, VAR_12);
 VAR_12->adapter.owner = VAR_6;
 VAR_12->adapter.class = VAR_3;
 VAR_12->adapter.algo = &VAR_8;
 VAR_12->adapter.dev.parent = &VAR_9->dev;
 FUNC_1(&VAR_12->adapter.dev, FUNC_0(&VAR_9->dev));
 VAR_12->adapter.retries = VAR_4;

 VAR_12->pci_dev = VAR_9;

 VAR_11 = FUNC_19(VAR_9);
 if (VAR_11) {
  FUNC_5(&VAR_9->dev, "Failed to enable SMBus PCI device (%d)\n",
   VAR_11);
  return VAR_11;
 }


 FUNC_18(VAR_9);


 VAR_13 = FUNC_14(VAR_9, VAR_5);
 VAR_14 = FUNC_13(VAR_9, VAR_5);
 if (!VAR_13 || !VAR_14) {
  FUNC_5(&VAR_9->dev,
   "SMBus base address uninitialized, upgrade BIOS\n");
  return -VAR_0;
 }

 FUNC_21(VAR_12->adapter.name, sizeof(VAR_12->adapter.name),
   "SMBus iSMT adapter at %lx", VAR_13);

 FUNC_4(&VAR_12->pci_dev->dev, " start=0x%lX\n", VAR_13);
 FUNC_4(&VAR_12->pci_dev->dev, " len=0x%lX\n", VAR_14);

 VAR_11 = FUNC_3(&VAR_9->resource[VAR_5]);
 if (VAR_11) {
  FUNC_5(&VAR_9->dev, "ACPI resource conflict!\n");
  return VAR_11;
 }

 VAR_11 = FUNC_12(VAR_9, VAR_5, VAR_7.name);
 if (VAR_11) {
  FUNC_5(&VAR_9->dev,
   "Failed to request SMBus region 0x%lx-0x%lx\n",
   VAR_13, VAR_13 + VAR_14);
  return VAR_11;
 }

 VAR_12->smba = FUNC_20(VAR_9, VAR_5, VAR_14);
 if (!VAR_12->smba) {
  FUNC_5(&VAR_9->dev, "Unable to ioremap SMBus BAR\n");
  return -VAR_0;
 }

 if ((FUNC_16(VAR_9, FUNC_2(64)) != 0) ||
     (FUNC_15(VAR_9, FUNC_2(64)) != 0)) {
  if ((FUNC_16(VAR_9, FUNC_2(32)) != 0) ||
      (FUNC_15(VAR_9,
       FUNC_2(32)) != 0)) {
   FUNC_5(&VAR_9->dev, "pci_set_dma_mask fail %p\n",
    VAR_9);
   return -VAR_0;
  }
 }

 VAR_11 = FUNC_9(VAR_12);
 if (VAR_11)
  return VAR_11;

 FUNC_10(VAR_12);

 VAR_11 = FUNC_11(VAR_12);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_7(&VAR_12->adapter);
 if (VAR_11)
  return -VAR_0;
 return 0;
}
