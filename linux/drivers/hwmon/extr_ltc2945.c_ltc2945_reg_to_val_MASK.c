
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 long long VAR_1 ;

 int VAR_2 ;
 struct regmap* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct regmap*,int,int*,int) ;
 int FUNC_3 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static long long FUNC_4(struct device *VAR_3, u8 VAR_4)
{
 struct regmap *VAR_5 = FUNC_0(VAR_3);
 unsigned int VAR_6;
 u8 VAR_7[3];
 long long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_5, VAR_4, VAR_7,
          FUNC_1(VAR_4) ? 3 : 2);
 if (VAR_9 < 0)
  return VAR_9;

 if (FUNC_1(VAR_4)) {

  VAR_8 = (VAR_7[0] << 16) + (VAR_7[1] << 8) + VAR_7[2];
 } else {

  VAR_8 = (VAR_7[0] << 4) + (VAR_7[1] >> 4);
 }

 switch (VAR_4) {
 case 130:
 case 144:
 case 136:
 case 143:
 case 135:







  VAR_9 = FUNC_3(VAR_5, VAR_2, &VAR_6);
  if (VAR_9 < 0)
   return VAR_9;
  if (VAR_6 & VAR_0) {

   VAR_8 *= 625LL;
  } else {

   VAR_8 = (VAR_8 * 25LL) >> 1;
  }
  break;
 case 128:
 case 140:
 case 132:
 case 139:
 case 131:

  VAR_8 *= 25;
  break;
 case 147:
 case 146:
 case 137:
 case 145:
 case 138:

  VAR_8 = VAR_8 >> 1;
  break;
 case 129:
 case 142:
 case 134:
 case 141:
 case 133:







  VAR_8 *= 25;
  break;
 default:
  return -VAR_1;
 }
 return VAR_8;
}
