
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int vendor; int device; TYPE_1__* bus; } ;
struct TYPE_2__ {int number; int bridge; scalar_t__ parent; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,char*) ;
 struct pci_dev* FUNC_2 (int ) ;

int FUNC_3(const struct pci_dev *VAR_1, u8 VAR_2, u8 VAR_3)
{






 if (FUNC_1(FUNC_0(), "EBH5600") &&
     VAR_1->bus && VAR_1->bus->parent) {




  while (VAR_1->bus && VAR_1->bus->parent)
   VAR_1 = FUNC_2(VAR_1->bus->bridge);





  if ((VAR_1->bus->number == 1) &&
      (VAR_1->vendor == 0x10b5) && (VAR_1->device == 0x8114)) {




   VAR_3 = ((VAR_3 - 3) & 3) + 1;
  }
 }





 return VAR_3 - 1 + VAR_0;
}
