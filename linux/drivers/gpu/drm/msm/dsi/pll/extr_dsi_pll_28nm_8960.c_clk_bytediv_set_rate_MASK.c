
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct clk_hw {int dummy; } ;
struct clk_bytediv {int reg; } ;


 unsigned int FUNC_0 (unsigned long) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 struct clk_bytediv* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0, unsigned long VAR_1,
    unsigned long VAR_2)
{
 struct clk_bytediv *VAR_3 = FUNC_3(VAR_0);
 u32 VAR_4;
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_1);

 VAR_4 = FUNC_1(VAR_3->reg);
 VAR_4 |= (VAR_5 - 1) & 0xff;
 FUNC_2(VAR_3->reg, VAR_4);

 return 0;
}
