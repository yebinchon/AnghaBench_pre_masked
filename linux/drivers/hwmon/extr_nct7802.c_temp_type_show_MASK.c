
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct nct7802_data {int regmap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct nct7802_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (char*,char*,unsigned int) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct nct7802_data *VAR_4 = FUNC_0(VAR_1);
 struct sensor_device_attribute *VAR_5 = FUNC_3(VAR_2);
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4->regmap, VAR_0, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_2(VAR_3, "%u\n", (VAR_6 >> (2 * VAR_5->index) & 3) + 2);
}
