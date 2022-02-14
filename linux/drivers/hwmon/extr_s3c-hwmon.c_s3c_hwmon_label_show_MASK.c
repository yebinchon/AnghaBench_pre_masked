
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct s3c_hwmon_pdata {struct s3c_hwmon_chcfg** in; } ;
struct s3c_hwmon_chcfg {char* name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct s3c_hwmon_pdata* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,char*) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_2(VAR_2);
 struct s3c_hwmon_pdata *VAR_5 = FUNC_0(VAR_1);
 struct s3c_hwmon_chcfg *VAR_6;

 VAR_6 = VAR_5->in[VAR_4->index];

 return FUNC_1(VAR_3, VAR_0, "%s\n", VAR_6->name);
}
