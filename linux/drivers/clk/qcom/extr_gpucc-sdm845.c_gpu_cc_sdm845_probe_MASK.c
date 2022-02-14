
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct platform_device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,struct regmap*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct regmap* FUNC_3 (struct platform_device*,int *) ;
 int FUNC_4 (struct platform_device*,int *,struct regmap*) ;
 int FUNC_5 (struct regmap*,int,unsigned int,int) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_9)
{
 struct regmap *VAR_10;
 unsigned int VAR_11, VAR_12;

 VAR_10 = FUNC_3(VAR_9, &VAR_8);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 FUNC_2(&VAR_6, VAR_10, &VAR_7);





 VAR_12 = VAR_4 << VAR_5;
 VAR_12 |= VAR_2 << VAR_3;
 VAR_11 = 0xf << VAR_5 | 0xf << VAR_3;
 FUNC_5(VAR_10, 0x1098, VAR_12, VAR_11);


 FUNC_5(VAR_10, 0x106c, VAR_0,
      8 << VAR_1);

 return FUNC_4(VAR_9, &VAR_8, VAR_10);
}
