
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
struct thunderx_ocx {scalar_t__ regs; int debugfs; TYPE_2__* msix_ent; struct pci_dev* pdev; scalar_t__ link_ring_tail; scalar_t__ link_ring_head; scalar_t__ com_ring_tail; scalar_t__ com_ring_head; struct edac_device_ctl_info* edac_dev; } ;
struct pci_device_id {int dummy; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_10__ {TYPE_1__ kobj; } ;
struct pci_dev {TYPE_3__ dev; } ;
struct edac_device_ctl_info {char* mod_name; char* ctl_name; int dev_name; TYPE_3__* dev; struct thunderx_ocx* pvt_info; } ;
typedef int name ;
struct TYPE_9__ {int entry; scalar_t__ vector; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (TYPE_3__*,char*,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,char*,int,char*) ;
 int FUNC_10 (TYPE_3__*,scalar_t__,int ,int ,int ,char*,TYPE_2__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct edac_device_ctl_info*) ;
 struct edac_device_ctl_info* FUNC_13 (int,char*,int,char*,int,int ,int *,int ,int) ;
 int FUNC_14 () ;
 int FUNC_15 (struct edac_device_ctl_info*) ;
 int VAR_11 ;
 int FUNC_16 (struct pci_dev*,TYPE_2__*,int) ;
 int FUNC_17 (struct pci_dev*,struct edac_device_ctl_info*) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*,int ,char*) ;
 scalar_t__* FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (char*,int,char*,int) ;
 int FUNC_23 (int ,int ,struct thunderx_ocx*,int) ;
 int FUNC_24 (struct thunderx_ocx*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_25 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_26(struct pci_dev *VAR_16,
         const struct pci_device_id *VAR_17)
{
 struct thunderx_ocx *VAR_18;
 struct edac_device_ctl_info *VAR_19;
 char VAR_20[32];
 int VAR_21;
 int VAR_22;
 int VAR_23;
 u64 VAR_24;

 VAR_23 = FUNC_18(VAR_16);
 if (VAR_23) {
  FUNC_7(&VAR_16->dev, "Cannot enable PCI device: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_23 = FUNC_19(VAR_16, FUNC_1(0), "thunderx_ocx");
 if (VAR_23) {
  FUNC_7(&VAR_16->dev, "Cannot map PCI resources: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_21 = FUNC_14();
 FUNC_22(VAR_20, sizeof(VAR_20), "OCX%d", VAR_21);
 VAR_19 = FUNC_13(sizeof(struct thunderx_ocx),
           VAR_20, 1, "CCPI", 1,
           0, ((void*)0), 0, VAR_21);
 if (!VAR_19) {
  FUNC_7(&VAR_16->dev, "Cannot allocate EDAC device: %d\n", VAR_23);
  return -VAR_2;
 }
 VAR_18 = VAR_19->pvt_info;
 VAR_18->edac_dev = VAR_19;
 VAR_18->com_ring_head = 0;
 VAR_18->com_ring_tail = 0;
 VAR_18->link_ring_head = 0;
 VAR_18->link_ring_tail = 0;

 VAR_18->regs = FUNC_20(VAR_16)[0];
 if (!VAR_18->regs) {
  FUNC_7(&VAR_16->dev, "Cannot map PCI resources: %d\n", VAR_23);
  VAR_23 = -VAR_1;
  goto err_free;
 }

 VAR_18->pdev = VAR_16;

 for (VAR_22 = 0; VAR_22 < VAR_7; VAR_22++) {
  VAR_18->msix_ent[VAR_22].entry = VAR_22;
  VAR_18->msix_ent[VAR_22].vector = 0;
 }

 VAR_23 = FUNC_16(VAR_16, VAR_18->msix_ent, VAR_7);
 if (VAR_23) {
  FUNC_7(&VAR_16->dev, "Cannot enable interrupt: %d\n", VAR_23);
  goto err_free;
 }

 for (VAR_22 = 0; VAR_22 < VAR_7; VAR_22++) {
  VAR_23 = FUNC_10(&VAR_16->dev,
      VAR_18->msix_ent[VAR_22].vector,
      (VAR_22 == 3) ?
       VAR_12 :
       VAR_14,
      (VAR_22 == 3) ?
       VAR_13 :
       VAR_15,
      0, "[EDAC] ThunderX OCX",
      &VAR_18->msix_ent[VAR_22]);
  if (VAR_23)
   goto err_free;
 }

 VAR_19->dev = &VAR_16->dev;
 VAR_19->dev_name = FUNC_8(&VAR_16->dev);
 VAR_19->mod_name = "thunderx-ocx";
 VAR_19->ctl_name = "thunderx-ocx";

 VAR_23 = FUNC_12(VAR_19);
 if (VAR_23) {
  FUNC_7(&VAR_16->dev, "Cannot add EDAC device: %d\n", VAR_23);
  goto err_free;
 }

 if (FUNC_2(VAR_0)) {
  VAR_18->debugfs = FUNC_11(VAR_16->dev.kobj.name);

  VAR_23 = FUNC_23(VAR_18->debugfs,
          VAR_11,
          VAR_18,
          FUNC_0(VAR_11));
  if (VAR_23 != FUNC_0(VAR_11)) {
   FUNC_9(&VAR_16->dev, "Error creating debugfs entries: %d%s\n",
     VAR_23, VAR_23 >= 0 ? " created" : "");
  }
 }

 FUNC_17(VAR_16, VAR_19);

 FUNC_24(VAR_18);

 for (VAR_22 = 0; VAR_22 < VAR_10; VAR_22++) {
  FUNC_25(VAR_9,
         VAR_18->regs + FUNC_6(VAR_22));

  VAR_24 = FUNC_21(VAR_18->regs + FUNC_5(VAR_22));
  FUNC_25(VAR_24, VAR_18->regs + FUNC_5(VAR_22));

 }

 for (VAR_22 = 0; VAR_22 < VAR_8; VAR_22++) {
  VAR_24 = FUNC_21(VAR_18->regs + FUNC_3(VAR_22));
  FUNC_25(VAR_24, VAR_18->regs + FUNC_3(VAR_22));

  FUNC_25(VAR_6,
         VAR_18->regs + FUNC_4(VAR_22));
 }

 VAR_24 = FUNC_21(VAR_18->regs + VAR_3);
 FUNC_25(VAR_24, VAR_18->regs + VAR_3);

 FUNC_25(VAR_4, VAR_18->regs + VAR_5);

 return 0;
err_free:
 FUNC_15(VAR_19);

 return VAR_23;
}
