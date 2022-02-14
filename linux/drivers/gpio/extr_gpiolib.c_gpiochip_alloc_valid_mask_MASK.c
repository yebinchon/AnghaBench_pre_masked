
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int valid_mask; scalar_t__ init_valid_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct gpio_chip*) ;
 scalar_t__ FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1)
{
 if (!(FUNC_1(VAR_1) || VAR_1->init_valid_mask))
  return 0;

 VAR_1->valid_mask = FUNC_0(VAR_1);
 if (!VAR_1->valid_mask)
  return -VAR_0;

 return 0;
}
