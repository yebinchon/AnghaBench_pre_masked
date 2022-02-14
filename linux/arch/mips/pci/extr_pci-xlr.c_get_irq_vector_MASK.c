
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int devfn; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 struct pci_dev* FUNC_3 (struct pci_dev const*) ;

__attribute__((used)) static int FUNC_4(const struct pci_dev *VAR_1)
{
 struct pci_dev *VAR_2;
 int VAR_3;

 if (!FUNC_1())
  return VAR_0;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 == ((void*)0))
  return 0;

 VAR_3 = FUNC_0(VAR_2->devfn);
 return FUNC_2(VAR_3);
}
