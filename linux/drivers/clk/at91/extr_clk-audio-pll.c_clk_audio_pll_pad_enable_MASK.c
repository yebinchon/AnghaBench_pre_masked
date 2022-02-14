
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_audio_pad {int regmap; int div; int qdaudio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct clk_audio_pad* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_4)
{
 struct clk_audio_pad *VAR_5 = FUNC_2(VAR_4);

 FUNC_1(VAR_5->regmap, VAR_1,
      VAR_3,
      FUNC_0(VAR_5->qdaudio, VAR_5->div));
 FUNC_1(VAR_5->regmap, VAR_0,
      VAR_2, VAR_2);

 return 0;
}
