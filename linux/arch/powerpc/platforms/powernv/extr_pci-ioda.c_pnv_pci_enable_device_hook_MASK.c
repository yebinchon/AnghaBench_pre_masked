
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnv_phb {int initialized; } ;
struct pci_dn {scalar_t__ pe_number; } ;
struct pci_dev {int bus; } ;
struct pci_controller {struct pnv_phb* private_data; } ;


 scalar_t__ VAR_0 ;
 struct pci_controller* FUNC_0 (int ) ;
 struct pci_dn* FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static bool FUNC_2(struct pci_dev *VAR_1)
{
 struct pci_controller *VAR_2 = FUNC_0(VAR_1->bus);
 struct pnv_phb *VAR_3 = VAR_2->private_data;
 struct pci_dn *VAR_4;






 if (!VAR_3->initialized)
  return 1;

 VAR_4 = FUNC_1(VAR_1);
 if (!VAR_4 || VAR_4->pe_number == VAR_0)
  return 0;

 return 1;
}
