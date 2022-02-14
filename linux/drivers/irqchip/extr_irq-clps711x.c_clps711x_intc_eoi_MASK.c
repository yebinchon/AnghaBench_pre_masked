
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct irq_data {int dummy; } ;
typedef size_t irq_hw_number_t ;
struct TYPE_4__ {scalar_t__ base; } ;
struct TYPE_3__ {scalar_t__ eoi; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_2)
{
 irq_hw_number_t VAR_3 = FUNC_0(VAR_2);

 FUNC_1(0, VAR_0->base + VAR_1[VAR_3].eoi);
}
