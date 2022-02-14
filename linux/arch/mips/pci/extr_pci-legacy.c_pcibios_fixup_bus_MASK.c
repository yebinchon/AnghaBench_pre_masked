
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int class; } ;
struct pci_bus {struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pci_bus*) ;

void FUNC_2(struct pci_bus *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->self;

 if (FUNC_0(VAR_1) && VAR_3 &&
     (VAR_3->class >> 8) == VAR_0) {
  FUNC_1(VAR_2);
 }
}
