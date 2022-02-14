
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zevio_gpio {int lock; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 struct zevio_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct zevio_gpio*,unsigned int,int ) ;
 int FUNC_6 (struct zevio_gpio*,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct zevio_gpio *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4;

 FUNC_3(&VAR_3->lock);

 VAR_4 = FUNC_5(VAR_3, VAR_2, VAR_0);
 VAR_4 |= FUNC_0(FUNC_1(VAR_2));
 FUNC_6(VAR_3, VAR_2, VAR_0, VAR_4);

 FUNC_4(&VAR_3->lock);

 return 0;
}
