
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_dev {struct pci_bus* bus; } ;
struct pci_bus {scalar_t__ self; struct pci_bus* parent; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,unsigned int) ;

__attribute__((used)) static u64 FUNC_2(struct pci_dev *VAR_1, unsigned int VAR_2)
{
 struct pci_bus *VAR_3;
 unsigned int VAR_4;

 for (VAR_3 = VAR_1->bus; VAR_3 && VAR_3->self; VAR_3 = VAR_3->parent) {
  VAR_4 = FUNC_0(VAR_3->self, VAR_0);
  if (VAR_4)
   return FUNC_1(VAR_3->self, VAR_4);
 }

 return 0;
}
