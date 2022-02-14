
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int flags; int led_access; int node; int dev; int set_brightness_work; int trigger_lock; scalar_t__ trigger; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct led_classdev*) ;
 int FUNC_5 (struct led_classdev*,int ) ;
 int FUNC_6 (struct led_classdev*) ;
 int FUNC_7 (struct led_classdev*,int *) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct led_classdev *VAR_4)
{
 if (FUNC_0(VAR_4->dev))
  return;
 VAR_4->flags |= VAR_2;


 FUNC_6(VAR_4);

 FUNC_5(VAR_4, VAR_1);

 FUNC_3(&VAR_4->set_brightness_work);

 if (VAR_4->flags & VAR_0)
  FUNC_4(VAR_4);

 FUNC_1(VAR_4->dev);

 FUNC_2(&VAR_3);
 FUNC_8(&VAR_4->node);
 FUNC_10(&VAR_3);

 FUNC_9(&VAR_4->led_access);
}
