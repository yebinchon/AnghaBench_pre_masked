
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct max6650_data {int alarm; int valid; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct max6650_data*) ;
 int FUNC_1 (struct max6650_data*) ;
 struct max6650_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_6(VAR_1);
 struct max6650_data *VAR_4 = FUNC_2(VAR_0);
 bool VAR_5;

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = VAR_4->alarm & VAR_3->index;
 if (VAR_5) {
  FUNC_3(&VAR_4->update_lock);
  VAR_4->alarm &= ~VAR_3->index;
  VAR_4->valid = 0;
  FUNC_4(&VAR_4->update_lock);
 }

 return FUNC_5(VAR_2, "%d\n", VAR_5);
}
