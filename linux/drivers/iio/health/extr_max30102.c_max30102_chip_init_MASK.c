
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max30102_data {int regmap; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct max30102_data*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct max30102_data *VAR_13)
{
 int VAR_14;


 VAR_14 = FUNC_0(VAR_13);
 if (VAR_14)
  return VAR_14;


 VAR_14 = FUNC_2(VAR_13->regmap, VAR_7,
    (VAR_8
     << VAR_9) |
    (VAR_11
     << VAR_12) |
     VAR_10);
 if (VAR_14)
  return VAR_14;


 VAR_14 = FUNC_2(VAR_13->regmap, VAR_0,
    (VAR_2
     << VAR_3) |
     VAR_1);
 if (VAR_14)
  return VAR_14;


 return FUNC_1(VAR_13->regmap, VAR_4,
     VAR_6,
     VAR_5);
}
