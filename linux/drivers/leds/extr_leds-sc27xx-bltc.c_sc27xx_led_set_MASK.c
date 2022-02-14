
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sc27xx_led {TYPE_1__* priv; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sc27xx_led*) ;
 int FUNC_3 (struct sc27xx_led*,int) ;
 struct sc27xx_led* FUNC_4 (struct led_classdev*) ;

__attribute__((used)) static int FUNC_5(struct led_classdev *VAR_1, enum led_brightness VAR_2)
{
 struct sc27xx_led *VAR_3 = FUNC_4(VAR_1);
 int VAR_4;

 FUNC_0(&VAR_3->priv->lock);

 if (VAR_2 == VAR_0)
  VAR_4 = FUNC_2(VAR_3);
 else
  VAR_4 = FUNC_3(VAR_3, VAR_2);

 FUNC_1(&VAR_3->priv->lock);

 return VAR_4;
}
