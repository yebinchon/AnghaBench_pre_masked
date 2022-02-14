
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_4__ {int msix_vector_idx; } ;
struct TYPE_3__ {int msix_vector_idx; } ;
struct efa_com_dev {int reg_bar; TYPE_2__ aenq; TYPE_1__ aq; int * dmadev; struct efa_dev* efa_dev; } ;
struct efa_dev {int ibdev; int admin_msix_vector_idx; void* reg_bar_len; void* reg_bar_addr; void* mem_bar_len; void* mem_bar_addr; struct pci_dev* pdev; struct efa_com_dev edev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct efa_dev* FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,void*,void*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct efa_com_dev*,int *) ;
 int FUNC_5 (struct efa_com_dev*) ;
 int FUNC_6 (struct efa_com_dev*) ;
 int VAR_10 ;
 int FUNC_7 (struct efa_com_dev*,struct pci_dev*) ;
 int FUNC_8 (struct efa_dev*) ;
 int FUNC_9 (struct efa_dev*) ;
 int FUNC_10 (struct efa_dev*) ;
 int FUNC_11 (struct efa_dev*,int) ;
 int FUNC_12 (struct efa_dev*) ;
 struct efa_dev* FUNC_13 (int ,int ) ;
 int FUNC_14 (int *) ;
 int VAR_11 ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*,int,int ) ;
 void* FUNC_18 (struct pci_dev*,int ) ;
 void* FUNC_19 (struct pci_dev*,int ) ;
 int FUNC_20 (struct pci_dev*,int ) ;
 int FUNC_21 (struct pci_dev*,struct efa_dev*) ;
 int FUNC_22 (struct pci_dev*) ;

__attribute__((used)) static struct efa_dev *FUNC_23(struct pci_dev *VAR_12)
{
 struct efa_com_dev *VAR_13;
 struct efa_dev *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_16 = FUNC_16(VAR_12);
 if (VAR_16) {
  FUNC_1(&VAR_12->dev, "pci_enable_device_mem() failed!\n");
  return FUNC_0(VAR_16);
 }

 FUNC_22(VAR_12);

 VAR_14 = FUNC_13(VAR_10, VAR_11);
 if (!VAR_14) {
  FUNC_1(&VAR_12->dev, "Device alloc failed\n");
  VAR_16 = -VAR_5;
  goto err_disable_device;
 }

 FUNC_21(VAR_12, VAR_14);
 VAR_13 = &VAR_14->edev;
 VAR_13->efa_dev = VAR_14;
 VAR_13->dmadev = &VAR_12->dev;
 VAR_14->pdev = VAR_12;

 VAR_15 = FUNC_20(VAR_12, VAR_8) & VAR_2;
 VAR_16 = FUNC_17(VAR_12, VAR_15, VAR_0);
 if (VAR_16) {
  FUNC_1(&VAR_12->dev, "pci_request_selected_regions failed %d\n",
   VAR_16);
  goto err_ibdev_destroy;
 }

 VAR_14->reg_bar_addr = FUNC_19(VAR_12, VAR_4);
 VAR_14->reg_bar_len = FUNC_18(VAR_12, VAR_4);
 VAR_14->mem_bar_addr = FUNC_19(VAR_12, VAR_3);
 VAR_14->mem_bar_len = FUNC_18(VAR_12, VAR_3);

 VAR_13->reg_bar = FUNC_2(&VAR_12->dev,
         VAR_14->reg_bar_addr,
         VAR_14->reg_bar_len);
 if (!VAR_13->reg_bar) {
  FUNC_1(&VAR_12->dev, "Failed to remap register bar\n");
  VAR_16 = -VAR_1;
  goto err_release_bars;
 }

 VAR_16 = FUNC_6(VAR_13);
 if (VAR_16) {
  FUNC_1(&VAR_12->dev, "Failed to init readless MMIO\n");
  goto err_iounmap;
 }

 VAR_16 = FUNC_7(VAR_13, VAR_12);
 if (VAR_16) {
  FUNC_1(&VAR_12->dev, "EFA device init failed\n");
  if (VAR_16 == -VAR_7)
   VAR_16 = -VAR_6;
  goto err_reg_read_destroy;
 }

 VAR_16 = FUNC_9(VAR_14);
 if (VAR_16)
  goto err_reg_read_destroy;

 VAR_13->aq.msix_vector_idx = VAR_14->admin_msix_vector_idx;
 VAR_13->aenq.msix_vector_idx = VAR_14->admin_msix_vector_idx;

 VAR_16 = FUNC_12(VAR_14);
 if (VAR_16)
  goto err_disable_msix;

 VAR_16 = FUNC_4(VAR_13, &VAR_9);
 if (VAR_16)
  goto err_free_mgmnt_irq;

 return VAR_14;

err_free_mgmnt_irq:
 FUNC_10(VAR_14);
err_disable_msix:
 FUNC_8(VAR_14);
err_reg_read_destroy:
 FUNC_5(VAR_13);
err_iounmap:
 FUNC_3(&VAR_12->dev, VAR_13->reg_bar);
err_release_bars:
 FUNC_11(VAR_14, VAR_2);
err_ibdev_destroy:
 FUNC_14(&VAR_14->ibdev);
err_disable_device:
 FUNC_15(VAR_12);
 return FUNC_0(VAR_16);
}
