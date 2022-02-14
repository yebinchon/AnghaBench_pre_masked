
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via686a_data {int update_lock; int * fan_min; int * fan_div; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int) ;
 struct via686a_data* FUNC_3 (struct device*) ;
 int FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;
 int FUNC_8 (struct via686a_data*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_0, struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3) {
 struct via686a_data *VAR_4 = FUNC_3(VAR_0);
 struct sensor_device_attribute *VAR_5 = FUNC_7(VAR_1);
 int VAR_6 = VAR_5->index;
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_2, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_5(&VAR_4->update_lock);
 VAR_4->fan_min[VAR_6] = FUNC_1(VAR_7, FUNC_0(VAR_4->fan_div[VAR_6]));
 FUNC_8(VAR_4, FUNC_2(VAR_6+1), VAR_4->fan_min[VAR_6]);
 FUNC_6(&VAR_4->update_lock);
 return VAR_3;
}
