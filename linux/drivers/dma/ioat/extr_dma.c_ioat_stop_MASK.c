
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; } ;
struct msix_entry {int vector; } ;
struct ioatdma_device {int irq_mode; struct msix_entry* msix_entries; struct pci_dev* pdev; } ;
struct ioatdma_chan {int dma_chan; int cleanup_task; int timer; int state; struct ioatdma_device* ioat_dma; } ;





 int VAR_0 ;
 int FUNC_0 (struct ioatdma_chan*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct ioatdma_chan *VAR_1)
{
 struct ioatdma_device *VAR_2 = VAR_1->ioat_dma;
 struct pci_dev *VAR_3 = VAR_2->pdev;
 int VAR_4 = FUNC_0(VAR_1);
 struct msix_entry *VAR_5;




 FUNC_1(VAR_0, &VAR_1->state);


 switch (VAR_2->irq_mode) {
 case 128:
  VAR_5 = &VAR_2->msix_entries[VAR_4];
  FUNC_4(VAR_5->vector);
  break;
 case 129:
 case 130:
  FUNC_4(VAR_3->irq);
  break;
 default:
  break;
 }


 FUNC_2(&VAR_1->timer);


 FUNC_5(&VAR_1->cleanup_task);


 FUNC_3((unsigned long)&VAR_1->dma_chan);
}
