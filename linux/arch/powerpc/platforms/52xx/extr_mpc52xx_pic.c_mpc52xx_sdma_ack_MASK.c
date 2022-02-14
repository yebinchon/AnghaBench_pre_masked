
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct TYPE_2__ {int IntPend; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int *,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2) & VAR_0;
 FUNC_1(&VAR_1->IntPend, 1 << VAR_3);
}
