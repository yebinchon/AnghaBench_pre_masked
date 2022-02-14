
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_adc_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (struct sc27xx_adc_data*,int) ;

__attribute__((used)) static int FUNC_2(struct sc27xx_adc_data *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5->regmap, VAR_4,
     VAR_3, VAR_3);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_0(VAR_5->regmap, VAR_0,
     VAR_2 | VAR_1,
     VAR_2 | VAR_1);
 if (VAR_6)
  goto disable_adc;


 VAR_6 = FUNC_1(VAR_5, 1);
 if (VAR_6)
  goto disable_clk;

 VAR_6 = FUNC_1(VAR_5, 0);
 if (VAR_6)
  goto disable_clk;

 return 0;

disable_clk:
 FUNC_0(VAR_5->regmap, VAR_0,
      VAR_2 | VAR_1, 0);
disable_adc:
 FUNC_0(VAR_5->regmap, VAR_4,
      VAR_3, 0);

 return VAR_6;
}
