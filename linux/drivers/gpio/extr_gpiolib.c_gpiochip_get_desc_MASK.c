
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct gpio_device {size_t ngpio; struct gpio_desc* descs; } ;
struct gpio_desc {int dummy; } ;
struct gpio_chip {struct gpio_device* gpiodev; } ;


 int VAR_0 ;
 struct gpio_desc* FUNC_0 (int ) ;

struct gpio_desc *FUNC_1(struct gpio_chip *VAR_1,
        u16 VAR_2)
{
 struct gpio_device *VAR_3 = VAR_1->gpiodev;

 if (VAR_2 >= VAR_3->ngpio)
  return FUNC_0(-VAR_0);

 return &VAR_3->descs[VAR_2];
}
