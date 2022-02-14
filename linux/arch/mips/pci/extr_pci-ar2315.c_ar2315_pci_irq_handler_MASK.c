
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_desc {int dummy; } ;
struct ar2315_pci_ctrl {int domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ar2315_pci_ctrl*,int ) ;
 int FUNC_2 (unsigned int) ;
 struct ar2315_pci_ctrl* FUNC_3 (struct irq_desc*) ;
 unsigned int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_2)
{
 struct ar2315_pci_ctrl *VAR_3 = FUNC_3(VAR_2);
 u32 VAR_4 = FUNC_1(VAR_3, VAR_1) &
        FUNC_1(VAR_3, VAR_0);
 unsigned VAR_5 = 0;

 if (VAR_4)
  VAR_5 = FUNC_4(VAR_3->domain, FUNC_0(VAR_4));

 if (VAR_5)
  FUNC_2(VAR_5);
 else
  FUNC_5();
}
