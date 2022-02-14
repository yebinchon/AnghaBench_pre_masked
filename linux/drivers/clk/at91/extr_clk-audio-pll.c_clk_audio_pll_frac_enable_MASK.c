
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_audio_frac {int fracr; int nd; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int,int) ;
 struct clk_audio_frac* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_6)
{
 struct clk_audio_frac *VAR_7 = FUNC_2(VAR_6);

 FUNC_1(VAR_7->regmap, VAR_0,
      VAR_5, 0);
 FUNC_1(VAR_7->regmap, VAR_0,
      VAR_5,
      VAR_5);
 FUNC_1(VAR_7->regmap, VAR_1,
      VAR_2, VAR_7->fracr);





 FUNC_1(VAR_7->regmap, VAR_0,
      VAR_4 |
      VAR_3,
      VAR_4 |
      FUNC_0(VAR_7->nd));

 return 0;
}
