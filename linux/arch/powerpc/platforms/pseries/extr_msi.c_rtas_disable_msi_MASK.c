
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dn {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_dn* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct pci_dn*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_2)
{
 struct pci_dn *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  return;




 if (FUNC_2(VAR_3, VAR_1, 0) != 0) {




  if (FUNC_2(VAR_3, VAR_0, 0) != 0) {
   FUNC_1("rtas_msi: Setting MSIs to 0 failed!\n");
  }
 }
}
