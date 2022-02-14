
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* read_sensor ) (struct abx500_temp*,int ,int*) ;} ;
struct abx500_temp {TYPE_1__ ops; int * gpadc_addr; } ;
typedef int ssize_t ;


 struct abx500_temp* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct abx500_temp*,int ,int*) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 int VAR_3, VAR_4;
 struct abx500_temp *VAR_5 = FUNC_0(VAR_0);
 struct sensor_device_attribute *VAR_6 = FUNC_3(VAR_1);
 u8 VAR_7 = VAR_5->gpadc_addr[VAR_6->index];

 VAR_3 = VAR_5->ops.read_sensor(VAR_5, VAR_7, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_1(VAR_2, "%d\n", VAR_4);
}
