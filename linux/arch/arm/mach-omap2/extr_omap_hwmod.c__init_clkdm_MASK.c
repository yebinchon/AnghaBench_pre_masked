
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hwmod {int clkdm_name; int name; int clkdm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct omap_hwmod *VAR_0)
{
 if (!VAR_0->clkdm_name) {
  FUNC_1("omap_hwmod: %s: missing clockdomain\n", VAR_0->name);
  return 0;
 }

 VAR_0->clkdm = FUNC_0(VAR_0->clkdm_name);
 if (!VAR_0->clkdm) {
  FUNC_2("omap_hwmod: %s: could not associate to clkdm %s\n",
   VAR_0->name, VAR_0->clkdm_name);
  return 0;
 }

 FUNC_1("omap_hwmod: %s: associated to clkdm %s\n",
  VAR_0->name, VAR_0->clkdm_name);

 return 0;
}
