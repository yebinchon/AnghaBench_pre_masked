
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; int nr; } ;
struct nct7802_data {int regmap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct nct7802_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct nct7802_data *VAR_3 = FUNC_0(VAR_0);
 struct sensor_device_attribute_2 *VAR_4 = FUNC_3(VAR_1);
 int VAR_5 = VAR_4->index;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3->regmap, VAR_4->nr, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_2(VAR_2, "%u\n", !!(VAR_6 & (1 << VAR_5)));
}
