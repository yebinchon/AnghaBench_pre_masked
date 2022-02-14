
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int * VAR_0 ;
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct regmap *VAR_1, int VAR_2, long *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_0[VAR_2], &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 *VAR_3 = (VAR_4 & 0x04) >> 2;
 return 0;
}
