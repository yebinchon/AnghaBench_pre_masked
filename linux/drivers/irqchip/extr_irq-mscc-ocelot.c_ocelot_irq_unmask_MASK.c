
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct irq_data {unsigned int mask; } ;
struct irq_chip_type {unsigned int* mask_cache; } ;
struct irq_chip_generic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct irq_chip_type* FUNC_1 (struct irq_data*) ;
 struct irq_chip_generic* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_chip_generic*) ;
 int FUNC_4 (struct irq_chip_generic*) ;
 unsigned int FUNC_5 (struct irq_chip_generic*,int ) ;
 int FUNC_6 (struct irq_chip_generic*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_2)
{
 struct irq_chip_generic *VAR_3 = FUNC_2(VAR_2);
 struct irq_chip_type *VAR_4 = FUNC_1(VAR_2);
 unsigned int VAR_5 = VAR_2->mask;
 u32 VAR_6;

 FUNC_3(VAR_3);
 VAR_6 = FUNC_5(VAR_3, FUNC_0(0)) |
       FUNC_5(VAR_3, FUNC_0(1));
 if (!(VAR_6 & VAR_5))
  FUNC_6(VAR_3, VAR_5, VAR_1);

 *VAR_4->mask_cache &= ~VAR_5;
 FUNC_6(VAR_3, VAR_5, VAR_0);
 FUNC_4(VAR_3);
}
