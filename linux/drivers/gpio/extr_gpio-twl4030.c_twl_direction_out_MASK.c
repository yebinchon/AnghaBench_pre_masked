
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_twl4030_priv {int mutex; int direction; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 struct gpio_twl4030_priv* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (struct gpio_chip*,unsigned int,int) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_1, unsigned VAR_2, int VAR_3)
{
 struct gpio_twl4030_priv *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = 0;

 FUNC_2(&VAR_4->mutex);
 if (VAR_2 < VAR_0) {
  VAR_5 = FUNC_4(VAR_2, 0);
  if (VAR_5) {
   FUNC_3(&VAR_4->mutex);
   return VAR_5;
  }
 }





 VAR_4->direction |= FUNC_0(VAR_2);
 FUNC_3(&VAR_4->mutex);

 FUNC_5(VAR_1, VAR_2, VAR_3);

 return VAR_5;
}
