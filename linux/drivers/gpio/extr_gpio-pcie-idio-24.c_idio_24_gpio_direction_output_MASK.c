
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct idio_24_gpio {int lock; TYPE_1__* reg; } ;
struct gpio_chip {int (* set ) (struct gpio_chip*,unsigned int,int) ;} ;
struct TYPE_2__ {int ctl; } ;


 unsigned long FUNC_0 (int) ;
 struct idio_24_gpio* FUNC_1 (struct gpio_chip*) ;
 unsigned long const FUNC_2 (int *) ;
 int FUNC_3 (unsigned int,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct gpio_chip*,unsigned int,int) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_0,
 unsigned int VAR_1, int VAR_2)
{
 struct idio_24_gpio *const VAR_3 = FUNC_1(VAR_0);
 unsigned long VAR_4;
 unsigned int VAR_5;
 const unsigned long VAR_6 = FUNC_0(1);


 if (VAR_1 > 47) {
  FUNC_4(&VAR_3->lock, VAR_4);


  VAR_5 = FUNC_2(&VAR_3->reg->ctl) | VAR_6;
  FUNC_3(VAR_5, &VAR_3->reg->ctl);

  FUNC_5(&VAR_3->lock, VAR_4);
 }

 VAR_0->set(VAR_0, VAR_1, VAR_2);
 return 0;
}
