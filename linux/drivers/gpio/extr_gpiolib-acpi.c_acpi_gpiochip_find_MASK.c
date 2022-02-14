
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int parent; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_0, void *VAR_1)
{
 if (!VAR_0->parent)
  return 0;

 return FUNC_0(VAR_0->parent) == VAR_1;
}
