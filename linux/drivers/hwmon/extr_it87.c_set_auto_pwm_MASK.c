
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int nr; int index; } ;
struct it87_data {int update_lock; int ** auto_pwm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 struct it87_data* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct it87_data*) ;
 int FUNC_4 (struct it87_data*,int,int ) ;
 scalar_t__ FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct it87_data*,long) ;
 struct sensor_device_attribute_2* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_1, struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct it87_data *VAR_5 = FUNC_2(VAR_1);
 struct sensor_device_attribute_2 *VAR_6 =
   FUNC_9(VAR_2);
 int VAR_7 = VAR_6->nr;
 int VAR_8 = VAR_6->index;
 int VAR_9;
 long VAR_10;

 if (FUNC_5(VAR_3, 10, &VAR_10) < 0 || VAR_10 < 0 || VAR_10 > 255)
  return -VAR_0;

 FUNC_6(&VAR_5->update_lock);
 VAR_5->auto_pwm[VAR_7][VAR_8] = FUNC_8(VAR_5, VAR_10);
 if (FUNC_3(VAR_5))
  VAR_9 = FUNC_1(VAR_7, 3);
 else
  VAR_9 = FUNC_0(VAR_7, VAR_8);
 FUNC_4(VAR_5, VAR_9, VAR_5->auto_pwm[VAR_7][VAR_8]);
 FUNC_7(&VAR_5->update_lock);
 return VAR_4;
}
