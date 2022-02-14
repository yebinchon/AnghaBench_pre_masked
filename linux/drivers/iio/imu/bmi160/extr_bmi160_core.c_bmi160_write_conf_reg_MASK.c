
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int FUNC_0 (struct regmap*,unsigned int,unsigned int*) ;
 int FUNC_1 (struct regmap*,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct regmap *VAR_0, unsigned int VAR_1,
     unsigned int VAR_2, unsigned int VAR_3,
     unsigned int VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_6 = (VAR_6 & ~VAR_2) | VAR_3;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_6);
 if (VAR_5)
  return VAR_5;





 FUNC_2(VAR_4, VAR_4 + 1000);

 return 0;
}
