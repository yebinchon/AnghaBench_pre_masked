
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct nct6683_data {size_t* temp_src; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 char** VAR_0 ;
 struct nct6683_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_2(VAR_2);
 struct nct6683_data *VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = VAR_4->index;

 return FUNC_1(VAR_3, "%s\n", VAR_0[VAR_5->temp_src[VAR_6]]);
}
