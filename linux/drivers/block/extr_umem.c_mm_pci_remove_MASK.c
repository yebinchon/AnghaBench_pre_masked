
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int irq; } ;
struct cardinfo {int queue; TYPE_2__* mm_pages; TYPE_1__* dev; int csr_remap; int tasklet; } ;
struct TYPE_4__ {int page_dma; scalar_t__ desc; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,scalar_t__,int ) ;
 int FUNC_2 (int ,struct cardinfo*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pci_dev*) ;
 struct cardinfo* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_1)
{
 struct cardinfo *VAR_2 = FUNC_5(VAR_1);

 FUNC_7(&VAR_2->tasklet);
 FUNC_2(VAR_1->irq, VAR_2);
 FUNC_3(VAR_2->csr_remap);

 if (VAR_2->mm_pages[0].desc)
  FUNC_1(&VAR_2->dev->dev, VAR_0 * 2,
        VAR_2->mm_pages[0].desc,
        VAR_2->mm_pages[0].page_dma);
 if (VAR_2->mm_pages[1].desc)
  FUNC_1(&VAR_2->dev->dev, VAR_0 * 2,
        VAR_2->mm_pages[1].desc,
        VAR_2->mm_pages[1].page_dma);
 FUNC_0(VAR_2->queue);

 FUNC_6(VAR_1);
 FUNC_4(VAR_1);
}
