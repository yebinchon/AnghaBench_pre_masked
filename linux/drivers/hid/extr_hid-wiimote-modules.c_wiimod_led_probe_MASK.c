
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct wiimote_data {struct led_classdev** leds; TYPE_2__ state; TYPE_1__* hdev; } ;
struct wiimod_ops {size_t arg; } ;
struct led_classdev {char* name; int max_brightness; int brightness_set; int brightness_get; scalar_t__ brightness; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (struct device*) ;
 int FUNC_1 (struct led_classdev*) ;
 struct led_classdev* FUNC_2 (int,int ) ;
 int FUNC_3 (struct device*,struct led_classdev*) ;
 int FUNC_4 (char*,size_t,char*,char*,size_t) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (struct wiimote_data*,int ) ;

__attribute__((used)) static int FUNC_9(const struct wiimod_ops *VAR_5,
       struct wiimote_data *VAR_6)
{
 struct device *VAR_7 = &VAR_6->hdev->dev;
 size_t VAR_8 = FUNC_7(FUNC_0(VAR_7)) + 9;
 struct led_classdev *VAR_9;
 unsigned long VAR_10;
 char *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_2(sizeof(struct led_classdev) + VAR_8, VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_11 = (void*)&VAR_9[1];
 FUNC_4(VAR_11, VAR_8, "%s:blue:p%lu", FUNC_0(VAR_7), VAR_5->arg);
 VAR_9->name = VAR_11;
 VAR_9->brightness = 0;
 VAR_9->max_brightness = 1;
 VAR_9->brightness_get = VAR_3;
 VAR_9->brightness_set = VAR_4;

 VAR_6->leds[VAR_5->arg] = VAR_9;
 VAR_12 = FUNC_3(VAR_7, VAR_9);
 if (VAR_12)
  goto err_free;


 if (VAR_5->arg == 0) {
  FUNC_5(&VAR_6->state.lock, VAR_10);
  FUNC_8(VAR_6, VAR_2);
  FUNC_6(&VAR_6->state.lock, VAR_10);
 }

 return 0;

err_free:
 VAR_6->leds[VAR_5->arg] = ((void*)0);
 FUNC_1(VAR_9);
 return VAR_12;
}
