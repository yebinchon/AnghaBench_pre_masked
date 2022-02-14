
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx9500_data {int regmap; } ;


 int FUNC_0 (int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct sx9500_data *VAR_0, int *VAR_1,
       unsigned int VAR_2, unsigned int VAR_3)
{
 (*VAR_1)++;
 if (*VAR_1 != 1)

  return 0;

 return FUNC_0(VAR_0->regmap, VAR_2, VAR_3, VAR_3);
}
