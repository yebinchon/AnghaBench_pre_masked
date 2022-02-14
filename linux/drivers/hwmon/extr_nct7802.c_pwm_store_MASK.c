
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct nct7802_data {int regmap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct nct7802_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
    const char *VAR_2, size_t VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_3(VAR_1);
 struct nct7802_data *VAR_5 = FUNC_0(VAR_0);
 int VAR_6;
 u8 VAR_7;

 VAR_6 = FUNC_1(VAR_2, 0, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_5->regmap, VAR_4->index, VAR_7);
 return VAR_6 ? : VAR_3;
}
