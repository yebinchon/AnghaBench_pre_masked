
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;



 struct regmap* FUNC_0 (struct device*) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, u8 VAR_2)
{
 struct regmap *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_2, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 switch (VAR_2) {
 case 130:

  VAR_4 = VAR_4 * 10;
  break;
 case 128:

  VAR_4 = VAR_4 * 400;
  break;
 case 129:







  VAR_4 = VAR_4 * 300;
  break;
 default:
  return -VAR_0;
 }

 return VAR_4;
}
