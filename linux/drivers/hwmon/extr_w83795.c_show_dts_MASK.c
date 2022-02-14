
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83795_data {int* dts_read_vrlsb; int * dts; } ;
struct sensor_device_attribute_2 {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,long) ;
 long FUNC_1 (int ) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;
 struct w83795_data* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute_2 *VAR_3 =
     FUNC_2(VAR_1);
 int VAR_4 = VAR_3->index;
 struct w83795_data *VAR_5 = FUNC_3(VAR_0);
 long VAR_6 = FUNC_1(VAR_5->dts[VAR_4]);

 VAR_6 += (VAR_5->dts_read_vrlsb[VAR_4] >> 6) * 250;
 return FUNC_0(VAR_2, "%ld\n", VAR_6);
}
