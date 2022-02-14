
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int flags; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;
 struct gpio_desc* FUNC_3 (struct gpio_chip*,unsigned int) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct gpio_chip *VAR_2, unsigned int VAR_3)
{
 struct gpio_desc *VAR_4 = FUNC_3(VAR_2, VAR_3);

 if (!FUNC_0(VAR_4) &&
     !FUNC_1(!FUNC_4(VAR_1, &VAR_4->flags)))
  FUNC_2(VAR_0, &VAR_4->flags);
}
