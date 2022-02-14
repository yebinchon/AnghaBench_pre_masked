
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regmap; struct clk_hw hw; } ;
struct clk_rcg2 {scalar_t__ cmd_rcgr; TYPE_1__ clkr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,char const*) ;
 char* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ,scalar_t__,int*) ;
 int FUNC_3 (int ,scalar_t__,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct clk_rcg2 *VAR_3)
{
 int VAR_4, VAR_5;
 u32 VAR_6;
 struct clk_hw *VAR_7 = &VAR_3->clkr.hw;
 const char *VAR_8 = FUNC_1(VAR_7);

 VAR_5 = FUNC_3(VAR_3->clkr.regmap, VAR_3->cmd_rcgr + VAR_0,
     VAR_1, VAR_1);
 if (VAR_5)
  return VAR_5;


 for (VAR_4 = 500; VAR_4 > 0; VAR_4--) {
  VAR_5 = FUNC_2(VAR_3->clkr.regmap, VAR_3->cmd_rcgr + VAR_0, &VAR_6);
  if (VAR_5)
   return VAR_5;
  if (!(VAR_6 & VAR_1))
   return 0;
  FUNC_4(1);
 }

 FUNC_0(1, "%s: rcg didn't update its configuration.", VAR_8);
 return -VAR_2;
}
