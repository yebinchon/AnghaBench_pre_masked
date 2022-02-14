
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;






 struct regmap* FUNC_1 (struct device*) ;
 int FUNC_2 (struct regmap*,int,int*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, u8 VAR_2)
{
 struct regmap *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4;
 u8 VAR_5[2];
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_2, VAR_5, 2);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4 = ((VAR_5[0] << 8) + VAR_5[1]) >> 6;

 switch (VAR_2) {
 case 133:
 case 132:

  VAR_4 = FUNC_0(VAR_4 * 5, 4);
  break;
 case 129:
 case 128:

  VAR_4 = FUNC_0(VAR_4 * 125, 4);
  break;
 case 131:
 case 130:







  VAR_4 = FUNC_0(VAR_4 * 125, 2);
  break;
 default:
  return -VAR_0;
 }
 return VAR_4;
}
