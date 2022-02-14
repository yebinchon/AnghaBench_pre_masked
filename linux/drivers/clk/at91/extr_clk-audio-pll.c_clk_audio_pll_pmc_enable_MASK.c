
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_audio_pmc {int qdpmc; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,int) ;
 struct clk_audio_pmc* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_3)
{
 struct clk_audio_pmc *VAR_4 = FUNC_2(VAR_3);

 FUNC_1(VAR_4->regmap, VAR_0,
      VAR_1 |
      VAR_2,
      VAR_1 |
      FUNC_0(VAR_4->qdpmc));
 return 0;
}
