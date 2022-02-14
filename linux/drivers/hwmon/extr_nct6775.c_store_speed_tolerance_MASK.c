
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct nct6775_data {unsigned long* target_speed_tolerance; int update_lock; int speed_tolerance_limit; int * fan_div; int * target_speed; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned long FUNC_0 (unsigned long,int ,int ) ;
 struct nct6775_data* FUNC_1 (struct device*) ;
 unsigned long FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nct6775_data*,int) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_0, struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct nct6775_data *VAR_4 = FUNC_1(VAR_0);
 struct sensor_device_attribute *VAR_5 = FUNC_8(VAR_1);
 int VAR_6 = VAR_5->index;
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_4(VAR_2, 10, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_10 = FUNC_2(VAR_4->target_speed[VAR_6],
         VAR_4->fan_div[VAR_6]) + VAR_7;
 VAR_9 = FUNC_2(VAR_4->target_speed[VAR_6],
        VAR_4->fan_div[VAR_6]) - VAR_7;
 if (VAR_9 <= 0)
  VAR_9 = 1;
 if (VAR_10 < VAR_9)
  VAR_10 = VAR_9;

 VAR_7 = (FUNC_3(VAR_9, VAR_4->fan_div[VAR_6]) -
        FUNC_3(VAR_10, VAR_4->fan_div[VAR_6])) / 2;


 VAR_7 = FUNC_0(VAR_7, 0, VAR_4->speed_tolerance_limit);

 FUNC_5(&VAR_4->update_lock);
 VAR_4->target_speed_tolerance[VAR_6] = VAR_7;
 FUNC_7(VAR_4, VAR_6);
 FUNC_6(&VAR_4->update_lock);
 return VAR_3;
}
