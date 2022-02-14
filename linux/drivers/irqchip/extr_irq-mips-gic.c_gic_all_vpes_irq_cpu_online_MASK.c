
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct gic_all_vpes_chip_data {scalar_t__ mask; int map; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 struct gic_all_vpes_chip_data* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_0)
{
 struct gic_all_vpes_chip_data *VAR_1;
 unsigned int VAR_2;

 VAR_2 = FUNC_1(VAR_0->hwirq);
 VAR_1 = FUNC_2(VAR_0);

 FUNC_4(FUNC_3(VAR_2), VAR_1->map);
 if (VAR_1->mask)
  FUNC_5(FUNC_0(VAR_2));
}
