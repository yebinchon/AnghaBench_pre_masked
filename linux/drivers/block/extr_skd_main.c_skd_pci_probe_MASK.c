
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ u32 ;
struct skd_device {int pcie_error_reporting_is_enabled; scalar_t__ gendisk_on; scalar_t__* mem_map; int waitq; scalar_t__* mem_size; scalar_t__* mem_phys; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int device; int vendor; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char*,scalar_t__,int ,...) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_15 (struct pci_dev*,int) ;
 scalar_t__ FUNC_16 (struct pci_dev*,int) ;
 int FUNC_17 (struct pci_dev*,struct skd_device*) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (struct skd_device*) ;
 int FUNC_21 (int *,struct skd_device*) ;
 struct skd_device* FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct skd_device*) ;
 int VAR_7 ;
 int FUNC_24 (struct skd_device*,char*) ;
 int FUNC_25 (struct skd_device*) ;
 int FUNC_26 (struct skd_device*) ;
 int FUNC_27 (struct skd_device*) ;
 int FUNC_28 (struct skd_device*) ;
 int FUNC_29 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_30(struct pci_dev *VAR_8, const struct pci_device_id *VAR_9)
{
 int VAR_10;
 int VAR_11 = 0;
 char VAR_12[32];
 struct skd_device *VAR_13;

 FUNC_2(&VAR_8->dev, "vendor=%04X device=%04x\n", VAR_8->vendor,
  VAR_8->device);

 VAR_11 = FUNC_11(VAR_8);
 if (VAR_11)
  return VAR_11;
 VAR_11 = FUNC_14(VAR_8, VAR_0);
 if (VAR_11)
  goto err_out;
 VAR_11 = FUNC_5(&VAR_8->dev, FUNC_1(64));
 if (VAR_11)
  VAR_11 = FUNC_5(&VAR_8->dev, FUNC_1(32));
 if (VAR_11) {
  FUNC_3(&VAR_8->dev, "DMA mask error %d\n", VAR_11);
  goto err_out_regions;
 }

 if (!VAR_7) {
  VAR_11 = FUNC_19(0, VAR_0);
  if (VAR_11 < 0)
   goto err_out_regions;
  FUNC_0(!VAR_11);
  VAR_7 = VAR_11;
 }

 VAR_13 = FUNC_22(VAR_8);
 if (VAR_13 == ((void*)0)) {
  VAR_11 = -VAR_2;
  goto err_out_regions;
 }

 FUNC_24(VAR_13, VAR_12);
 FUNC_4(&VAR_8->dev, "%s 64bit\n", VAR_12);

 FUNC_18(VAR_8);
 VAR_11 = FUNC_12(VAR_8);
 if (VAR_11) {
  FUNC_3(&VAR_8->dev,
   "bad enable of PCIe error reporting rc=%d\n", VAR_11);
  VAR_13->pcie_error_reporting_is_enabled = 0;
 } else
  VAR_13->pcie_error_reporting_is_enabled = 1;

 FUNC_17(VAR_8, VAR_13);

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  VAR_13->mem_phys[VAR_10] = FUNC_16(VAR_8, VAR_10);
  VAR_13->mem_size[VAR_10] = (u32)FUNC_15(VAR_8, VAR_10);
  VAR_13->mem_map[VAR_10] = FUNC_7(VAR_13->mem_phys[VAR_10],
         VAR_13->mem_size[VAR_10]);
  if (!VAR_13->mem_map[VAR_10]) {
   FUNC_3(&VAR_8->dev,
    "Unable to map adapter memory!\n");
   VAR_11 = -VAR_1;
   goto err_out_iounmap;
  }
  FUNC_2(&VAR_8->dev, "mem_map=%p, phyd=%016llx, size=%d\n",
   VAR_13->mem_map[VAR_10], (uint64_t)VAR_13->mem_phys[VAR_10],
   VAR_13->mem_size[VAR_10]);
 }

 VAR_11 = FUNC_20(VAR_13);
 if (VAR_11) {
  FUNC_3(&VAR_8->dev, "interrupt resource error %d\n", VAR_11);
  goto err_out_iounmap;
 }

 VAR_11 = FUNC_27(VAR_13);
 if (VAR_11)
  goto err_out_timer;

 FUNC_6(&VAR_13->waitq);

 FUNC_26(VAR_13);

 VAR_11 = FUNC_29(VAR_13->waitq,
           (VAR_13->gendisk_on),
           (VAR_6 * VAR_4));
 if (VAR_13->gendisk_on > 0) {

  FUNC_21(&VAR_8->dev, VAR_13);
  VAR_11 = 0;
 } else {


  FUNC_3(&VAR_8->dev, "error: waiting for s1120 timed out %d!\n",
   VAR_11);

  if (!VAR_11)
   VAR_11 = -VAR_3;
  goto err_out_timer;
 }

 return VAR_11;

err_out_timer:
 FUNC_28(VAR_13);
 FUNC_25(VAR_13);

err_out_iounmap:
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
  if (VAR_13->mem_map[VAR_10])
   FUNC_8(VAR_13->mem_map[VAR_10]);

 if (VAR_13->pcie_error_reporting_is_enabled)
  FUNC_10(VAR_8);

 FUNC_23(VAR_13);

err_out_regions:
 FUNC_13(VAR_8);

err_out:
 FUNC_9(VAR_8);
 FUNC_17(VAR_8, ((void*)0));
 return VAR_11;
}
