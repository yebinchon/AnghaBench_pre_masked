
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int nr; } ;
struct nct7802_data {int regmap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 long FUNC_0 (int ,int) ;
 int FUNC_1 (long,int,int) ;
 struct nct7802_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int ,int,long) ;
 struct sensor_device_attribute_2* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0, struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 struct sensor_device_attribute_2 *VAR_4 = FUNC_5(VAR_1);
 struct nct7802_data *VAR_5 = FUNC_2(VAR_0);
 int VAR_6 = VAR_4->nr;
 long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_2, 10, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_0(FUNC_1(VAR_7, -128000, 127000), 1000);

 VAR_8 = FUNC_4(VAR_5->regmap, VAR_6, VAR_7 & 0xff);
 return VAR_8 ? : VAR_3;
}
