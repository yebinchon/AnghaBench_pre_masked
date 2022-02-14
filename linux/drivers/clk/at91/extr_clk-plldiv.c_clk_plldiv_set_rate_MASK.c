
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_plldiv {int regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct clk_plldiv* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_3, unsigned long VAR_4,
          unsigned long VAR_5)
{
 struct clk_plldiv *VAR_6 = FUNC_1(VAR_3);

 if ((VAR_5 != VAR_4) && (VAR_5 / 2 != VAR_4))
  return -VAR_2;

 FUNC_0(VAR_6->regmap, VAR_0, VAR_1,
      VAR_5 != VAR_4 ? VAR_1 : 0);

 return 0;
}
