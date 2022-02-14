
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct gpio_array {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,unsigned int,struct gpio_desc**,struct gpio_array*,unsigned long*) ;

int FUNC_1(unsigned int VAR_1,
         struct gpio_desc **VAR_2,
         struct gpio_array *VAR_3,
         unsigned long *VAR_4)
{
 if (!VAR_2)
  return -VAR_0;
 return FUNC_0(1, 0, VAR_1,
     VAR_2, VAR_3, VAR_4);
}
