
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regmap; } ;
struct clk_rcg2 {scalar_t__ cmd_rcgr; TYPE_1__ clkr; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (struct clk_hw*) ;
 scalar_t__ FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 struct clk_rcg2* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_3)
{
 struct clk_rcg2 *VAR_4 = FUNC_4(VAR_3);
 const char *VAR_5 = FUNC_0(VAR_3);
 int VAR_6, VAR_7;

 VAR_6 = FUNC_3(VAR_4->clkr.regmap, VAR_4->cmd_rcgr + VAR_0,
     VAR_1, VAR_1);
 if (VAR_6)
  return VAR_6;


 for (VAR_7 = 500; VAR_7 > 0; VAR_7--) {
  if (FUNC_1(VAR_3))
   return 0;

  FUNC_5(1);
 }

 FUNC_2("%s: RCG did not turn on\n", VAR_5);
 return -VAR_2;
}
