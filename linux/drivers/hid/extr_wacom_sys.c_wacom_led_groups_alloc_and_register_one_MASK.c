
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wacom_led {int dummy; } ;
struct TYPE_8__ {int count; TYPE_3__* groups; } ;
struct wacom {TYPE_2__ led; TYPE_1__* hdev; } ;
struct device {int dummy; } ;
struct TYPE_9__ {int count; struct device* dev; struct wacom_led* leds; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,TYPE_3__*) ;
 struct wacom_led* FUNC_1 (struct device*,int,int,int ) ;
 int FUNC_2 (struct device*,TYPE_3__*) ;
 int FUNC_3 (struct device*,TYPE_3__*,int ) ;
 int FUNC_4 (struct device*,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_5 (struct device*,struct wacom*,struct wacom_led*,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4,
         struct wacom *VAR_5,
         int VAR_6, int VAR_7,
         bool VAR_8)
{
 struct wacom_led *VAR_9;
 int VAR_10, VAR_11;

 if (VAR_6 >= VAR_5->led.count || VAR_7 <= 0)
  return -VAR_0;

 if (!FUNC_3(VAR_4, &VAR_5->led.groups[VAR_6], VAR_2))
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_4, VAR_7, sizeof(struct wacom_led), VAR_2);
 if (!VAR_9) {
  VAR_11 = -VAR_1;
  goto err;
 }

 VAR_5->led.groups[VAR_6].leds = VAR_9;
 VAR_5->led.groups[VAR_6].count = VAR_7;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_11 = FUNC_5(VAR_4, VAR_5, &VAR_9[VAR_10],
            VAR_6, VAR_10, VAR_8);
  if (VAR_11)
   goto err;
 }

 VAR_5->led.groups[VAR_6].dev = VAR_4;

 FUNC_2(VAR_4, &VAR_5->led.groups[VAR_6]);
 VAR_11 = FUNC_0(&VAR_5->hdev->dev,
      VAR_3,
      &VAR_5->led.groups[VAR_6]);
 if (VAR_11)
  return VAR_11;

 return 0;

err:
 FUNC_4(VAR_4, &VAR_5->led.groups[VAR_6]);
 return VAR_11;
}
