
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct led_classdev {int max_brightness; int (* brightness_set ) (struct led_classdev*,int ) ;int flags; int brightness; int name; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int addr; } ;
struct apu_led_priv {struct led_classdev cdev; TYPE_1__ param; } ;
struct apu_led_pdata {int dummy; } ;
struct TYPE_7__ {int brightness; int offset; int name; } ;
struct TYPE_6__ {struct apu_led_priv* pled; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct led_classdev*,int ) ;
 TYPE_3__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (struct device*,int ,int ) ;
 struct apu_led_priv* FUNC_3 (struct device*,int,int,int ) ;
 int FUNC_4 (struct device*,struct led_classdev*) ;
 int FUNC_5 (struct led_classdev*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_6, struct apu_led_pdata *VAR_7)
{
 int VAR_8;
 int VAR_9;

 VAR_5->pled = FUNC_3(VAR_6,
  FUNC_0(VAR_4), sizeof(struct apu_led_priv),
  VAR_2);

 if (!VAR_5->pled)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  struct apu_led_priv *VAR_10 = &VAR_5->pled[VAR_8];
  struct led_classdev *VAR_11 = &VAR_10->cdev;

  VAR_11->name = VAR_4[VAR_8].name;
  VAR_11->brightness = VAR_4[VAR_8].brightness;
  VAR_11->max_brightness = 1;
  VAR_11->flags = VAR_3;
  VAR_11->brightness_set = FUNC_1;

  VAR_10->param.addr = FUNC_2(VAR_6,
    VAR_4[VAR_8].offset, VAR_0);
  if (!VAR_10->param.addr) {
   VAR_9 = -VAR_1;
   goto error;
  }

  VAR_9 = FUNC_4(VAR_6, VAR_11);
  if (VAR_9)
   goto error;

  FUNC_1(VAR_11, VAR_4[VAR_8].brightness);
 }

 return 0;

error:
 while (VAR_8-- > 0)
  FUNC_5(&VAR_5->pled[VAR_8].cdev);

 return VAR_9;
}
