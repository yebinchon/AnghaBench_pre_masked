
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
typedef scalar_t__ s16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_0,
         s16 *VAR_1, s16 *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_1(VAR_0, FUNC_0(1), &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;
 *VAR_1 = (s16)VAR_4;

 VAR_3 = FUNC_1(VAR_0, FUNC_0(2), &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;
 *VAR_2 = (s16)VAR_4;

 return VAR_3;
}
