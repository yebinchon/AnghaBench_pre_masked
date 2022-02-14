
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_domain_info {int flags; struct irq_chip* chip; } ;
struct irq_chip {int flags; scalar_t__ irq_write_msi_msg; scalar_t__ irq_set_affinity; scalar_t__ irq_eoi; scalar_t__ irq_unmask; scalar_t__ irq_mask; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_2(struct msi_domain_info *VAR_7)
{
 struct irq_chip *VAR_8 = VAR_7->chip;

 FUNC_0(!VAR_8);
 if (!VAR_8->irq_mask)
  VAR_8->irq_mask = VAR_3;
 if (!VAR_8->irq_unmask)
  VAR_8->irq_unmask = VAR_4;
 if (!VAR_8->irq_eoi)
  VAR_8->irq_eoi = VAR_2;
 if (!VAR_8->irq_set_affinity)
  VAR_8->irq_set_affinity = VAR_5;
 if (!VAR_8->irq_write_msi_msg)
  VAR_8->irq_write_msi_msg = VAR_6;
 if (FUNC_1((VAR_7->flags & VAR_1) &&
      !(VAR_8->flags & VAR_0)))
  VAR_7->flags &= ~VAR_1;
}
