
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mlxcpld_led_priv {int dummy; } ;
struct mlxcpld_led_pdata {int num_led_instances; TYPE_7__* pled; TYPE_1__* profile; } ;
struct device {int dummy; } ;
struct TYPE_11__ {int max_brightness; int flags; int blink_set; int (* brightness_set ) (TYPE_4__*,scalar_t__) ;int brightness; int name; } ;
struct TYPE_9__ {int base_color; int mask; int offset; } ;
struct TYPE_13__ {TYPE_4__ cdev; TYPE_2__ param; } ;
struct TYPE_12__ {TYPE_3__* profile; } ;
struct TYPE_10__ {scalar_t__ brightness; int base_color; int mask; int offset; } ;
struct TYPE_8__ {int brightness; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_0 (struct device*,int,int,int ) ;
 int FUNC_1 (struct device*,TYPE_4__*) ;
 TYPE_5__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_5,
         struct mlxcpld_led_pdata *VAR_6)
{
 int VAR_7;
 int VAR_8;

 VAR_6->pled = FUNC_0(VAR_5,
      VAR_6->num_led_instances,
      sizeof(struct mlxcpld_led_priv),
      VAR_1);
 if (!VAR_6->pled)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_6->num_led_instances; VAR_7++) {
  VAR_6->pled[VAR_7].cdev.name = VAR_6->profile[VAR_7].name;
  VAR_6->pled[VAR_7].cdev.brightness = VAR_6->profile[VAR_7].brightness;
  VAR_6->pled[VAR_7].cdev.max_brightness = 1;
  VAR_6->pled[VAR_7].cdev.brightness_set = FUNC_2;
  VAR_6->pled[VAR_7].cdev.blink_set = VAR_4;
  VAR_6->pled[VAR_7].cdev.flags = VAR_2;
  VAR_8 = FUNC_1(VAR_5, &VAR_6->pled[VAR_7].cdev);
  if (VAR_8)
   return VAR_8;

  VAR_6->pled[VAR_7].param.offset = VAR_3->profile[VAR_7].offset;
  VAR_6->pled[VAR_7].param.mask = VAR_3->profile[VAR_7].mask;
  VAR_6->pled[VAR_7].param.base_color =
     VAR_3->profile[VAR_7].base_color;

  if (VAR_3->profile[VAR_7].brightness)
   FUNC_2(&VAR_6->pled[VAR_7].cdev,
     VAR_3->profile[VAR_7].brightness);
 }

 return 0;
}
