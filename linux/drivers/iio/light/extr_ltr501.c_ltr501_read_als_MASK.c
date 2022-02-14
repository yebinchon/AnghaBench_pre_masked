
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltr501_data {int regmap; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ltr501_data*,int ) ;
 int FUNC_1 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct ltr501_data *VAR_2, __le16 VAR_3[2])
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_1(VAR_2->regmap, VAR_0,
    VAR_3, 2 * sizeof(__le16));
}
