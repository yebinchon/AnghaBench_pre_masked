
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgpio_instance {int* gpio_width; } ;



__attribute__((used)) static inline int FUNC_0(struct xgpio_instance *VAR_0, int VAR_1)
{
 if (VAR_1 >= VAR_0->gpio_width[0])
  return 1;

 return 0;
}
