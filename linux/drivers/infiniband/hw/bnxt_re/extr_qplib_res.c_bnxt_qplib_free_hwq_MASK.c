
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct bnxt_qplib_hwq {int level; int is_user; scalar_t__ cp_bit; scalar_t__ cons; scalar_t__ prod; scalar_t__ element_size; scalar_t__ max_elements; int * pbl; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int *,int) ;

void FUNC_1(struct pci_dev *VAR_1, struct bnxt_qplib_hwq *VAR_2)
{
 int VAR_3;

 if (!VAR_2->max_elements)
  return;
 if (VAR_2->level >= VAR_0)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->level + 1; VAR_3++) {
  if (VAR_3 == VAR_2->level)
   FUNC_0(VAR_1, &VAR_2->pbl[VAR_3], VAR_2->is_user);
  else
   FUNC_0(VAR_1, &VAR_2->pbl[VAR_3], 0);
 }

 VAR_2->level = VAR_0;
 VAR_2->max_elements = 0;
 VAR_2->element_size = 0;
 VAR_2->prod = 0;
 VAR_2->cons = 0;
 VAR_2->cp_bit = 0;
}
