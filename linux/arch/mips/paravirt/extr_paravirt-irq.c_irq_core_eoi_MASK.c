
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct core_chip_data {int bit; } ;


 struct core_chip_data* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct core_chip_data *VAR_1 = FUNC_0(VAR_0);






 FUNC_1(0x100 << VAR_1->bit);
}
