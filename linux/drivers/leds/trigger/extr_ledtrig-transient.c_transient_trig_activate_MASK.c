
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transient_trig_data {int timer; struct led_classdev* led_cdev; } ;
struct led_classdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct transient_trig_data* FUNC_0 (int,int ) ;
 int FUNC_1 (struct led_classdev*,struct transient_trig_data*) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct led_classdev *VAR_3)
{
 struct transient_trig_data *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct transient_trig_data), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(VAR_3, VAR_4);
 VAR_4->led_cdev = VAR_3;

 FUNC_2(&VAR_4->timer, VAR_2, 0);

 return 0;
}
