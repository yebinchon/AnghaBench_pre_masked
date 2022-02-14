
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int table_count; struct msix_table_entry* table; scalar_t__ function_mask; } ;
struct pci_devinst {int pi_vmctx; TYPE_1__ pi_msix; } ;
struct msix_table_entry {int vector_control; int msg_data; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_devinst*) ;
 int FUNC_1 (int ,int ,int ) ;

void
FUNC_2(struct pci_devinst *VAR_1, int VAR_2)
{
 struct msix_table_entry *VAR_3;

 if (!FUNC_0(VAR_1))
  return;

 if (VAR_1->pi_msix.function_mask)
  return;

 if (VAR_2 >= VAR_1->pi_msix.table_count)
  return;

 VAR_3 = &VAR_1->pi_msix.table[VAR_2];
 if ((VAR_3->vector_control & VAR_0) == 0) {

  FUNC_1(VAR_1->pi_vmctx, VAR_3->addr, VAR_3->msg_data);
 }
}
