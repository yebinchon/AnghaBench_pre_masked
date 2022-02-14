
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct cpt_device {int reg_base; struct pci_dev* pdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cpt_device*) ;
 int FUNC_2 (struct cpt_device*) ;
 int FUNC_3 (struct cpt_device*,int) ;
 int FUNC_4 (struct cpt_device*) ;
 int FUNC_5 (struct cpt_device*) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*,char*,int) ;
 struct cpt_device* FUNC_8 (struct device*,int,int ) ;
 int VAR_3 ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*,struct cpt_device*) ;
 int FUNC_16 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_17(struct pci_dev *VAR_4, const struct pci_device_id *VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev;
 struct cpt_device *VAR_7;
 int VAR_8;

 if (VAR_3 > 16 || VAR_3 < 4) {
  FUNC_7(VAR_6, "Invalid vf count %d, Resetting it to 4(default)\n",
    VAR_3);
  VAR_3 = 4;
 }

 VAR_7 = FUNC_8(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_15(VAR_4, VAR_7);
 VAR_7->pdev = VAR_4;
 VAR_8 = FUNC_10(VAR_4);
 if (VAR_8) {
  FUNC_6(VAR_6, "Failed to enable PCI device\n");
  FUNC_15(VAR_4, ((void*)0));
  return VAR_8;
 }

 VAR_8 = FUNC_12(VAR_4, VAR_0);
 if (VAR_8) {
  FUNC_6(VAR_6, "PCI request regions failed 0x%x\n", VAR_8);
  goto cpt_err_disable_device;
 }

 VAR_8 = FUNC_14(VAR_4, FUNC_0(48));
 if (VAR_8) {
  FUNC_6(VAR_6, "Unable to get usable DMA configuration\n");
  goto cpt_err_release_regions;
 }

 VAR_8 = FUNC_13(VAR_4, FUNC_0(48));
 if (VAR_8) {
  FUNC_6(VAR_6, "Unable to get 48-bit DMA for consistent allocations\n");
  goto cpt_err_release_regions;
 }


 VAR_7->reg_base = FUNC_16(VAR_4, 0, 0);
 if (!VAR_7->reg_base) {
  FUNC_6(VAR_6, "Cannot map config register space, aborting\n");
  VAR_8 = -VAR_1;
  goto cpt_err_release_regions;
 }


 FUNC_1(VAR_7);


 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8)
  goto cpt_err_release_regions;

 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8)
  goto cpt_err_unregister_interrupts;


 VAR_8 = FUNC_3(VAR_7, VAR_3);
 if (VAR_8)
  goto cpt_err_unregister_interrupts;

 return 0;

cpt_err_unregister_interrupts:
 FUNC_5(VAR_7);
cpt_err_release_regions:
 FUNC_11(VAR_4);
cpt_err_disable_device:
 FUNC_9(VAR_4);
 FUNC_15(VAR_4, ((void*)0));
 return VAR_8;
}
