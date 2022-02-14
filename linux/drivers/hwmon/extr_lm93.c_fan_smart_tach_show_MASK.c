
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm93_data {int sf_tach_to_pwm; int sfc2; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 struct lm93_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,long) ;
 TYPE_1__* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
       struct device_attribute *VAR_1, char *VAR_2)
{
 int VAR_3 = (FUNC_2(VAR_1))->index;
 struct lm93_data *VAR_4 = FUNC_0(VAR_0);
 long VAR_5 = 0;
 int VAR_6;


 VAR_6 = (VAR_4->sf_tach_to_pwm >> (VAR_3 * 2)) & 0x03;


 if (VAR_6 && ((VAR_4->sfc2 >> VAR_3) & 0x01))
  VAR_5 = VAR_6;
 return FUNC_1(VAR_2, "%ld\n", VAR_5);
}
