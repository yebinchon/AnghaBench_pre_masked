
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; int nr; } ;
struct nct6683_data {int * in_index; int ** in; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int ) ;
 struct nct6683_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int ) ;
 struct sensor_device_attribute_2* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute_2 *VAR_3 = FUNC_3(VAR_1);
 struct nct6683_data *VAR_4 = FUNC_1(VAR_0);
 int VAR_5 = VAR_3->index;
 int VAR_6 = VAR_3->nr;

 return FUNC_2(VAR_2, "%ld\n",
         FUNC_0(VAR_4->in[VAR_5][VAR_6], VAR_4->in_index[VAR_5]));
}
