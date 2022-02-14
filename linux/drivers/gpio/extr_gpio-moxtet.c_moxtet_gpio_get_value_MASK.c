
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct moxtet_gpio_chip {int dev; TYPE_1__* desc; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int in_mask; int out_mask; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct moxtet_gpio_chip* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_2, unsigned int VAR_3)
{
 struct moxtet_gpio_chip *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 if (VAR_4->desc->in_mask & FUNC_0(VAR_3)) {
  VAR_5 = FUNC_2(VAR_4->dev);
 } else if (VAR_4->desc->out_mask & FUNC_0(VAR_3)) {
  VAR_5 = FUNC_3(VAR_4->dev);
  if (VAR_5 >= 0)
   VAR_5 <<= VAR_1;
 } else {
  return -VAR_0;
 }

 if (VAR_5 < 0)
  return VAR_5;

 return !!(VAR_5 & FUNC_0(VAR_3));
}
