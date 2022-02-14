
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct core_chip_data {scalar_t__ desired_en; scalar_t__ current_en; int core_irq_mutex; } ;


 int VAR_0 ;
 struct core_chip_data* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct irq_data*,int) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1)
{
 struct core_chip_data *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->desired_en != VAR_2->current_en) {
  FUNC_2(VAR_0, VAR_1, 1);
  VAR_2->current_en = VAR_2->desired_en;
 }

 FUNC_1(&VAR_2->core_irq_mutex);
}
