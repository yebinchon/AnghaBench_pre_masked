
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlc591xx_priv {int dummy; } ;
struct tlc591xx_led {struct tlc591xx_priv* priv; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 struct tlc591xx_led* FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (struct tlc591xx_priv*,struct tlc591xx_led*,int ) ;
 int FUNC_2 (struct tlc591xx_priv*,struct tlc591xx_led*,int) ;

__attribute__((used)) static int
FUNC_3(struct led_classdev *VAR_3,
   enum led_brightness VAR_4)
{
 struct tlc591xx_led *VAR_5 = FUNC_0(VAR_3);
 struct tlc591xx_priv *VAR_6 = VAR_5->priv;
 int VAR_7;

 switch (VAR_4) {
 case 0:
  VAR_7 = FUNC_1(VAR_6, VAR_5, VAR_1);
  break;
 case 128:
  VAR_7 = FUNC_1(VAR_6, VAR_5, VAR_2);
  break;
 default:
  VAR_7 = FUNC_1(VAR_6, VAR_5, VAR_0);
  if (!VAR_7)
   VAR_7 = FUNC_2(VAR_6, VAR_5, VAR_4);
 }

 return VAR_7;
}
