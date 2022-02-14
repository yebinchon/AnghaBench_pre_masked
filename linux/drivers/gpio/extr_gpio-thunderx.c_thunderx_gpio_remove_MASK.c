
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int domain; } ;
struct TYPE_5__ {int ngpio; TYPE_3__ irq; } ;
struct thunderx_gpio {TYPE_2__ chip; TYPE_1__* msix_entries; } ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {int vector; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct thunderx_gpio* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 int VAR_1;
 struct thunderx_gpio *VAR_2 = FUNC_2(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_2->chip.ngpio; VAR_1++)
  FUNC_0(VAR_2->chip.irq.domain,
       VAR_2->msix_entries[VAR_1].vector);

 FUNC_1(VAR_2->chip.irq.domain);

 FUNC_3(VAR_0, ((void*)0));
}
