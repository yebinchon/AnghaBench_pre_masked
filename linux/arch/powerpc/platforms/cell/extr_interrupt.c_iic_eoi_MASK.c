
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct iic {size_t eoi_ptr; int * eoi_stack; TYPE_1__* regs; } ;
struct TYPE_2__ {int prio; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 struct iic* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1)
{
 struct iic *VAR_2 = FUNC_2(&VAR_0);
 FUNC_1(&VAR_2->regs->prio, VAR_2->eoi_stack[--VAR_2->eoi_ptr]);
 FUNC_0(VAR_2->eoi_ptr < 0);
}
