
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_cooling_device {struct aspeed_cooling_device* devdata; } ;
struct aspeed_cooling_device {unsigned long max_state; unsigned long cur_state; size_t pwm_port; int * cooling_levels; TYPE_1__* priv; } ;
struct TYPE_2__ {int * pwm_port_fan_ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,size_t,int ) ;

__attribute__((used)) static int
FUNC_1(struct thermal_cooling_device *VAR_1,
       unsigned long VAR_2)
{
 struct aspeed_cooling_device *VAR_3 = VAR_1->devdata;

 if (VAR_2 > VAR_3->max_state)
  return -VAR_0;

 VAR_3->cur_state = VAR_2;
 VAR_3->priv->pwm_port_fan_ctrl[VAR_3->pwm_port] =
     VAR_3->cooling_levels[VAR_3->cur_state];
 FUNC_0(VAR_3->priv, VAR_3->pwm_port,
         VAR_3->cooling_levels[VAR_3->cur_state]);

 return 0;
}
