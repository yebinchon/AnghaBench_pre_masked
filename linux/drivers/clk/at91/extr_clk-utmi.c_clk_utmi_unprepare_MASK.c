
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_utmi {int regmap_pmc; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct clk_utmi* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_2)
{
 struct clk_utmi *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3->regmap_pmc, VAR_0,
      VAR_1, 0);
}
