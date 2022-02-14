
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ u32 ;
struct skd_device {int pcie_error_reporting_is_enabled; scalar_t__* mem_map; int waitq; scalar_t__* mem_size; scalar_t__* mem_phys; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ,int ) ;
 struct skd_device* FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_15 (struct pci_dev*,int) ;
 scalar_t__ FUNC_16 (struct pci_dev*,int) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*,int ) ;
 int FUNC_20 (struct skd_device*) ;
 int FUNC_21 (struct skd_device*) ;
 int FUNC_22 (struct skd_device*) ;
 int FUNC_23 (struct skd_device*) ;
 int FUNC_24 (struct skd_device*) ;

__attribute__((used)) static int FUNC_25(struct pci_dev *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;
 struct skd_device *VAR_7;

 VAR_7 = FUNC_12(VAR_4);
 if (!VAR_7) {
  FUNC_2(&VAR_4->dev, "no device data for PCI\n");
  return -1;
 }

 FUNC_19(VAR_4, VAR_2);
 FUNC_11(VAR_4, VAR_2, 0);
 FUNC_17(VAR_4);

 VAR_6 = FUNC_9(VAR_4);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_14(VAR_4, VAR_0);
 if (VAR_6)
  goto err_out;
 VAR_6 = FUNC_3(&VAR_4->dev, FUNC_0(64));
 if (VAR_6)
  VAR_6 = FUNC_3(&VAR_4->dev, FUNC_0(32));
 if (VAR_6) {
  FUNC_2(&VAR_4->dev, "DMA mask error %d\n", VAR_6);
  goto err_out_regions;
 }

 FUNC_18(VAR_4);
 VAR_6 = FUNC_10(VAR_4);
 if (VAR_6) {
  FUNC_2(&VAR_4->dev,
   "bad enable of PCIe error reporting rc=%d\n", VAR_6);
  VAR_7->pcie_error_reporting_is_enabled = 0;
 } else
  VAR_7->pcie_error_reporting_is_enabled = 1;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {

  VAR_7->mem_phys[VAR_5] = FUNC_16(VAR_4, VAR_5);
  VAR_7->mem_size[VAR_5] = (u32)FUNC_15(VAR_4, VAR_5);
  VAR_7->mem_map[VAR_5] = FUNC_5(VAR_7->mem_phys[VAR_5],
         VAR_7->mem_size[VAR_5]);
  if (!VAR_7->mem_map[VAR_5]) {
   FUNC_2(&VAR_4->dev, "Unable to map adapter memory!\n");
   VAR_6 = -VAR_1;
   goto err_out_iounmap;
  }
  FUNC_1(&VAR_4->dev, "mem_map=%p, phyd=%016llx, size=%d\n",
   VAR_7->mem_map[VAR_5], (uint64_t)VAR_7->mem_phys[VAR_5],
   VAR_7->mem_size[VAR_5]);
 }
 VAR_6 = FUNC_20(VAR_7);
 if (VAR_6) {
  FUNC_2(&VAR_4->dev, "interrupt resource error %d\n", VAR_6);
  goto err_out_iounmap;
 }

 VAR_6 = FUNC_23(VAR_7);
 if (VAR_6)
  goto err_out_timer;

 FUNC_4(&VAR_7->waitq);

 FUNC_22(VAR_7);

 return VAR_6;

err_out_timer:
 FUNC_24(VAR_7);
 FUNC_21(VAR_7);

err_out_iounmap:
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  if (VAR_7->mem_map[VAR_5])
   FUNC_6(VAR_7->mem_map[VAR_5]);

 if (VAR_7->pcie_error_reporting_is_enabled)
  FUNC_8(VAR_4);

err_out_regions:
 FUNC_13(VAR_4);

err_out:
 FUNC_7(VAR_4);
 return VAR_6;
}
