
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct regmap {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 long FUNC_0 (long,int,int) ;
 struct regmap* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (struct regmap*,int ,int ) ;
 int FUNC_4 (long) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_5(VAR_2);
 struct regmap *VAR_6 = FUNC_1(VAR_1);
 long VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_3, 10, &VAR_7) < 0)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_7, -55000, 127000);
 VAR_8 = FUNC_3(VAR_6, VAR_5->index, FUNC_4(VAR_7));
 return VAR_8 ? VAR_8 : VAR_4;
}
