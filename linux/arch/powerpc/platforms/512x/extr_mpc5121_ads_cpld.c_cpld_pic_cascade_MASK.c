
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {int dummy; } ;
struct TYPE_2__ {int misc_mask; int misc_status; int pci_mask; int pci_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int,int ,int *,int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(struct irq_desc *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_0(0, VAR_1, &VAR_2->pci_status,
  &VAR_2->pci_mask);
 if (VAR_4) {
  FUNC_1(VAR_4);
  return;
 }

 VAR_4 = FUNC_0(8, VAR_0, &VAR_2->misc_status,
  &VAR_2->misc_mask);
 if (VAR_4) {
  FUNC_1(VAR_4);
  return;
 }
}
