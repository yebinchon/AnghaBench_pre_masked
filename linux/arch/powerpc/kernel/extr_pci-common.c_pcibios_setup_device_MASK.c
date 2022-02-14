
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dma_offset; } ;
struct TYPE_8__ {TYPE_2__ archdata; } ;
struct pci_dev {int bus; TYPE_3__ dev; } ;
struct TYPE_6__ {int (* dma_dev_setup ) (struct pci_dev*) ;} ;
struct pci_controller {TYPE_1__ controller_ops; } ;
struct TYPE_9__ {int (* pci_irq_fixup ) (struct pci_dev*) ;} ;


 int VAR_0 ;
 struct pci_controller* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ) ;
 TYPE_5__ VAR_2 ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_3)
{
 struct pci_controller *VAR_4;



 FUNC_3(&VAR_3->dev, FUNC_2(VAR_3->bus));


 FUNC_4(&VAR_3->dev, VAR_1);
 VAR_3->dev.archdata.dma_offset = VAR_0;


 VAR_4 = FUNC_0(VAR_3->bus);
 if (VAR_4->controller_ops.dma_dev_setup)
  VAR_4->controller_ops.dma_dev_setup(VAR_3);


 FUNC_1(VAR_3);
 if (VAR_2.pci_irq_fixup)
  VAR_2.pci_irq_fixup(VAR_3);
}
