
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int devfn; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 struct pci_dev* FUNC_3 (struct pci_dev const*) ;
 int FUNC_4 (struct pci_dev*) ;

int FUNC_5(const struct pci_dev *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct pci_dev *VAR_3;
 int VAR_4, VAR_5;





 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3 == ((void*)0))
  return 0;

 VAR_4 = FUNC_0(VAR_3->devfn);
 VAR_5 = FUNC_4(VAR_3);

 return FUNC_2(VAR_5, FUNC_1(VAR_4));
}
