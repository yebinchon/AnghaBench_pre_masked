
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgpio_instance {int* gpio_width; } ;


 scalar_t__ FUNC_0 (struct xgpio_instance*,int) ;

__attribute__((used)) static inline int FUNC_1(struct xgpio_instance *VAR_0, int VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1))
  return VAR_1 - VAR_0->gpio_width[0];

 return VAR_1;
}
