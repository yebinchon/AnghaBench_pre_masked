
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_twl4030_priv {int usage_count; int direction; int out_state; int mutex; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 struct gpio_twl4030_priv* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct gpio_twl4030_priv *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;
 int VAR_5 = 0;

 FUNC_2(&VAR_3->mutex);
 if (!(VAR_3->usage_count & FUNC_0(VAR_2))) {
  VAR_4 = -VAR_0;
  goto out;
 }

 if (VAR_3->direction & FUNC_0(VAR_2))
  VAR_5 = VAR_3->out_state & FUNC_0(VAR_2);
 else
  VAR_5 = FUNC_4(VAR_2);

 VAR_4 = (VAR_5 < 0) ? VAR_5 : !!VAR_5;
out:
 FUNC_3(&VAR_3->mutex);
 return VAR_4;
}
