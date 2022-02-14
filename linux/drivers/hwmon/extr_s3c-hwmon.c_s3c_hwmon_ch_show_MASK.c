
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct s3c_hwmon_pdata {struct s3c_hwmon_chcfg** in; } ;
struct s3c_hwmon_chcfg {int mult; int div; } ;
struct s3c_hwmon {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 struct s3c_hwmon* FUNC_1 (struct device*) ;
 struct s3c_hwmon_pdata* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,struct s3c_hwmon*,size_t) ;
 int FUNC_4 (char*,int ,char*,int) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_5(VAR_2);
 struct s3c_hwmon *VAR_5 = FUNC_1(VAR_1);
 struct s3c_hwmon_pdata *VAR_6 = FUNC_2(VAR_1);
 struct s3c_hwmon_chcfg *VAR_7;
 int VAR_8;

 VAR_7 = VAR_6->in[VAR_4->index];

 VAR_8 = FUNC_3(VAR_1, VAR_5, VAR_4->index);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 *= VAR_7->mult;
 VAR_8 = FUNC_0(VAR_8, VAR_7->div);

 return FUNC_4(VAR_3, VAR_0, "%d\n", VAR_8);
}
