
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vprbrd_gpio {int gpiob_out; struct vprbrd* vb; } ;
struct vprbrd {int lock; } ;
struct gpio_chip {int parent; } ;


 int FUNC_0 (int ,char*) ;
 struct vprbrd_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vprbrd*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_0,
   unsigned int VAR_1)
{
 int VAR_2;
 struct vprbrd_gpio *VAR_3 = FUNC_1(VAR_0);
 struct vprbrd *VAR_4 = VAR_3->vb;

 VAR_3->gpiob_out &= ~(1 << VAR_1);

 FUNC_2(&VAR_4->lock);

 VAR_2 = FUNC_4(VAR_4, VAR_1, 0);

 FUNC_3(&VAR_4->lock);

 if (VAR_2)
  FUNC_0(VAR_0->parent, "usb error setting pin to input\n");

 return VAR_2;
}
