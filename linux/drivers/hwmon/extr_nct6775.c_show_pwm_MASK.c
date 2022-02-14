
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int nr; int index; } ;
struct nct6775_data {scalar_t__* pwm_enable; int** pwm; int * REG_PWM_READ; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nct6775_data*,int ) ;
 struct nct6775_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct nct6775_data *VAR_4 = FUNC_1(VAR_1);
 struct sensor_device_attribute_2 *VAR_5 = FUNC_3(VAR_2);
 int VAR_6 = VAR_5->nr;
 int VAR_7 = VAR_5->index;
 int VAR_8;





 if (VAR_7 == 0 && VAR_4->pwm_enable[VAR_6] > VAR_0)
  VAR_8 = FUNC_0(VAR_4, VAR_4->REG_PWM_READ[VAR_6]);
 else
  VAR_8 = VAR_4->pwm[VAR_7][VAR_6];

 return FUNC_2(VAR_3, "%d\n", VAR_8);
}
