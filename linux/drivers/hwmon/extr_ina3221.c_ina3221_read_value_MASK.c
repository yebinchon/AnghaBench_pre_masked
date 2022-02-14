
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina3221_data {int regmap; } ;


 int FUNC_0 (int ,unsigned int,unsigned int*) ;
 int FUNC_1 (unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct ina3221_data *VAR_0, unsigned int VAR_1,
         int *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->regmap, VAR_1, &VAR_3);
 if (VAR_4)
  return VAR_4;

 *VAR_2 = FUNC_1(VAR_3 >> 3, 12);

 return 0;
}
