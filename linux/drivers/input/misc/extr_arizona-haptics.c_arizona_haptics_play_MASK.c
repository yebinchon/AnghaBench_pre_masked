
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct TYPE_5__ {int strong_magnitude; } ;
struct TYPE_6__ {TYPE_2__ rumble; } ;
struct ff_effect {int direction; TYPE_3__ u; } ;
struct arizona_haptics {int intensity; int work; struct arizona* arizona; } ;
struct TYPE_4__ {scalar_t__ hap_act; } ;
struct arizona {TYPE_1__ pdata; int dev; int dapm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct arizona_haptics* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_1, void *VAR_2,
    struct ff_effect *VAR_3)
{
 struct arizona_haptics *VAR_4 = FUNC_1(VAR_1);
 struct arizona *VAR_5 = VAR_4->arizona;

 if (!VAR_5->dapm) {
  FUNC_0(VAR_5->dev, "No DAPM context\n");
  return -VAR_0;
 }

 if (VAR_3->u.rumble.strong_magnitude) {

  if (VAR_5->pdata.hap_act) {
   VAR_4->intensity =
    VAR_3->u.rumble.strong_magnitude >> 9;
   if (VAR_3->direction < 0x8000)
    VAR_4->intensity += 0x7f;
  } else {
   VAR_4->intensity =
    VAR_3->u.rumble.strong_magnitude >> 8;
  }
 } else {
  VAR_4->intensity = 0;
 }

 FUNC_2(&VAR_4->work);

 return 0;
}
