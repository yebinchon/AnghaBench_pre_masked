
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int nr; int index; } ;
struct nct6775_data {int ** temp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 struct nct6775_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct nct6775_data *VAR_3 = FUNC_1(VAR_0);
 struct sensor_device_attribute_2 *VAR_4 = FUNC_3(VAR_1);
 int VAR_5 = VAR_4->nr;
 int VAR_6 = VAR_4->index;

 return FUNC_2(VAR_2, "%d\n", FUNC_0(VAR_3->temp[VAR_6][VAR_5]));
}
