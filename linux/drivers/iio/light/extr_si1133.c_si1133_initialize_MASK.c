
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si1133_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct si1133_data*) ;
 int FUNC_2 (struct si1133_data*) ;
 int FUNC_3 (struct si1133_data*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct si1133_data *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_3(VAR_3, VAR_2, 0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_3->regmap, VAR_1,
       VAR_0);
}
