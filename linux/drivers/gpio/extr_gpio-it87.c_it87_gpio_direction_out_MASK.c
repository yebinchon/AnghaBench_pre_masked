
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct it87_gpio {int lock; scalar_t__ output_base; } ;
struct gpio_chip {int dummy; } ;


 struct it87_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_0,
       unsigned VAR_1, int VAR_2)
{
 u8 VAR_3, VAR_4;
 int VAR_5 = 0;
 struct it87_gpio *VAR_6 = FUNC_0(VAR_0);

 VAR_3 = 1 << (VAR_1 % 8);
 VAR_4 = (VAR_1 / 8);

 FUNC_2(&VAR_6->lock);

 VAR_5 = FUNC_4();
 if (VAR_5)
  goto exit;


 FUNC_6(VAR_3, VAR_4 + VAR_6->output_base);

 FUNC_1(VAR_0, VAR_1, VAR_2);

 FUNC_5();

exit:
 FUNC_3(&VAR_6->lock);
 return VAR_5;
}
