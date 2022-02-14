
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct nct7802_data {int regmap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct nct7802_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (char*,char*,unsigned int) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 struct nct7802_data *VAR_3 = FUNC_2(VAR_0);
 struct sensor_device_attribute *VAR_4 = FUNC_5(VAR_1);
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3->regmap, FUNC_0(VAR_4->index), &VAR_5);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_6 = VAR_5 >> FUNC_1(VAR_4->index) & 1;
 return FUNC_4(VAR_2, "%u\n", VAR_6 + 1);
}
