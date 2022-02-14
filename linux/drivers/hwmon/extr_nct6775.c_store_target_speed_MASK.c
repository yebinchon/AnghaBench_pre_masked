
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sensor_device_attribute {int index; } ;
struct nct6775_data {int update_lock; int * target_speed; int * fan_div; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned long FUNC_0 (unsigned long,int ,unsigned int) ;
 struct nct6775_data* FUNC_1 (struct device*) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nct6775_data*,int) ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_0, struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 struct nct6775_data *VAR_4 = FUNC_1(VAR_0);
 struct sensor_device_attribute *VAR_5 = FUNC_7(VAR_1);
 int VAR_6 = VAR_5->index;
 unsigned long VAR_7;
 int VAR_8;
 u16 VAR_9;

 VAR_8 = FUNC_3(VAR_2, 10, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_0(VAR_7, 0, 1350000U);
 VAR_9 = FUNC_2(VAR_7, VAR_4->fan_div[VAR_6]);

 FUNC_4(&VAR_4->update_lock);
 VAR_4->target_speed[VAR_6] = VAR_9;
 FUNC_6(VAR_4, VAR_6);
 FUNC_5(&VAR_4->update_lock);
 return VAR_3;
}
