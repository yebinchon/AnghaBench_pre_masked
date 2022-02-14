
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_audio_pad {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct clk_audio_pad* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_2)
{
 struct clk_audio_pad *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3->regmap, VAR_0,
      VAR_1, 0);
}
