
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct core_chip_data {unsigned int bit; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct core_chip_data* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct core_chip_data *VAR_1 = FUNC_2(VAR_0);
 unsigned int VAR_2 = VAR_1->bit;






 FUNC_1(0x100 << VAR_2);

 if (VAR_2 < 2)
  FUNC_0(0x100 << VAR_2);
}
