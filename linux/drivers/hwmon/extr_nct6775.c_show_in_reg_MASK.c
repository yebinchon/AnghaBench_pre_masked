
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; int nr; } ;
struct nct6775_data {int ** in; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int) ;
 struct nct6775_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int ) ;
 struct sensor_device_attribute_2* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct nct6775_data *VAR_3 = FUNC_1(VAR_0);
 struct sensor_device_attribute_2 *VAR_4 = FUNC_3(VAR_1);
 int VAR_5 = VAR_4->index;
 int VAR_6 = VAR_4->nr;

 return FUNC_2(VAR_2, "%ld\n", FUNC_0(VAR_3->in[VAR_6][VAR_5], VAR_6));
}
