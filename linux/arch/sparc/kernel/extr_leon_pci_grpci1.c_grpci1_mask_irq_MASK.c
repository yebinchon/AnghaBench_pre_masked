
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_data {scalar_t__ chip_data; } ;
struct grpci1_priv {TYPE_1__* regs; } ;
struct TYPE_2__ {int irq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct grpci1_priv* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_2)
{
 u32 VAR_3;
 struct grpci1_priv *VAR_4 = VAR_1;

 VAR_3 = (u32)VAR_2->chip_data - 1;
 if (VAR_3 > 3)
  return;
 VAR_3 += VAR_0;

 FUNC_1(VAR_4->regs->irq, FUNC_0(VAR_4->regs->irq) & ~(1 << VAR_3));
}
