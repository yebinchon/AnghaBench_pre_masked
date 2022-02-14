
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int flags; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (int) ;
 struct gpio_desc* FUNC_2 (struct gpio_chip*,unsigned int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct gpio_chip *VAR_3, unsigned int VAR_4)
{
 struct gpio_desc *VAR_5 = FUNC_2(VAR_3, VAR_4);

 if (!FUNC_0(VAR_5) &&
     !FUNC_1(!FUNC_4(VAR_2, &VAR_5->flags))) {
  FUNC_1(FUNC_4(VAR_1, &VAR_5->flags));
  FUNC_3(VAR_0, &VAR_5->flags);
 }
}
