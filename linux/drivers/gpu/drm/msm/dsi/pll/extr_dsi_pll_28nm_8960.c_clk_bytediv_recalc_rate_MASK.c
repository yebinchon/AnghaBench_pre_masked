
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_bytediv {int reg; } ;


 int FUNC_0 (int ) ;
 struct clk_bytediv* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
  unsigned long VAR_1)
{
 struct clk_bytediv *VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_2->reg) & 0xff;

 return VAR_1 / (VAR_3 + 1);
}
