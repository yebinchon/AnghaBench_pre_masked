
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct led_classdev {int dummy; } ;
struct TYPE_3__ {int addr; } ;
struct apu_led_priv {TYPE_1__ param; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 struct apu_led_priv* FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct led_classdev *VAR_3, enum led_brightness VAR_4)
{
 struct apu_led_priv *VAR_5 = FUNC_0(VAR_3);

 FUNC_2(&VAR_2->lock);
 FUNC_1(VAR_4 ? VAR_1 : VAR_0, VAR_5->param.addr);
 FUNC_3(&VAR_2->lock);
}
