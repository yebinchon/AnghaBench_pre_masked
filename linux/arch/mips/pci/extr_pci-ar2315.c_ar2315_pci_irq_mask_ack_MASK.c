
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int hwirq; } ;
struct ar2315_pci_ctrl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ar2315_pci_ctrl*,int ,int ,int ) ;
 int FUNC_2 (struct ar2315_pci_ctrl*,int ,int ) ;
 struct ar2315_pci_ctrl* FUNC_3 (struct irq_data*) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_2)
{
 struct ar2315_pci_ctrl *VAR_3 = FUNC_3(VAR_2);
 u32 VAR_4 = FUNC_0(VAR_2->hwirq);

 FUNC_1(VAR_3, VAR_0, VAR_4, 0);
 FUNC_2(VAR_3, VAR_1, VAR_4);
}
