
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int * valid_mask; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct gpio_chip *VAR_0)
{
 FUNC_0(VAR_0->valid_mask);
 VAR_0->valid_mask = ((void*)0);
}
