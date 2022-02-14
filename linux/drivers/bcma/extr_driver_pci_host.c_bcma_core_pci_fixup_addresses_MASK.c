
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int flags; } ;
struct pci_dev {struct resource* resource; int devfn; TYPE_2__* bus; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {scalar_t__ read; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_3)
{
 struct resource *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_3->bus->ops->read != VAR_2) {

  return;
 }
 if (FUNC_0(VAR_3->devfn) == 0)
  return;

 FUNC_4("PCI: Fixing up addresses %s\n", FUNC_2(VAR_3));

 for (VAR_5 = 0; VAR_5 < 6; VAR_5++) {
  VAR_4 = &VAR_3->resource[VAR_5];
  if (VAR_4->flags & (VAR_0 | VAR_1)) {
   VAR_6 = FUNC_1(VAR_3, VAR_5);
   if (VAR_6)
    FUNC_3("PCI: Problem fixing up the addresses on %s\n",
           FUNC_2(VAR_3));
  }
 }
}
