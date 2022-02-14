
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*,unsigned int,unsigned int*) ;

__attribute__((used)) static bool FUNC_3(struct regmap *VAR_2)
{
 unsigned int VAR_3, VAR_4 = VAR_1;

 if (FUNC_1(VAR_2))
  return 0;

 FUNC_2(VAR_2, VAR_4, &VAR_3);

 return !!(VAR_3 & FUNC_0(VAR_0));
}
