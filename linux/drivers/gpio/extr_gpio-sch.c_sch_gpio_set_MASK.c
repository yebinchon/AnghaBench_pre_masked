
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sch_gpio {int lock; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct sch_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct sch_gpio*,unsigned int,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_1, unsigned VAR_2, int VAR_3)
{
 struct sch_gpio *VAR_4 = FUNC_0(VAR_1);

 FUNC_2(&VAR_4->lock);
 FUNC_1(VAR_4, VAR_2, VAR_0, VAR_3);
 FUNC_3(&VAR_4->lock);
}
