
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w83627hf_data {unsigned long* pwm_enable; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int * VAR_2 ;
 struct w83627hf_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (struct device_attribute*) ;
 int FUNC_5 (struct w83627hf_data*,int ) ;
 int FUNC_6 (struct w83627hf_data*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_3, struct device_attribute *VAR_4,
   const char *VAR_5, size_t VAR_6)
{
 int VAR_7 = FUNC_4(VAR_4)->index;
 struct w83627hf_data *VAR_8 = FUNC_0(VAR_3);
 u8 VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_5, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 if (!VAR_10 || VAR_10 > 3)
  return -VAR_0;
 FUNC_2(&VAR_8->update_lock);
 VAR_8->pwm_enable[VAR_7] = VAR_10;
 VAR_9 = FUNC_5(VAR_8, VAR_2[VAR_7]);
 VAR_9 &= ~(0x03 << VAR_1[VAR_7]);
 VAR_9 |= (VAR_10 - 1) << VAR_1[VAR_7];
 FUNC_6(VAR_8, VAR_2[VAR_7], VAR_9);
 FUNC_3(&VAR_8->update_lock);
 return VAR_6;
}
