
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct TYPE_2__ {int dma; scalar_t__ va; int size; } ;
struct hisi_qm {int io_base; TYPE_1__ qdma; scalar_t__ use_dma_api; struct pci_dev* pdev; } ;


 int FUNC_0 (struct device*,int ,scalar_t__,int ) ;
 int FUNC_1 (struct hisi_qm*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct hisi_qm*) ;

void FUNC_8(struct hisi_qm *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;
 struct device *VAR_2 = &VAR_1->dev;

 if (VAR_0->use_dma_api && VAR_0->qdma.va) {
  FUNC_1(VAR_0);
  FUNC_0(VAR_2, VAR_0->qdma.size,
      VAR_0->qdma.va, VAR_0->qdma.dma);
  FUNC_3(&VAR_0->qdma, 0, sizeof(VAR_0->qdma));
 }

 FUNC_7(VAR_0);
 FUNC_5(VAR_1);
 FUNC_2(VAR_0->io_base);
 FUNC_6(VAR_1);
 FUNC_4(VAR_1);
}
