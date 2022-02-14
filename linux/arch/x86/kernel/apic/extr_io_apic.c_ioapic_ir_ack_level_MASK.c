
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vector; } ;
struct mp_chip_data {TYPE_1__ entry; } ;
struct irq_data {struct mp_chip_data* chip_data; } ;


 int FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int ,struct mp_chip_data*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct mp_chip_data *VAR_1 = VAR_0->chip_data;







 FUNC_0(VAR_0);
 FUNC_1(VAR_1->entry.vector, VAR_1);
}
