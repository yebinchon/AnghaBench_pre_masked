
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct omap_hwmod_rst_info {int dummy; } ;
struct omap_hwmod {TYPE_2__* clkdm; int name; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_6__ {int (* deassert_hardreset ) (struct omap_hwmod*,struct omap_hwmod_rst_info*) ;int (* disable_module ) (struct omap_hwmod*) ;int (* enable_module ) (struct omap_hwmod*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ,int ,int) ;
 int FUNC_1 (struct omap_hwmod*) ;
 int FUNC_2 (struct omap_hwmod*) ;
 int FUNC_3 (struct omap_hwmod*,char const*,struct omap_hwmod_rst_info*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,struct omap_hwmod*) ;
 int FUNC_7 (TYPE_2__*,struct omap_hwmod*) ;
 int FUNC_8 (char*,int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_9 (struct omap_hwmod*) ;
 int FUNC_10 (struct omap_hwmod*,struct omap_hwmod_rst_info*) ;
 int FUNC_11 (struct omap_hwmod*) ;

__attribute__((used)) static int FUNC_12(struct omap_hwmod *VAR_4, const char *VAR_5)
{
 struct omap_hwmod_rst_info VAR_6;
 int VAR_7 = -VAR_1;

 if (!VAR_4)
  return -VAR_1;

 if (!VAR_3.deassert_hardreset)
  return -VAR_2;

 VAR_7 = FUNC_3(VAR_4, VAR_5, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_4->clkdm) {





  FUNC_5(VAR_4->clkdm);
  VAR_7 = FUNC_7(VAR_4->clkdm, VAR_4);
  if (VAR_7) {
   FUNC_0(1, "omap_hwmod: %s: could not enable clockdomain %s: %d\n",
        VAR_4->name, VAR_4->clkdm->name, VAR_7);
   return VAR_7;
  }
 }

 FUNC_2(VAR_4);
 if (VAR_3.enable_module)
  VAR_3.enable_module(VAR_4);

 VAR_7 = VAR_3.deassert_hardreset(VAR_4, &VAR_6);

 if (VAR_3.disable_module)
  VAR_3.disable_module(VAR_4);
 FUNC_1(VAR_4);

 if (VAR_7 == -VAR_0)
  FUNC_8("omap_hwmod: %s: failed to hardreset\n", VAR_4->name);

 if (VAR_4->clkdm) {




  FUNC_4(VAR_4->clkdm);

  FUNC_6(VAR_4->clkdm, VAR_4);
 }

 return VAR_7;
}
