
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dps310_data {int regmap; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct dps310_data *VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1->regmap, VAR_0, &VAR_3);
 if (VAR_2 < 0)
  return VAR_2;





 return FUNC_0(VAR_3 & FUNC_1(2, 0));
}
