
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {int dummy; } ;
struct clk_hw {int dummy; } ;
struct alchemy_fgcs_clk {int reg; } ;


 int FUNC_0 (struct clk_hw*,struct clk_rate_request*,int,int) ;
 int FUNC_1 (int ) ;
 struct alchemy_fgcs_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0,
     struct clk_rate_request *VAR_1)
{
 struct alchemy_fgcs_clk *VAR_2 = FUNC_2(VAR_0);
 int VAR_3, VAR_4;

 if (FUNC_1(VAR_2->reg) & (1 << 30)) {
  VAR_3 = 1;
  VAR_4 = 256;
 } else {
  VAR_3 = 2;
  VAR_4 = 512;
 }

 return FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4);
}
