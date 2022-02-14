
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned long,int) ;
 int VAR_1 ;

 int VAR_2 ;
 struct regmap* FUNC_1 (struct device*) ;
 int FUNC_2 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, u8 VAR_4,
         unsigned long VAR_5)
{
 struct regmap *VAR_6 = FUNC_1(VAR_3);
 unsigned int VAR_7;
 int VAR_8;

 switch (VAR_4) {
 case 130:
 case 144:
 case 136:
 case 143:
 case 135:
  VAR_8 = FUNC_2(VAR_6, VAR_2, &VAR_7);
  if (VAR_8 < 0)
   return VAR_8;
  if (VAR_7 & VAR_0) {

   VAR_5 = FUNC_0(VAR_5, 625);
  } else {





   VAR_5 = FUNC_0(VAR_5, 25) * 2;
  }
  break;
 case 128:
 case 140:
 case 132:
 case 139:
 case 131:

  VAR_5 /= 25;
  break;
 case 147:
 case 146:
 case 137:
 case 145:
 case 138:

  VAR_5 *= 2;
  break;
 case 129:
 case 142:
 case 134:
 case 141:
 case 133:







  VAR_5 = FUNC_0(VAR_5, 25);
  break;
 default:
  return -VAR_1;
 }
 return VAR_5;
}
