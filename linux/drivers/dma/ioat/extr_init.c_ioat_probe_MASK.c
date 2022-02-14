
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct dma_device {int chancnt; struct device* dev; int cap_mask; } ;
struct ioatdma_device {int completion_pool; struct pci_dev* pdev; struct dma_device dma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,struct device*,int,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ioatdma_device*) ;
 int FUNC_5 (struct ioatdma_device*) ;
 int FUNC_6 (struct ioatdma_device*) ;
 int FUNC_7 (struct ioatdma_device*) ;

__attribute__((used)) static int FUNC_8(struct ioatdma_device *VAR_4)
{
 int VAR_5 = -VAR_1;
 struct dma_device *VAR_6 = &VAR_4->dma_dev;
 struct pci_dev *VAR_7 = VAR_4->pdev;
 struct device *VAR_8 = &VAR_7->dev;

 VAR_4->completion_pool = FUNC_2("completion_pool", VAR_8,
          sizeof(u64),
          VAR_3,
          VAR_3);

 if (!VAR_4->completion_pool) {
  VAR_5 = -VAR_2;
  goto err_out;
 }

 FUNC_7(VAR_4);

 FUNC_1(VAR_0, VAR_6->cap_mask);
 VAR_6->dev = &VAR_7->dev;

 if (!VAR_6->chancnt) {
  FUNC_0(VAR_8, "channel enumeration error\n");
  goto err_setup_interrupts;
 }

 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5)
  goto err_setup_interrupts;

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  goto err_self_test;

 return 0;

err_self_test:
 FUNC_5(VAR_4);
err_setup_interrupts:
 FUNC_3(VAR_4->completion_pool);
err_out:
 return VAR_5;
}
