
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_lptim_cnt {int enabled; int ceiling; int regmap; int clk; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int,int,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct stm32_lptim_cnt *VAR_9,
     int VAR_10)
{
 int VAR_11;
 u32 VAR_12;

 VAR_12 = FUNC_0(VAR_6, VAR_10);
 VAR_11 = FUNC_5(VAR_9->regmap, VAR_5, VAR_12);
 if (VAR_11)
  return VAR_11;

 if (!VAR_10) {
  FUNC_1(VAR_9->clk);
  VAR_9->enabled = 0;
  return 0;
 }


 VAR_11 = FUNC_5(VAR_9->regmap, VAR_0, VAR_9->ceiling);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_5(VAR_9->regmap, VAR_1, 0);
 if (VAR_11)
  return VAR_11;


 VAR_11 = FUNC_3(VAR_9->regmap, VAR_8, VAR_12,
           (VAR_12 & VAR_3),
           100, 1000);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_5(VAR_9->regmap, VAR_7,
      VAR_2);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_9->clk);
 if (VAR_11) {
  FUNC_5(VAR_9->regmap, VAR_5, 0);
  return VAR_11;
 }
 VAR_9->enabled = 1;


 return FUNC_4(VAR_9->regmap, VAR_5,
      VAR_4, VAR_4);
}
