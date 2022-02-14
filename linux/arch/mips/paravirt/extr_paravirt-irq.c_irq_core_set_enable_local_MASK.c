
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct core_chip_data {int bit; scalar_t__ desired_en; } ;


 int FUNC_0 (unsigned int) ;
 struct core_chip_data* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct irq_data *VAR_1 = VAR_0;
 struct core_chip_data *VAR_2 = FUNC_1(VAR_1);
 unsigned int VAR_3 = 0x100 << VAR_2->bit;




 if (VAR_2->desired_en)
  FUNC_2(VAR_3);
 else
  FUNC_0(VAR_3);

}
