
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_clk_gate {int bit; int sta_ofs; int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 struct mtk_clk_gate* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0)
{
 struct mtk_clk_gate *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2;

 FUNC_1(VAR_1->regmap, VAR_1->sta_ofs, &VAR_2);

 VAR_2 &= FUNC_0(VAR_1->bit);

 return VAR_2 != 0;
}
