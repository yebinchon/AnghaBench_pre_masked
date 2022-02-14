
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; int class; int revision; int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct pci_dev* FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static u8 FUNC_5(struct pci_dev *VAR_3)
{
 struct pci_dev *VAR_4;




 VAR_4 = FUNC_4(FUNC_3(VAR_3->bus),
     VAR_3->bus->number,
     FUNC_0(FUNC_1(VAR_3->devfn), 0));
 if (!VAR_4)
  return -1;




 if (VAR_4->vendor != VAR_2 ||
     VAR_4->device != VAR_1 ||
     VAR_4->class >> 8 != VAR_0) {
      FUNC_2(VAR_4);
  return -1;
 }



 FUNC_2(VAR_4);

 return VAR_4->revision;
}
