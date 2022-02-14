
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int flags; } ;
struct gpio_chip {int (* get_direction ) (struct gpio_chip*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 unsigned int FUNC_1 (struct gpio_desc*) ;
 struct gpio_chip* FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct gpio_chip*,unsigned int) ;

int FUNC_5(struct gpio_desc *VAR_2)
{
 struct gpio_chip *VAR_3;
 unsigned VAR_4;
 int VAR_5;

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_1(VAR_2);

 if (!VAR_3->get_direction)
  return -VAR_0;

 VAR_5 = VAR_3->get_direction(VAR_3, VAR_4);
 if (VAR_5 > 0) {

  VAR_5 = 1;
  FUNC_0(VAR_1, &VAR_2->flags);
 }
 if (VAR_5 == 0) {

  FUNC_3(VAR_1, &VAR_2->flags);
 }
 return VAR_5;
}
