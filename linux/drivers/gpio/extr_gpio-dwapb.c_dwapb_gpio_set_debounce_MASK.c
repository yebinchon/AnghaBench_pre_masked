
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int bgpio_lock; } ;
struct dwapb_gpio_port {struct dwapb_gpio* gpio; } ;
struct dwapb_gpio {int dummy; } ;


 unsigned long FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned long FUNC_1 (struct dwapb_gpio*,int ) ;
 int FUNC_2 (struct dwapb_gpio*,int ,unsigned long) ;
 struct dwapb_gpio_port* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_1,
       unsigned VAR_2, unsigned VAR_3)
{
 struct dwapb_gpio_port *VAR_4 = FUNC_3(VAR_1);
 struct dwapb_gpio *VAR_5 = VAR_4->gpio;
 unsigned long VAR_6, VAR_7;
 unsigned long VAR_8 = FUNC_0(VAR_2);

 FUNC_4(&VAR_1->bgpio_lock, VAR_6);

 VAR_7 = FUNC_1(VAR_5, VAR_0);
 if (VAR_3)
  FUNC_2(VAR_5, VAR_0, VAR_7 | VAR_8);
 else
  FUNC_2(VAR_5, VAR_0, VAR_7 & ~VAR_8);

 FUNC_5(&VAR_1->bgpio_lock, VAR_6);

 return 0;
}
