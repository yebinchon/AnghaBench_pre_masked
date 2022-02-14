
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct nct6775_data {int* ALARM_BITS; int alarms; int num_temp_alarms; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct nct6775_data*,int ,int ) ;
 struct nct6775_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,unsigned int) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_3(VAR_2);
 struct nct6775_data *VAR_5 = FUNC_1(VAR_1);
 unsigned int VAR_6 = 0;
 int VAR_7;





 VAR_7 = FUNC_0(VAR_5, VAR_4->index, VAR_5->num_temp_alarms);
 if (VAR_7 >= 0) {
  int VAR_8 = VAR_5->ALARM_BITS[VAR_7 + VAR_0];

  VAR_6 = (VAR_5->alarms >> VAR_8) & 0x01;
 }
 return FUNC_2(VAR_3, "%u\n", VAR_6);
}
