
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_device {size_t index; scalar_t__ reg_base; struct pci_dev* pdev; } ;
struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {int device; int vendor; struct device dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,size_t,int ,int ,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,struct zip_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 scalar_t__ FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,struct zip_device*) ;
 struct zip_device* FUNC_14 (struct pci_dev*) ;
 int ** VAR_3 ;
 int FUNC_15 (struct zip_device*) ;

__attribute__((used)) static int FUNC_16(struct pci_dev *VAR_4, const struct pci_device_id *VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev;
 struct zip_device *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_7 = FUNC_14(VAR_4);
 if (!VAR_7)
  return -VAR_1;

 FUNC_2(VAR_6, "Found ZIP device %d %x:%x on Node %d\n", VAR_7->index,
   VAR_4->vendor, VAR_4->device, FUNC_3(VAR_6));

 FUNC_13(VAR_4, VAR_7);
 VAR_7->pdev = VAR_4;

 VAR_8 = FUNC_7(VAR_4);
 if (VAR_8) {
  FUNC_1(VAR_6, "Failed to enable PCI device");
  goto err_free_device;
 }

 VAR_8 = FUNC_10(VAR_4, VAR_0);
 if (VAR_8) {
  FUNC_1(VAR_6, "PCI request regions failed 0x%x", VAR_8);
  goto err_disable_device;
 }

 VAR_8 = FUNC_12(VAR_4, FUNC_0(48));
 if (VAR_8) {
  FUNC_1(VAR_6, "Unable to get usable DMA configuration\n");
  goto err_release_regions;
 }

 VAR_8 = FUNC_11(VAR_4, FUNC_0(48));
 if (VAR_8) {
  FUNC_1(VAR_6, "Unable to get 48-bit DMA for allocations\n");
  goto err_release_regions;
 }


 VAR_7->reg_base = FUNC_8(VAR_4, VAR_2);
 if (!VAR_7->reg_base) {
  FUNC_1(VAR_6, "ZIP: Cannot map BAR0 CSR memory space, aborting");
  VAR_8 = -VAR_1;
  goto err_release_regions;
 }


 VAR_8 = FUNC_15(VAR_7);
 if (VAR_8)
  goto err_release_regions;

 return 0;

err_release_regions:
 if (VAR_7->reg_base)
  FUNC_5(VAR_7->reg_base);
 FUNC_9(VAR_4);

err_disable_device:
 FUNC_6(VAR_4);

err_free_device:
 FUNC_13(VAR_4, ((void*)0));


 VAR_3[VAR_7->index] = ((void*)0);
 FUNC_4(VAR_6, VAR_7);

 return VAR_8;
}
