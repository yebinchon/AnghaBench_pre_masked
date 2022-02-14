
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct it87_gpio {int lock; scalar_t__ output_base; } ;
struct gpio_chip {int dummy; } ;


 struct it87_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 u8 VAR_2, VAR_3;
 int VAR_4 = 0;
 struct it87_gpio *VAR_5 = FUNC_0(VAR_0);

 VAR_2 = 1 << (VAR_1 % 8);
 VAR_3 = (VAR_1 / 8);

 FUNC_1(&VAR_5->lock);

 VAR_4 = FUNC_4();
 if (VAR_4)
  goto exit;


 FUNC_3(VAR_2, VAR_3 + VAR_5->output_base);

 FUNC_5();

exit:
 FUNC_2(&VAR_5->lock);
 return VAR_4;
}
