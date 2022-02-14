
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
typedef enum bmi160_int_pin { ____Placeholder_bmi160_int_pin } bmi160_int_pin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct regmap*,int ,int,int,unsigned long) ;
 int FUNC_1 (struct device*,char*,char const*) ;
 struct device* FUNC_2 (struct regmap*) ;

__attribute__((used)) static int FUNC_3(struct regmap *VAR_12, enum bmi160_int_pin VAR_13,
        bool VAR_14, u8 VAR_15,
        unsigned long VAR_16)
{
 int VAR_17;
 struct device *VAR_18 = FUNC_2(VAR_12);
 u8 VAR_19;
 u8 VAR_20;
 u8 VAR_21;
 u8 VAR_22;
 u8 VAR_23;
 const char *VAR_24;

 switch (VAR_13) {
 case 129:
  VAR_19 = VAR_2;
  VAR_20 = VAR_0;
  VAR_21 = VAR_1;
  break;
 case 128:
  VAR_19 = VAR_5;
  VAR_20 = VAR_3;
  VAR_21 = VAR_4;
  break;
 }
 VAR_22 = VAR_6 << VAR_19;







 VAR_23 = VAR_8;
 if (VAR_14)

  VAR_23 |= VAR_7;
 VAR_23 |= VAR_15;
 VAR_23 <<= VAR_19;

 VAR_17 = FUNC_0(VAR_12, VAR_11,
        VAR_22, VAR_23,
        VAR_16);
 if (VAR_17)
  return VAR_17;


 VAR_17 = FUNC_0(VAR_12, VAR_9,
        VAR_20, VAR_20,
        VAR_16);
 if (VAR_17)
  return VAR_17;


 VAR_17 = FUNC_0(VAR_12, VAR_10,
        VAR_21, VAR_21,
        VAR_16);
 if (VAR_17) {
  switch (VAR_13) {
  case 129:
   VAR_24 = "INT1";
   break;
  case 128:
   VAR_24 = "INT2";
   break;
  }
  FUNC_1(VAR_18, "Failed to configure %s IRQ pin", VAR_24);
 }

 return VAR_17;
}
