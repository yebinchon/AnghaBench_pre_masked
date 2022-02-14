
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f71882fg_data {int* pwm_auto_point_mapping; int update_lock; scalar_t__ temp_start; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct f71882fg_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct f71882fg_data*,int ) ;
 int FUNC_3 (struct f71882fg_data*,int ,long) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct f71882fg_data *VAR_5 = FUNC_1(VAR_1);
 int VAR_6, VAR_7 = FUNC_7(VAR_2)->index;
 long VAR_8;

 VAR_6 = FUNC_4(VAR_3, 10, &VAR_8);
 if (VAR_6)
  return VAR_6;

 switch (VAR_8) {
 case 1:
  VAR_8 = 0;
  break;
 case 2:
  VAR_8 = 1;
  break;
 case 4:
  VAR_8 = 2;
  break;
 default:
  return -VAR_0;
 }
 VAR_8 += VAR_5->temp_start;
 FUNC_5(&VAR_5->update_lock);
 VAR_5->pwm_auto_point_mapping[VAR_7] =
  FUNC_2(VAR_5, FUNC_0(VAR_7));
 VAR_8 = (VAR_5->pwm_auto_point_mapping[VAR_7] & 0xfc) | VAR_8;
 FUNC_3(VAR_5, FUNC_0(VAR_7), VAR_8);
 VAR_5->pwm_auto_point_mapping[VAR_7] = VAR_8;
 FUNC_6(&VAR_5->update_lock);

 return VAR_4;
}
