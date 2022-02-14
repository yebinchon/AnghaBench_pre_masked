
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


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct nct7802_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int ,int*) ;
 int FUNC_4 (int ,int ,int,int) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct nct7802_data *VAR_5 = FUNC_2(VAR_1);
 struct sensor_device_attribute *VAR_6 = FUNC_5(VAR_2);
 u8 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, 0, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_7 < 1 || VAR_7 > 2)
  return -VAR_0;
 VAR_8 = FUNC_4(VAR_5->regmap, FUNC_0(VAR_6->index),
     1 << FUNC_1(VAR_6->index),
     (VAR_7 - 1) << FUNC_1(VAR_6->index));
 return VAR_8 ? : VAR_4;
}
