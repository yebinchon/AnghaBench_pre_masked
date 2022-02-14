
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct TYPE_2__ {scalar_t__ irq_base; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 unsigned int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 unsigned int VAR_2 = FUNC_2(VAR_1);

 if (VAR_2 != 0)
  return;

 FUNC_3(FUNC_0(0), VAR_0->irq_base + FUNC_1(0));
}
