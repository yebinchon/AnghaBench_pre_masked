
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pattern_trig_data {int is_indefinite; int last_repeat; int timer; struct led_classdev* led_cdev; int lock; } ;
struct led_classdev {int activated; int flags; int * pattern_clear; int * pattern_set; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct pattern_trig_data* FUNC_1 (int,int ) ;
 int FUNC_2 (struct led_classdev*,struct pattern_trig_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct led_classdev*) ;
 int VAR_3 ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct led_classdev *VAR_4)
{
 struct pattern_trig_data *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 if (!!VAR_4->pattern_set ^ !!VAR_4->pattern_clear) {
  FUNC_0(VAR_4->dev,
    "Hardware pattern ops validation failed\n");
  VAR_4->pattern_set = ((void*)0);
  VAR_4->pattern_clear = ((void*)0);
 }

 VAR_5->is_indefinite = 1;
 VAR_5->last_repeat = -1;
 FUNC_3(&VAR_5->lock);
 VAR_5->led_cdev = VAR_4;
 FUNC_2(VAR_4, VAR_5);
 FUNC_5(&VAR_5->timer, VAR_3, 0);
 VAR_4->activated = 1;

 if (VAR_4->flags & VAR_2) {
  FUNC_4(VAR_4);




  VAR_4->flags &= ~VAR_2;
 }

 return 0;
}
