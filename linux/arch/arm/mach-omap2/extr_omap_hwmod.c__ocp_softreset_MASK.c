
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct omap_hwmod {scalar_t__ _state; int flags; int name; TYPE_2__* class; int _sysc_cache; } ;
struct TYPE_4__ {TYPE_1__* sysc; } ;
struct TYPE_3__ {int sysc_flags; scalar_t__ srst_udelay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct omap_hwmod*,int *) ;
 int FUNC_1 (struct omap_hwmod*) ;
 int FUNC_2 (struct omap_hwmod*) ;
 int FUNC_3 (struct omap_hwmod*,int *) ;
 int FUNC_4 (struct omap_hwmod*) ;
 int FUNC_5 (int ,struct omap_hwmod*) ;
 int FUNC_6 (char*,int ,...) ;
 int FUNC_7 (char*,int ,...) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct omap_hwmod *VAR_7)
{
 u32 VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;

 if (!VAR_7->class->sysc ||
     !(VAR_7->class->sysc->sysc_flags & VAR_5))
  return -VAR_1;


 if (VAR_7->_state != VAR_6) {
  FUNC_7("omap_hwmod: %s: reset can only be entered from enabled state\n",
   VAR_7->name);
  return -VAR_0;
 }


 if (VAR_7->flags & VAR_3)
  FUNC_2(VAR_7);

 FUNC_6("omap_hwmod: %s: resetting via OCP SOFTRESET\n", VAR_7->name);

 VAR_8 = VAR_7->_sysc_cache;
 VAR_10 = FUNC_3(VAR_7, &VAR_8);
 if (VAR_10)
  goto dis_opt_clks;

 FUNC_5(VAR_8, VAR_7);

 if (VAR_7->class->sysc->srst_udelay)
  FUNC_8(VAR_7->class->sysc->srst_udelay);

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9 == VAR_4) {
  FUNC_7("omap_hwmod: %s: softreset failed (waited %d usec)\n",
   VAR_7->name, VAR_4);
  VAR_10 = -VAR_2;
  goto dis_opt_clks;
 } else {
  FUNC_6("omap_hwmod: %s: softreset in %d usec\n", VAR_7->name, VAR_9);
 }

 VAR_10 = FUNC_0(VAR_7, &VAR_8);
 if (VAR_10)
  goto dis_opt_clks;

 FUNC_5(VAR_8, VAR_7);






dis_opt_clks:
 if (VAR_7->flags & VAR_3)
  FUNC_1(VAR_7);

 return VAR_10;
}
