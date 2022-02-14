
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct f71882fg_data {int** pwm_auto_point_temp; int* pwm_auto_point_hyst; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; int nr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 long FUNC_2 (long,int,int) ;
 struct f71882fg_data* FUNC_3 (struct device*) ;
 void* FUNC_4 (struct f71882fg_data*,int ) ;
 int FUNC_5 (struct f71882fg_data*,int ,int) ;
 int FUNC_6 (char const*,int,long*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_0,
           struct device_attribute *VAR_1,
           const char *VAR_2, size_t VAR_3)
{
 struct f71882fg_data *VAR_4 = FUNC_3(VAR_0);
 int VAR_5, VAR_6 = FUNC_9(VAR_1)->index;
 int VAR_7 = FUNC_9(VAR_1)->nr;
 u8 VAR_8;
 long VAR_9;

 VAR_5 = FUNC_6(VAR_2, 10, &VAR_9);
 if (VAR_5)
  return VAR_5;

 VAR_9 /= 1000;

 FUNC_7(&VAR_4->update_lock);
 VAR_4->pwm_auto_point_temp[VAR_6][VAR_7] =
  FUNC_4(VAR_4, FUNC_1(VAR_6, VAR_7));
 VAR_9 = FUNC_2(VAR_9, VAR_4->pwm_auto_point_temp[VAR_6][VAR_7] - 15,
   VAR_4->pwm_auto_point_temp[VAR_6][VAR_7]);
 VAR_9 = VAR_4->pwm_auto_point_temp[VAR_6][VAR_7] - VAR_9;

 VAR_8 = FUNC_4(VAR_4, FUNC_0(VAR_6 / 2));
 if (VAR_6 & 1)
  VAR_8 = (VAR_8 & 0x0f) | (VAR_9 << 4);
 else
  VAR_8 = (VAR_8 & 0xf0) | VAR_9;

 FUNC_5(VAR_4, FUNC_0(VAR_6 / 2), VAR_8);
 VAR_4->pwm_auto_point_hyst[VAR_6 / 2] = VAR_8;
 FUNC_8(&VAR_4->update_lock);

 return VAR_3;
}
