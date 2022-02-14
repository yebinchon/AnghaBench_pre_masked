
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
 int VAR_1 ;
 struct nct7802_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,int,unsigned int) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
          struct device_attribute *VAR_3, const char *VAR_4,
          size_t VAR_5)
{
 struct nct7802_data *VAR_6 = FUNC_0(VAR_2);
 struct sensor_device_attribute *VAR_7 = FUNC_3(VAR_3);
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_4, 0, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_7->index == 2 && VAR_8 != 4)
  return -VAR_0;
 if (VAR_8 < 3 || VAR_8 > 4)
  return -VAR_0;
 VAR_9 = FUNC_2(VAR_6->regmap, VAR_1,
   3 << 2 * VAR_7->index, (VAR_8 - 2) << 2 * VAR_7->index);
 return VAR_9 ? : VAR_5;
}
