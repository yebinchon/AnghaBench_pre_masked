
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t index; } ;
struct nct6775_data {int* BEEP_BITS; unsigned long long beeps; int update_lock; int * REG_BEEP; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct nct6775_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nct6775_data*,int ,int) ;
 struct sensor_device_attribute_2* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3,
    size_t VAR_4)
{
 struct sensor_device_attribute_2 *VAR_5 = FUNC_5(VAR_2);
 struct nct6775_data *VAR_6 = FUNC_0(VAR_1);
 int VAR_7 = VAR_6->BEEP_BITS[VAR_5->index];
 int VAR_8 = VAR_7 >> 3;
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_3, 10, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_9 > 1)
  return -VAR_0;

 FUNC_2(&VAR_6->update_lock);
 if (VAR_9)
  VAR_6->beeps |= (1ULL << VAR_7);
 else
  VAR_6->beeps &= ~(1ULL << VAR_7);
 FUNC_4(VAR_6, VAR_6->REG_BEEP[VAR_8],
       (VAR_6->beeps >> (VAR_8 << 3)) & 0xff);
 FUNC_3(&VAR_6->update_lock);
 return VAR_4;
}
