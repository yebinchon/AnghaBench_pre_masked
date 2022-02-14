
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct set_msi_sid_data {scalar_t__ count; int alias; struct pci_dev* pdev; int busmatch_count; } ;
struct pci_dev {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_0, u16 VAR_1, void *VAR_2)
{
 struct set_msi_sid_data *VAR_3 = VAR_2;

 if (VAR_3->count == 0 || FUNC_0(VAR_1) == FUNC_0(VAR_3->alias))
  VAR_3->busmatch_count++;

 VAR_3->pdev = VAR_0;
 VAR_3->alias = VAR_1;
 VAR_3->count++;

 return 0;
}
