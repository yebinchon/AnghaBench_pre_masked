
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct it87_data {int extra; int fan_ctl; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct it87_data*) ;
 scalar_t__ FUNC_1 (struct it87_data*) ;
 struct it87_data* FUNC_2 (struct device*) ;
 int* VAR_0 ;
 int FUNC_3 (char*,char*,unsigned int) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_4(VAR_2);
 struct it87_data *VAR_5 = FUNC_2(VAR_1);
 int VAR_6 = VAR_4->index;
 unsigned int VAR_7;
 int VAR_8;

 if (FUNC_1(VAR_5) && VAR_6 == 1)
  VAR_8 = (VAR_5->extra >> 4) & 0x07;
 else
  VAR_8 = (VAR_5->fan_ctl >> 4) & 0x07;

 VAR_7 = VAR_0[VAR_8] / (FUNC_0(VAR_5) ? 256 : 128);

 return FUNC_3(VAR_3, "%u\n", VAR_7);
}
