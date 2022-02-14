
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int valid_mask; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int ) ;

bool FUNC_2(const struct gpio_chip *VAR_0,
    unsigned int VAR_1)
{

 if (FUNC_0(!VAR_0->valid_mask))
  return 1;
 return FUNC_1(VAR_1, VAR_0->valid_mask);
}
