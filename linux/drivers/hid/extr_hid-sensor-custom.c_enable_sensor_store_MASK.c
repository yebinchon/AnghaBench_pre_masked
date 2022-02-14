
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_sensor_custom {int enable; int mutex; int hsdev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct hid_sensor_custom* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int ,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct hid_sensor_custom*,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct hid_sensor_custom *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;
 int VAR_7 = -VAR_0;

 if (FUNC_1(VAR_3, 0, &VAR_6) != 0)
  return -VAR_0;

 FUNC_2(&VAR_5->mutex);
 if (VAR_6 && !VAR_5->enable) {
  VAR_7 = FUNC_5(VAR_5->hsdev);
  if (VAR_7)
   goto unlock_state;

  VAR_7 = FUNC_6(VAR_5, 1);
  if (VAR_7) {
   FUNC_4(VAR_5->hsdev);
   goto unlock_state;
  }
  VAR_5->enable = 1;
 } else if (!VAR_6 && VAR_5->enable) {
  VAR_7 = FUNC_6(VAR_5, 0);
  FUNC_4(VAR_5->hsdev);
  VAR_5->enable = 0;
 }
unlock_state:
 FUNC_3(&VAR_5->mutex);
 if (VAR_7 < 0)
  return VAR_7;

 return VAR_4;
}
