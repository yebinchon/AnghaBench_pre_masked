
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct gpio_array {int dummy; } ;


 int VAR_0 ;
 unsigned long* FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned long*,unsigned int) ;
 int FUNC_2 (unsigned long*,unsigned int) ;
 int FUNC_3 (unsigned int,struct gpio_desc**,struct gpio_array*,unsigned long*) ;
 int FUNC_4 (unsigned long*) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_1,
        struct gpio_desc **VAR_2,
        struct gpio_array *VAR_3,
        int VAR_4)
{
 unsigned long *VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_5)
  return;

 if (VAR_4)
  FUNC_1(VAR_5, VAR_1);
 else
  FUNC_2(VAR_5, VAR_1);

 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5);
 FUNC_4(VAR_5);
}
