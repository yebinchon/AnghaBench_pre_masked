
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; } ;
struct nct6775_data {int* BEEP_BITS; unsigned long long beeps; int update_lock; int * REG_BEEP; int num_temp_beeps; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct nct6775_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct nct6775_data*,int ,int ) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nct6775_data*,int ,int) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute_2 *VAR_6 = FUNC_6(VAR_3);
 struct nct6775_data *VAR_7 = FUNC_0(VAR_2);
 int VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_4, 10, &VAR_11);
 if (VAR_12 < 0)
  return VAR_12;
 if (VAR_11 > 1)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_7, VAR_6->index, VAR_7->num_temp_beeps);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9 = VAR_7->BEEP_BITS[VAR_8 + VAR_1];
 VAR_10 = VAR_9 >> 3;

 FUNC_3(&VAR_7->update_lock);
 if (VAR_11)
  VAR_7->beeps |= (1ULL << VAR_9);
 else
  VAR_7->beeps &= ~(1ULL << VAR_9);
 FUNC_5(VAR_7, VAR_7->REG_BEEP[VAR_10],
       (VAR_7->beeps >> (VAR_10 << 3)) & 0xff);
 FUNC_4(&VAR_7->update_lock);

 return VAR_5;
}
