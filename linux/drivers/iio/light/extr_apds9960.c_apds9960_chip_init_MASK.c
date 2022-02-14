
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apds9960_data {int regmap; int reg_enable_als; int reg_int_als; int reg_enable_pxs; int reg_int_pxs; int reg_enable_ges; int reg_int_ges; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct apds9960_data*,int) ;
 int FUNC_2 (struct apds9960_data*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct apds9960_data *VAR_9)
{
 int VAR_10;


 VAR_10 = FUNC_1(VAR_9, 28000);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_3(VAR_9->reg_int_ges, 0);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_3(VAR_9->reg_enable_ges, 0);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_3(VAR_9->reg_int_pxs, 0);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_3(VAR_9->reg_enable_pxs, 1);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_3(VAR_9->reg_int_als, 0);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_3(VAR_9->reg_enable_als, 1);
 if (VAR_10)
  return VAR_10;




 VAR_10 = FUNC_5(VAR_9->regmap, VAR_8,
      VAR_2);
 if (VAR_10)
  return VAR_10;





 VAR_10 = FUNC_4(VAR_9->regmap, VAR_3,
   VAR_4,
   FUNC_0(0) << VAR_5);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_5(VAR_9->regmap, VAR_7,
      VAR_1);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_5(VAR_9->regmap, VAR_6,
      VAR_0);
 if (VAR_10)
  return VAR_10;

 return FUNC_2(VAR_9, 1);
}
