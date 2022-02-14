
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w83627hf_data {scalar_t__ type; int* pwm; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (scalar_t__,int) ;
 struct w83627hf_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct w83627hf_data*,int ) ;
 int FUNC_8 (struct w83627hf_data*,int ,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_1, struct device_attribute *VAR_2,
   const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_6(VAR_2)->index;
 struct w83627hf_data *VAR_6 = FUNC_2(VAR_1);
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_4(&VAR_6->update_lock);

 if (VAR_6->type == VAR_0) {

  VAR_6->pwm[VAR_5] = FUNC_0(VAR_7) & 0xf0;
  FUNC_8(VAR_6,
         FUNC_1(VAR_6->type, VAR_5),
         VAR_6->pwm[VAR_5] |
         (FUNC_7(VAR_6,
         FUNC_1(VAR_6->type, VAR_5)) & 0x0f));
 } else {
  VAR_6->pwm[VAR_5] = FUNC_0(VAR_7);
  FUNC_8(VAR_6,
         FUNC_1(VAR_6->type, VAR_5),
         VAR_6->pwm[VAR_5]);
 }

 FUNC_5(&VAR_6->update_lock);
 return VAR_4;
}
