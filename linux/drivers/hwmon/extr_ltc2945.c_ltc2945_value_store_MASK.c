
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct regmap {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int,int ,int) ;
 struct regmap* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (struct device*,int,unsigned long) ;
 int FUNC_5 (struct regmap*,int,int*,int) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_0,
       struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_6(VAR_1);
 struct regmap *VAR_5 = FUNC_1(VAR_0);
 u8 VAR_6 = VAR_4->index;
 unsigned long VAR_7;
 u8 VAR_8[3];
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_2, 10, &VAR_7);
 if (VAR_11)
  return VAR_11;


 VAR_10 = FUNC_4(VAR_0, VAR_6, VAR_7);
 if (FUNC_2(VAR_6)) {
  VAR_10 = FUNC_0(VAR_10, 0, 0xffffff);
  VAR_8[0] = VAR_10 >> 16;
  VAR_8[1] = (VAR_10 >> 8) & 0xff;
  VAR_8[2] = VAR_10;
  VAR_9 = 3;
 } else {
  VAR_10 = FUNC_0(VAR_10, 0, 0xfff) << 4;
  VAR_8[0] = VAR_10 >> 8;
  VAR_8[1] = VAR_10 & 0xff;
  VAR_9 = 2;
 }
 VAR_11 = FUNC_5(VAR_5, VAR_6, VAR_8, VAR_9);
 return VAR_11 < 0 ? VAR_11 : VAR_3;
}
