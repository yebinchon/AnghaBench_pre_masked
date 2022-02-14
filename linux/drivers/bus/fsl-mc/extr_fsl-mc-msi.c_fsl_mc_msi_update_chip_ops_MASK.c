
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_domain_info {struct irq_chip* chip; } ;
struct irq_chip {scalar_t__ irq_write_msi_msg; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct msi_domain_info *VAR_1)
{
 struct irq_chip *VAR_2 = VAR_1->chip;

 if (!VAR_2)
  return;




 if (!VAR_2->irq_write_msi_msg)
  VAR_2->irq_write_msi_msg = VAR_0;
}
