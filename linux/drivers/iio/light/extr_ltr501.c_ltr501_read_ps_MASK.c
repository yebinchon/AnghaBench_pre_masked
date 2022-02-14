
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltr501_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ltr501_data*,int ) ;
 int FUNC_1 (int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct ltr501_data *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2->regmap, VAR_0,
          &VAR_4, 2);
 if (VAR_3 < 0)
  return VAR_3;

 return VAR_4;
}
