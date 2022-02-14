
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct pc87360_data {int* fan_status; int* fan; int* fan_min; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 long FUNC_1 (long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 struct pc87360_data* FUNC_4 (struct device*) ;
 int FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct pc87360_data*,int ,int ,int ,int) ;
 struct sensor_device_attribute* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_9(VAR_3);
 struct pc87360_data *VAR_7 = FUNC_4(VAR_2);
 long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_5(VAR_4, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_6(&VAR_7->update_lock);
 VAR_8 = FUNC_1(VAR_8,
        FUNC_0(VAR_7->fan_status[VAR_6->index]));


 while (VAR_8 > 255
     && (VAR_7->fan_status[VAR_6->index] & 0x60) != 0x60) {
  VAR_8 >>= 1;
  VAR_7->fan[VAR_6->index] >>= 1;
  VAR_7->fan_status[VAR_6->index] += 0x20;
 }
 VAR_7->fan_min[VAR_6->index] = VAR_8 > 255 ? 255 : VAR_8;
 FUNC_8(VAR_7, VAR_0, VAR_1,
       FUNC_2(VAR_6->index),
       VAR_7->fan_min[VAR_6->index]);


 FUNC_8(VAR_7, VAR_0, VAR_1,
       FUNC_3(VAR_6->index),
       VAR_7->fan_status[VAR_6->index] & 0xF9);
 FUNC_7(&VAR_7->update_lock);

 return VAR_5;
}
