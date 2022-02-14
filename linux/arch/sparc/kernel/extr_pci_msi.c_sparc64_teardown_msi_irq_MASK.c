
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sparc64_msiq_ops {int (* msi_teardown ) (struct pci_pbm_info*,unsigned int) ;} ;
struct pci_pbm_info {int msi_num; unsigned int* msi_irq_table; int msi_first; int name; struct sparc64_msiq_ops* msi_ops; } ;
struct TYPE_3__ {struct pci_pbm_info* host_controller; } ;
struct TYPE_4__ {TYPE_1__ archdata; } ;
struct pci_dev {TYPE_2__ dev; } ;


 int FUNC_0 (struct pci_pbm_info*,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (struct pci_dev*,char*,int ,unsigned int,...) ;
 int FUNC_4 (struct pci_pbm_info*,unsigned int) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_0,
         struct pci_dev *VAR_1)
{
 struct pci_pbm_info *VAR_2 = VAR_1->dev.archdata.host_controller;
 const struct sparc64_msiq_ops *VAR_3 = VAR_2->msi_ops;
 unsigned int VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2->msi_num; VAR_5++) {
  if (VAR_2->msi_irq_table[VAR_5] == VAR_0)
   break;
 }
 if (VAR_5 >= VAR_2->msi_num) {
  FUNC_3(VAR_1, "%s: teardown: No MSI for irq %u\n", VAR_2->name,
   VAR_0);
  return;
 }

 VAR_4 = VAR_2->msi_first + VAR_5;
 VAR_2->msi_irq_table[VAR_5] = ~0U;

 VAR_6 = VAR_3->msi_teardown(VAR_2, VAR_4);
 if (VAR_6) {
  FUNC_3(VAR_1, "%s: teardown: ops->teardown() on MSI %u, "
   "irq %u, gives error %d\n", VAR_2->name, VAR_4, VAR_0,
   VAR_6);
  return;
 }

 FUNC_0(VAR_2, VAR_4);

 FUNC_2(VAR_0, ((void*)0));
 FUNC_1(VAR_0);
}
