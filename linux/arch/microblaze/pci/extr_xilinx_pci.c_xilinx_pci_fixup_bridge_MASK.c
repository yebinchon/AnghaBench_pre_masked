
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; TYPE_1__* resource; TYPE_2__* bus; scalar_t__ devfn; } ;
struct pci_controller {int dn; } ;
struct TYPE_4__ {scalar_t__ self; } ;
struct TYPE_3__ {scalar_t__ flags; scalar_t__ end; scalar_t__ start; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 struct pci_controller* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct pci_dev*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_2)
{
 struct pci_controller *VAR_3;
 int VAR_4;

 if (VAR_2->devfn || VAR_2->bus->self)
  return;

 VAR_3 = FUNC_2(VAR_2->bus);
 if (!VAR_3)
  return;

 if (!FUNC_1(VAR_1, VAR_3->dn))
  return;




 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2->resource[VAR_4].start = 0;
  VAR_2->resource[VAR_4].end = 0;
  VAR_2->resource[VAR_4].flags = 0;
 }

 FUNC_0(&VAR_2->dev, "Hiding Xilinx plb-pci host bridge resources %s\n",
   FUNC_3(VAR_2));
}
