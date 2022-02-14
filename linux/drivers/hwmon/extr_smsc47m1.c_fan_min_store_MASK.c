
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc47m1_data {int* fan_preload; int update_lock; int * fan_div; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 long FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 struct smsc47m1_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct smsc47m1_data*,int ,int) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_6(VAR_3);
 struct smsc47m1_data *VAR_7 = FUNC_1(VAR_2);
 int VAR_8 = VAR_6->index;
 long VAR_9;
 long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_4, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_3(&VAR_7->update_lock);
 VAR_9 = VAR_10 * FUNC_0(VAR_7->fan_div[VAR_8]);

 if (983040 > 192 * VAR_9 || 2 * VAR_9 > 983040) {
  FUNC_4(&VAR_7->update_lock);
  return -VAR_0;
 }

 VAR_7->fan_preload[VAR_8] = 192 - ((983040 + VAR_9 / 2) / VAR_9);
 FUNC_5(VAR_7, VAR_1[VAR_8],
        VAR_7->fan_preload[VAR_8]);
 FUNC_4(&VAR_7->update_lock);

 return VAR_5;
}
