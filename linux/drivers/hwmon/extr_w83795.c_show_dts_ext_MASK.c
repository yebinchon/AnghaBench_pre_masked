
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83795_data {int * dts_ext; } ;
struct sensor_device_attribute_2 {int nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct w83795_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,long) ;
 long FUNC_2 (int ) ;
 struct sensor_device_attribute_2* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute_2 *VAR_3 =
     FUNC_3(VAR_1);
 int VAR_4 = VAR_3->nr;
 struct w83795_data *VAR_5 = FUNC_0(VAR_0);
 long VAR_6 = FUNC_2(VAR_5->dts_ext[VAR_4]);

 return FUNC_1(VAR_2, "%ld\n", VAR_6);
}
