
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max30100_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct max30100_data*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct max30100_data *VAR_2, int *VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_2(VAR_2->regmap, VAR_0,
     VAR_1,
     VAR_1);
 if (VAR_4)
  return VAR_4;

 FUNC_1(35);

 return FUNC_0(VAR_2, VAR_3);
}
