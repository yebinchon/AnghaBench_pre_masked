
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t nr; int index; } ;
struct max6642_data {int update_lock; int * temp_high; int client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int ,int) ;
 struct max6642_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned long) ;
 struct sensor_device_attribute_2* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_0,
         struct device_attribute *VAR_1, const char *VAR_2,
         size_t VAR_3)
{
 struct sensor_device_attribute_2 *VAR_4 = FUNC_7(VAR_1);
 struct max6642_data *VAR_5 = FUNC_1(VAR_0);
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_2, 10, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_4(&VAR_5->update_lock);
 VAR_5->temp_high[VAR_4->nr] = FUNC_0(FUNC_6(VAR_6), 0, 255);
 FUNC_2(VAR_5->client, VAR_4->index,
      VAR_5->temp_high[VAR_4->nr]);
 FUNC_5(&VAR_5->update_lock);
 return VAR_3;
}
