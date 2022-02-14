
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max30100_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct max30100_data*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct max30100_data *VAR_11)
{
 int VAR_12;


 VAR_12 = FUNC_0(VAR_11);
 if (VAR_12)
  return VAR_12;


 VAR_12 = FUNC_2(VAR_11->regmap, VAR_8,
     VAR_10 |
     VAR_9);
 if (VAR_12)
  return VAR_12;


 VAR_12 = FUNC_1(VAR_11->regmap, VAR_4,
     VAR_6,
     VAR_5 |
     VAR_7);
 if (VAR_12)
  return VAR_12;


 return FUNC_1(VAR_11->regmap, VAR_0,
     VAR_2,
     VAR_1
     << VAR_3);
}
