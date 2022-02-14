
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_data {int irq; } ;
struct ipic {int regs; } ;
struct TYPE_2__ {int bit; int ack; int mask; } ;


 struct ipic* FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 unsigned int FUNC_3 (struct irq_data*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_2)
{
 struct ipic *VAR_3 = FUNC_0(VAR_2->irq);
 unsigned int VAR_4 = FUNC_3(VAR_2);
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_5(&VAR_1, VAR_5);

 VAR_6 = FUNC_1(VAR_3->regs, VAR_0[VAR_4].mask);
 VAR_6 &= ~(1 << (31 - VAR_0[VAR_4].bit));
 FUNC_2(VAR_3->regs, VAR_0[VAR_4].mask, VAR_6);

 VAR_6 = 1 << (31 - VAR_0[VAR_4].bit);
 FUNC_2(VAR_3->regs, VAR_0[VAR_4].ack, VAR_6);



 FUNC_4();

 FUNC_6(&VAR_1, VAR_5);
}
