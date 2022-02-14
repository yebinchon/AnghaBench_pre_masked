
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct crystalcove_gpio {int buslock; } ;


 struct crystalcove_gpio* FUNC_0 (int ) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct crystalcove_gpio *VAR_1 =
  FUNC_0(FUNC_1(VAR_0));

 FUNC_2(&VAR_1->buslock);
}
