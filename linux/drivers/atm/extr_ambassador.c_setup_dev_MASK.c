
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pci_dev {int irq; } ;
struct TYPE_8__ {int lock; } ;
struct TYPE_7__ {int lock; } ;
struct TYPE_10__ {TYPE_3__* rxq; TYPE_2__ txq; TYPE_1__ cq; int vcc_sf; void* rx_avail; void* tx_avail; scalar_t__ flags; int membase; int irq; int iobase; struct pci_dev* pci_dev; } ;
typedef TYPE_4__ amb_dev ;
struct TYPE_9__ {int lock; } ;


 void* VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (struct pci_dev*,TYPE_4__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(amb_dev *VAR_2, struct pci_dev *VAR_3)
{
      unsigned char VAR_4;


      VAR_2->pci_dev = VAR_3;
      FUNC_3(VAR_3, VAR_2);

      VAR_2->iobase = FUNC_2 (VAR_3, 1);
      VAR_2->irq = VAR_3->irq;
      VAR_2->membase = FUNC_0(FUNC_2(VAR_3, 0));


      VAR_2->flags = 0;




      VAR_2->tx_avail = VAR_0;
      VAR_2->rx_avail = VAR_0;



      FUNC_1(&VAR_2->vcc_sf);




      FUNC_4 (&VAR_2->cq.lock);
      FUNC_4 (&VAR_2->txq.lock);
      for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
 FUNC_4 (&VAR_2->rxq[VAR_4].lock);
}
