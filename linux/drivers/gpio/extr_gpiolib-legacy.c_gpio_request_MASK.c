
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 struct gpio_desc* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct gpio_desc*,char const*) ;

int FUNC_3(unsigned VAR_1, const char *VAR_2)
{
 struct gpio_desc *VAR_3 = FUNC_1(VAR_1);


 if (!VAR_3 && FUNC_0(VAR_1))
  return -VAR_0;

 return FUNC_2(VAR_3, VAR_2);
}
