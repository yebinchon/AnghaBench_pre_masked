
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f71882fg_data {int pwm_enable; int* pwm; int update_lock; int * fan_full_speed; int * fan_target; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 struct f71882fg_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;
 TYPE_1__* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
   struct device_attribute *VAR_1, char *VAR_2)
{
 struct f71882fg_data *VAR_3 = FUNC_0(VAR_0);
 int VAR_4, VAR_5 = FUNC_5(VAR_1)->index;
 FUNC_2(&VAR_3->update_lock);
 if (VAR_3->pwm_enable & (1 << (2 * VAR_5)))

  VAR_4 = VAR_3->pwm[VAR_5];
 else {

  VAR_4 = 255 * FUNC_1(VAR_3->fan_target[VAR_5])
   / FUNC_1(VAR_3->fan_full_speed[VAR_5]);
 }
 FUNC_3(&VAR_3->update_lock);
 return FUNC_4(VAR_2, "%d\n", VAR_4);
}
