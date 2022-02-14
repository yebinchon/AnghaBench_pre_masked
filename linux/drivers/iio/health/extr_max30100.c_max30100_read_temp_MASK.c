
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max30100_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct max30100_data *VAR_2, int *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_0(VAR_2->regmap, VAR_1, &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;
 *VAR_3 = VAR_5 << 4;

 VAR_4 = FUNC_0(VAR_2->regmap, VAR_0, &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 *VAR_3 |= VAR_5 & 0xf;
 *VAR_3 = FUNC_1(*VAR_3, 11);

 return 0;
}
