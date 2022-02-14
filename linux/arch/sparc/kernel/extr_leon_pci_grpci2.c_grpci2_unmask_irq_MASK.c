
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {scalar_t__ chip_data; } ;
struct grpci2_priv {TYPE_1__* regs; } ;
struct TYPE_2__ {int ctrl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 struct grpci2_priv* VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4;
 struct grpci2_priv *VAR_5 = VAR_1;

 VAR_4 = (unsigned int)VAR_2->chip_data - 1;
 if (VAR_4 > 3)
  return;

 FUNC_2(&VAR_0, VAR_3);
 FUNC_1(VAR_5->regs->ctrl, FUNC_0(VAR_5->regs->ctrl) | (1 << VAR_4));
 FUNC_3(&VAR_0, VAR_3);
}
