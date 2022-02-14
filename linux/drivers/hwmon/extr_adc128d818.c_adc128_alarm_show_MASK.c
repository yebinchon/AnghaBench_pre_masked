
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adc128_data {int alarms; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 scalar_t__ FUNC_0 (struct adc128_data*) ;
 int FUNC_1 (struct adc128_data*) ;
 struct adc128_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;
 TYPE_1__* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 struct adc128_data *VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = 1 << FUNC_4(VAR_1)->index;
 u8 VAR_5;

 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);





 VAR_5 = VAR_3->alarms;
 VAR_3->alarms &= ~VAR_4;

 return FUNC_3(VAR_2, "%u\n", !!(VAR_5 & VAR_4));
}
