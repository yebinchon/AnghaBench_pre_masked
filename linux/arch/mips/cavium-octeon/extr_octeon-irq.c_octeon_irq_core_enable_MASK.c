
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_core_chip_data {int desired_en; } ;
struct irq_data {int dummy; } ;


 struct octeon_core_chip_data* FUNC_0 (struct irq_data*) ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_0)
{
 struct octeon_core_chip_data *VAR_1 = FUNC_0(VAR_0);
 VAR_1->desired_en = 1;
}
