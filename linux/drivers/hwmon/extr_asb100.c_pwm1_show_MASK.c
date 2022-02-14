
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asb100_data {int pwm; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 struct asb100_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
  char *VAR_2)
{
 struct asb100_data *VAR_3 = FUNC_1(VAR_0);
 return FUNC_2(VAR_2, "%d\n", FUNC_0(VAR_3->pwm & 0x0f));
}
