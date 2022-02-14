
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (int,char*,int) ;
 struct regmap* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (struct regmap*,int,int*,int) ;
 int FUNC_5 (struct regmap*,int ,int ,int ) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_7,
         struct device_attribute *VAR_8,
         const char *VAR_9, size_t VAR_10)
{
 struct sensor_device_attribute *VAR_11 = FUNC_6(VAR_8);
 struct regmap *VAR_12 = FUNC_1(VAR_7);
 u8 VAR_13 = VAR_11->index;
 int VAR_14 = FUNC_2(VAR_13) ? 3 : 2;
 u8 VAR_15[3] = { 0xff, 0xff, 0xff };
 u8 VAR_16[3] = { 0, 0, 0 };
 unsigned long VAR_17;
 int VAR_18;

 VAR_18 = FUNC_3(VAR_9, 10, &VAR_17);
 if (VAR_18)
  return VAR_18;
 if (VAR_17 != 1)
  return -VAR_1;

 VAR_18 = FUNC_5(VAR_12, VAR_2, VAR_0,
     VAR_0);


 VAR_18 = FUNC_4(VAR_12, VAR_13, VAR_15, VAR_14);
 if (VAR_18)
  return VAR_18;

 switch (VAR_13) {
 case 130:
  VAR_13 = VAR_4;
  break;
 case 129:
  VAR_13 = VAR_5;
  break;
 case 128:
  VAR_13 = VAR_6;
  break;
 case 131:
  VAR_13 = VAR_3;
  break;
 default:
  FUNC_0(1, "Bad register: 0x%x\n", VAR_13);
  return -VAR_1;
 }

 VAR_18 = FUNC_4(VAR_12, VAR_13, VAR_16, VAR_14);


 FUNC_5(VAR_12, VAR_2, VAR_0, 0);

 return VAR_18 ? : VAR_10;
}
