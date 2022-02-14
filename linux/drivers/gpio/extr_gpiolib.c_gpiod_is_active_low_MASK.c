
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct gpio_desc const*) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(const struct gpio_desc *VAR_1)
{
 FUNC_0(VAR_1);
 return FUNC_1(VAR_0, &VAR_1->flags);
}
