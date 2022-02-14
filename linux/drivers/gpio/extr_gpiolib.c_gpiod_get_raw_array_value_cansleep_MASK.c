
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct gpio_array {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,unsigned int,struct gpio_desc**,struct gpio_array*,unsigned long*) ;
 int FUNC_1 (int ) ;

int FUNC_2(unsigned int VAR_2,
           struct gpio_desc **VAR_3,
           struct gpio_array *VAR_4,
           unsigned long *VAR_5)
{
 FUNC_1(VAR_1);
 if (!VAR_3)
  return -VAR_0;
 return FUNC_0(1, 1, VAR_2,
          VAR_3, VAR_4,
          VAR_5);
}
