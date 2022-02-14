
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int work_flags; scalar_t__ max_brightness; scalar_t__ blink_brightness; } ;
struct heartbeat_trig_data {int timer; scalar_t__ phase; struct led_classdev* led_cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct heartbeat_trig_data* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct led_classdev*,struct heartbeat_trig_data*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int (*) (int *),int ) ;

__attribute__((used)) static int FUNC_5(struct led_classdev *VAR_3)
{
 struct heartbeat_trig_data *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_2(VAR_3, VAR_4);
 VAR_4->led_cdev = VAR_3;

 FUNC_4(&VAR_4->timer, FUNC_1, 0);
 VAR_4->phase = 0;
 if (!VAR_3->blink_brightness)
  VAR_3->blink_brightness = VAR_3->max_brightness;
 FUNC_1(&VAR_4->timer);
 FUNC_3(VAR_2, &VAR_3->work_flags);

 return 0;
}
