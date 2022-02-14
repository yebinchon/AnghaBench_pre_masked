
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_twl4030_priv {int mutex; } ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 struct gpio_twl4030_priv* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct gpio_twl4030_priv *VAR_3 = FUNC_0(VAR_1);




 int VAR_4 = 0;

 FUNC_1(&VAR_3->mutex);
 if (VAR_2 < VAR_0) {
  VAR_4 = FUNC_3(VAR_2);
  if (VAR_4) {
   FUNC_2(&VAR_3->mutex);
   return VAR_4;
  }
 }
 FUNC_2(&VAR_3->mutex);

 return VAR_4;
}
