
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transient_trig_data {int restore_state; scalar_t__ activate; struct led_classdev* led_cdev; } ;
struct timer_list {int dummy; } ;
struct led_classdev {int dummy; } ;


 struct transient_trig_data* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct led_classdev*,int ) ;
 int VAR_0 ;
 struct transient_trig_data* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct transient_trig_data *VAR_3 =
  FUNC_0(VAR_3, VAR_2, VAR_0);
 struct led_classdev *VAR_4 = VAR_3->led_cdev;

 VAR_3->activate = 0;
 FUNC_1(VAR_4, VAR_3->restore_state);
}
