
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct TYPE_2__ {int cpic_cimr; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_1)
{
 unsigned int VAR_2 = (unsigned int)FUNC_0(VAR_1);

 FUNC_1(&VAR_0->cpic_cimr, (1 << VAR_2));
}
