
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct pci_dev {scalar_t__ is_physfn; struct device dev; } ;
struct hisi_qm {int ver; int io_base; scalar_t__ use_dma_api; int qps_lock; int mailbox_lock; TYPE_1__* ops; struct pci_dev* pdev; int dev_name; } ;
struct TYPE_3__ {unsigned int (* get_irq_num ) (struct hisi_qm*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (struct device*,char*,char*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pci_dev*,unsigned int,unsigned int,int ) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*) ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_16 (struct hisi_qm*) ;
 int FUNC_17 (int *) ;
 unsigned int FUNC_18 (struct hisi_qm*) ;

int FUNC_19(struct hisi_qm *VAR_7)
{
 struct pci_dev *VAR_8 = VAR_7->pdev;
 struct device *VAR_9 = &VAR_8->dev;
 unsigned int VAR_10;
 int VAR_11;

 switch (VAR_7->ver) {
 case 129:
  VAR_7->ops = &VAR_5;
  break;
 case 128:
  VAR_7->ops = &VAR_6;
  break;
 default:
  return -VAR_0;
 }

 VAR_11 = FUNC_9(VAR_8);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_8->dev, "Failed to enable device mem!\n");
  return VAR_11;
 }

 VAR_11 = FUNC_12(VAR_8, VAR_7->dev_name);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_8->dev, "Failed to request mem regions!\n");
  goto err_disable_pcidev;
 }

 VAR_7->io_base = FUNC_4(FUNC_14(VAR_8, VAR_3),
         FUNC_13(VAR_7->pdev, VAR_3));
 if (!VAR_7->io_base) {
  VAR_11 = -VAR_1;
  goto err_release_mem_regions;
 }

 VAR_11 = FUNC_3(VAR_9, FUNC_0(64));
 if (VAR_11 < 0)
  goto err_iounmap;
 FUNC_15(VAR_8);

 if (!VAR_7->ops->get_irq_num) {
  VAR_11 = -VAR_2;
  goto err_iounmap;
 }
 VAR_10 = VAR_7->ops->get_irq_num(VAR_7);
 VAR_11 = FUNC_7(VAR_8, VAR_10, VAR_10, VAR_4);
 if (VAR_11 < 0) {
  FUNC_2(VAR_9, "Failed to enable MSI vectors!\n");
  goto err_iounmap;
 }

 VAR_11 = FUNC_16(VAR_7);
 if (VAR_11)
  goto err_free_irq_vectors;

 FUNC_6(&VAR_7->mailbox_lock);
 FUNC_17(&VAR_7->qps_lock);

 FUNC_1(VAR_9, "init qm %s with %s\n", VAR_8->is_physfn ? "pf" : "vf",
  VAR_7->use_dma_api ? "dma api" : "iommu api");

 return 0;

err_free_irq_vectors:
 FUNC_10(VAR_8);
err_iounmap:
 FUNC_5(VAR_7->io_base);
err_release_mem_regions:
 FUNC_11(VAR_8);
err_disable_pcidev:
 FUNC_8(VAR_8);

 return VAR_11;
}
