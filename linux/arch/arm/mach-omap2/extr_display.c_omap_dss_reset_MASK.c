
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_hwmod_opt_clk {scalar_t__ _clk; } ;
struct omap_hwmod {int opt_clks_cnt; struct omap_hwmod_opt_clk* opt_clks; TYPE_2__* class; } ;
struct TYPE_4__ {TYPE_1__* sysc; } ;
struct TYPE_3__ {int sysc_flags; int syss_offs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct omap_hwmod*,int ) ;
 int FUNC_5 (int,struct omap_hwmod*,int ) ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

int FUNC_10(struct omap_hwmod *VAR_8)
{
 struct omap_hwmod_opt_clk *VAR_9;
 int VAR_10 = 0;
 int VAR_11, VAR_12;

 if (!(VAR_8->class->sysc->sysc_flags & VAR_6)) {
  FUNC_8("dss_core: hwmod data doesn't contain reset data\n");
  return -VAR_3;
 }

 for (VAR_11 = VAR_8->opt_clks_cnt, VAR_9 = VAR_8->opt_clks; VAR_11 > 0; VAR_11--, VAR_9++)
  if (VAR_9->_clk)
   FUNC_1(VAR_9->_clk);

 FUNC_3();


 if (FUNC_2()) {
  FUNC_5(0x0, VAR_8, VAR_2);
  FUNC_5(0x0, VAR_8, VAR_1);
 }





 FUNC_5(0x0, VAR_8, VAR_0);

 FUNC_6((FUNC_4(VAR_8, VAR_8->class->sysc->syss_offs)
    & VAR_7),
   VAR_5, VAR_10);

 if (VAR_10 == VAR_5)
  FUNC_9("dss_core: waiting for reset to finish failed\n");
 else
  FUNC_7("dss_core: softreset done\n");

 for (VAR_11 = VAR_8->opt_clks_cnt, VAR_9 = VAR_8->opt_clks; VAR_11 > 0; VAR_11--, VAR_9++)
  if (VAR_9->_clk)
   FUNC_0(VAR_9->_clk);

 VAR_12 = (VAR_10 == VAR_5) ? -VAR_4 : 0;

 return VAR_12;
}
