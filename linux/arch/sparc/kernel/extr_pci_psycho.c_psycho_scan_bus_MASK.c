
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_pbm_info {int pci_bus; scalar_t__ is_66mhz_capable; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct pci_pbm_info*) ;
 int FUNC_1 (struct pci_pbm_info*,struct device*) ;
 int FUNC_2 (struct pci_pbm_info*) ;

__attribute__((used)) static void FUNC_3(struct pci_pbm_info *VAR_0,
       struct device *VAR_1)
{
 FUNC_0(VAR_0);
 VAR_0->is_66mhz_capable = 0;
 VAR_0->pci_bus = FUNC_1(VAR_0, VAR_1);




 FUNC_2(VAR_0);
}
