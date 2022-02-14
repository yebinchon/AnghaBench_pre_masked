
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct crystalcove_gpio {int update; int buslock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crystalcove_gpio*,int) ;
 int FUNC_1 (struct crystalcove_gpio*,int) ;
 struct crystalcove_gpio* FUNC_2 (int ) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_2)
{
 struct crystalcove_gpio *VAR_3 =
  FUNC_2(FUNC_3(VAR_2));
 int VAR_4 = VAR_2->hwirq;

 if (VAR_3->update & VAR_1)
  FUNC_0(VAR_3, VAR_4);
 if (VAR_3->update & VAR_0)
  FUNC_1(VAR_3, VAR_4);
 VAR_3->update = 0;

 FUNC_4(&VAR_3->buslock);
}
