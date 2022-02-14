
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int devfn; } ;


 unsigned int FUNC_0 (int ) ;
 struct pci_dev* FUNC_1 (unsigned int,unsigned int,struct pci_dev*) ;

__attribute__((used)) static struct pci_dev *FUNC_2(unsigned VAR_0,
        unsigned VAR_1,
        unsigned VAR_2)
{
 struct pci_dev *VAR_3 = ((void*)0);

 while (1) {
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_3);

  if (!VAR_3)
   break;

  if (FUNC_0(VAR_3->devfn) == VAR_2)
   break;
 }

 return VAR_3;
}
