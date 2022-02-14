
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; int nr; } ;
struct nct7802_data {int regmap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct nct7802_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int ,int ,int,int) ;
 struct sensor_device_attribute_2* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3,
    size_t VAR_4)
{
 struct sensor_device_attribute_2 *VAR_5 = FUNC_3(VAR_2);
 struct nct7802_data *VAR_6 = FUNC_0(VAR_1);
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_3, 10, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_7 > 1)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_6->regmap, VAR_5->nr, 1 << VAR_5->index,
     VAR_7 ? 1 << VAR_5->index : 0);
 return VAR_8 ? : VAR_4;
}
