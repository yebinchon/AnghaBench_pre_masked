
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct clk_omap_reg {int dummy; } ;
struct clk_hw_omap {int dummy; } ;
struct TYPE_2__ {int (* clk_readl ) (struct clk_omap_reg*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (struct clk_omap_reg*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct clk_hw_omap *VAR_2,
    struct clk_omap_reg *VAR_3,
    u32 VAR_4, u8 VAR_5, const char *VAR_6)
{
 int VAR_7 = 0, VAR_8 = 0;

 VAR_8 = (VAR_5) ? 0 : VAR_4;


 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if ((VAR_1->clk_readl(VAR_3) & VAR_4) == VAR_8)
   break;
  FUNC_3(1);
 }

 if (VAR_7 < VAR_0)
  FUNC_0("omap clock: module associated with clock %s ready after %d loops\n",
    VAR_6, VAR_7);
 else
  FUNC_1("omap clock: module associated with clock %s didn't enable in %d tries\n",
         VAR_6, VAR_0);

 return (VAR_7 < VAR_0) ? 1 : 0;
}
