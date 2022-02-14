
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int offset; int mask; int base_color; } ;
struct mlxcpld_led_priv {TYPE_1__ param; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 struct mlxcpld_led_priv* FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct led_classdev *VAR_1,
           enum led_brightness VAR_2)
{
 struct mlxcpld_led_priv *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2) {
  FUNC_1(VAR_3->param.mask, VAR_3->param.offset,
         VAR_3->param.base_color);
  return;
 }

 FUNC_1(VAR_3->param.mask, VAR_3->param.offset,
        VAR_0);
}
