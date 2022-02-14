
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct TYPE_2__ {int qchunksize; } ;
struct cpt_vf {int vfgrp; int priority; struct pci_dev* pdev; TYPE_1__ cqinfo; int node; int reg_base; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct cpt_vf*) ;
 int FUNC_2 (struct cpt_vf*) ;
 int VAR_11 ;
 int FUNC_3 (struct cpt_vf*) ;
 int FUNC_4 (struct cpt_vf*) ;
 int FUNC_5 (struct cpt_vf*) ;
 int FUNC_6 (struct cpt_vf*,int ) ;
 int VAR_12 ;
 int FUNC_7 (struct cpt_vf*) ;
 int FUNC_8 (struct cpt_vf*) ;
 int FUNC_9 (struct cpt_vf*) ;
 int FUNC_10 (struct cpt_vf*) ;
 int FUNC_11 (struct cpt_vf*,int ) ;
 int FUNC_12 (struct cpt_vf*,int ,int ) ;
 int FUNC_13 (struct cpt_vf*) ;
 int FUNC_14 (struct device*,char*,...) ;
 int FUNC_15 (struct device*) ;
 struct cpt_vf* FUNC_16 (struct device*,int,int ) ;
 int FUNC_17 (int ,struct cpt_vf*) ;
 int FUNC_18 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*,int ) ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (struct pci_dev*,int ) ;
 int FUNC_25 (struct pci_dev*,int ) ;
 int FUNC_26 (struct pci_dev*,int ) ;
 int FUNC_27 (struct pci_dev*,struct cpt_vf*) ;
 int FUNC_28 (struct pci_dev*,int ,int ) ;
 int FUNC_29 (int ,int ,int ,char*,struct cpt_vf*) ;

__attribute__((used)) static int FUNC_30(struct pci_dev *VAR_13, const struct pci_device_id *VAR_14)
{
 struct device *VAR_15 = &VAR_13->dev;
 struct cpt_vf *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_16(VAR_15, sizeof(*VAR_16), VAR_9);
 if (!VAR_16)
  return -VAR_8;

 FUNC_27(VAR_13, VAR_16);
 VAR_16->pdev = VAR_13;
 VAR_17 = FUNC_20(VAR_13);
 if (VAR_17) {
  FUNC_14(VAR_15, "Failed to enable PCI device\n");
  FUNC_27(VAR_13, ((void*)0));
  return VAR_17;
 }

 VAR_17 = FUNC_24(VAR_13, VAR_7);
 if (VAR_17) {
  FUNC_14(VAR_15, "PCI request regions failed 0x%x\n", VAR_17);
  goto cptvf_err_disable_device;
 }

 VAR_16->flags |= VAR_2;
 VAR_17 = FUNC_26(VAR_13, FUNC_0(48));
 if (VAR_17) {
  FUNC_14(VAR_15, "Unable to get usable DMA configuration\n");
  goto cptvf_err_release_regions;
 }

 VAR_17 = FUNC_25(VAR_13, FUNC_0(48));
 if (VAR_17) {
  FUNC_14(VAR_15, "Unable to get 48-bit DMA for consistent allocations\n");
  goto cptvf_err_release_regions;
 }


 VAR_16->reg_base = FUNC_28(VAR_13, 0, 0);
 if (!VAR_16->reg_base) {
  FUNC_14(VAR_15, "Cannot map config register space, aborting\n");
  VAR_17 = -VAR_8;
  goto cptvf_err_release_regions;
 }

 VAR_16->node = FUNC_15(&VAR_13->dev);
 VAR_17 = FUNC_18(VAR_13, VAR_6,
   VAR_6, VAR_10);
 if (VAR_17 < 0) {
  FUNC_14(VAR_15, "Request for #%d msix vectors failed\n",
   VAR_6);
  goto cptvf_err_release_regions;
 }

 VAR_17 = FUNC_29(FUNC_22(VAR_13, VAR_5),
     VAR_12, 0, "CPT VF misc intr",
     VAR_16);
 if (VAR_17) {
  FUNC_14(VAR_15, "Request misc irq failed");
  goto cptvf_free_vectors;
 }


 FUNC_4(VAR_16);
 FUNC_5(VAR_16);



 VAR_17 = FUNC_1(VAR_16);
 if (VAR_17) {
  FUNC_14(VAR_15, "PF not responding to READY msg");
  goto cptvf_free_misc_irq;
 }


 VAR_16->cqinfo.qchunksize = VAR_0;
 VAR_17 = FUNC_12(VAR_16, VAR_1, VAR_3);
 if (VAR_17) {
  FUNC_14(VAR_15, "cptvf_sw_init() failed");
  goto cptvf_free_misc_irq;
 }

 VAR_17 = FUNC_10(VAR_16);
 if (VAR_17) {
  FUNC_14(VAR_15, "PF not responding to QLEN msg");
  goto cptvf_free_misc_irq;
 }


 FUNC_2(VAR_16);

 VAR_16->vfgrp = 1;
 VAR_17 = FUNC_8(VAR_16);
 if (VAR_17) {
  FUNC_14(VAR_15, "PF not responding to VF_GRP msg");
  goto cptvf_free_misc_irq;
 }

 VAR_16->priority = 1;
 VAR_17 = FUNC_7(VAR_16);
 if (VAR_17) {
  FUNC_14(VAR_15, "PF not responding to VF_PRIO msg");
  goto cptvf_free_misc_irq;
 }

 VAR_17 = FUNC_29(FUNC_22(VAR_13, VAR_4),
     VAR_11, 0, "CPT VF done intr",
     VAR_16);
 if (VAR_17) {
  FUNC_14(VAR_15, "Request done irq failed\n");
  goto cptvf_free_misc_irq;
 }


 FUNC_3(VAR_16);


 FUNC_11(VAR_16, VAR_5);
 FUNC_11(VAR_16, VAR_4);

 VAR_17 = FUNC_9(VAR_16);
 if (VAR_17) {
  FUNC_14(VAR_15, "PF not responding to UP msg");
  goto cptvf_free_irq_affinity;
 }
 VAR_17 = FUNC_13(VAR_16);
 if (VAR_17) {
  FUNC_14(VAR_15, "Algorithm register failed\n");
  goto cptvf_free_irq_affinity;
 }
 return 0;

cptvf_free_irq_affinity:
 FUNC_6(VAR_16, VAR_4);
 FUNC_6(VAR_16, VAR_5);
cptvf_free_misc_irq:
 FUNC_17(FUNC_22(VAR_13, VAR_5), VAR_16);
cptvf_free_vectors:
 FUNC_21(VAR_16->pdev);
cptvf_err_release_regions:
 FUNC_23(VAR_13);
cptvf_err_disable_device:
 FUNC_19(VAR_13);
 FUNC_27(VAR_13, ((void*)0));

 return VAR_17;
}
