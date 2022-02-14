
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;
 long FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_1, long *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 *VAR_2 = FUNC_1(VAR_3);
 return 0;
}
