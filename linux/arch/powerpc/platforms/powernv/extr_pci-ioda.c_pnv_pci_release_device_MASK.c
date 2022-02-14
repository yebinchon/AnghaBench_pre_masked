
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct pnv_ioda_pe* pe_array; } ;
struct pnv_phb {TYPE_1__ ioda; } ;
struct pnv_ioda_pe {scalar_t__ device_count; } ;
struct pci_dn {size_t pe_number; } ;
struct pci_dev {scalar_t__ is_virtfn; int bus; } ;
struct pci_controller {struct pnv_phb* private_data; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 struct pci_controller* FUNC_1 (int ) ;
 struct pci_dn* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pnv_ioda_pe*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_1)
{
 struct pci_controller *VAR_2 = FUNC_1(VAR_1->bus);
 struct pnv_phb *VAR_3 = VAR_2->private_data;
 struct pci_dn *VAR_4 = FUNC_2(VAR_1);
 struct pnv_ioda_pe *VAR_5;

 if (VAR_1->is_virtfn)
  return;

 if (!VAR_4 || VAR_4->pe_number == VAR_0)
  return;
 VAR_5 = &VAR_3->ioda.pe_array[VAR_4->pe_number];
 VAR_4->pe_number = VAR_0;

 FUNC_0(--VAR_5->device_count < 0);
 if (VAR_5->device_count == 0)
  FUNC_3(VAR_5);
}
