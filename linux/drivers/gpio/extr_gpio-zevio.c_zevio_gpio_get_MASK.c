
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zevio_gpio {int lock; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct zevio_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct zevio_gpio*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 struct zevio_gpio *VAR_5 = FUNC_2(VAR_3);
 u32 VAR_6, VAR_7;

 FUNC_3(&VAR_5->lock);
 VAR_7 = FUNC_5(VAR_5, VAR_4, VAR_0);
 if (VAR_7 & FUNC_0(FUNC_1(VAR_4)))
  VAR_6 = FUNC_5(VAR_5, VAR_4, VAR_1);
 else
  VAR_6 = FUNC_5(VAR_5, VAR_4, VAR_2);
 FUNC_4(&VAR_5->lock);

 return (VAR_6 >> FUNC_1(VAR_4)) & 0x1;
}
