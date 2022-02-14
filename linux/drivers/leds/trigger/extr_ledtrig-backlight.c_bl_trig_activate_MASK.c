
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct led_classdev {int dev; int brightness; } ;
struct TYPE_2__ {int notifier_call; } ;
struct bl_trig_notifier {TYPE_1__ notifier; int old_status; int brightness; struct led_classdev* led; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 struct bl_trig_notifier* FUNC_2 (int,int ) ;
 int FUNC_3 (struct led_classdev*,struct bl_trig_notifier*) ;

__attribute__((used)) static int FUNC_4(struct led_classdev *VAR_4)
{
 int VAR_5;

 struct bl_trig_notifier *VAR_6;

 VAR_6 = FUNC_2(sizeof(struct bl_trig_notifier), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 FUNC_3(VAR_4, VAR_6);

 VAR_6->led = VAR_4;
 VAR_6->brightness = VAR_4->brightness;
 VAR_6->old_status = VAR_2;
 VAR_6->notifier.notifier_call = VAR_3;

 VAR_5 = FUNC_1(&VAR_6->notifier);
 if (VAR_5)
  FUNC_0(VAR_4->dev, "unable to register backlight trigger\n");

 return 0;
}
