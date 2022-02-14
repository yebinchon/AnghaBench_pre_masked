
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ devfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pci_dev*,int ,int) ;
 int FUNC_1 (struct pci_dev*,int ,int ) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_7)
{
 if (VAR_7->devfn != 0)
  return;

 FUNC_3("PCI: fixing up ADM8668 controller\n");


 FUNC_2(VAR_7, VAR_3,
  (VAR_4 | VAR_6 | VAR_5));


 FUNC_0(VAR_7, VAR_2, 4);


 FUNC_1(VAR_7, VAR_0, 0);
 FUNC_1(VAR_7, VAR_1, 0);
}
