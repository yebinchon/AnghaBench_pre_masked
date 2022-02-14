
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hwmod_rst_info {int dummy; } ;
struct omap_hwmod {int dummy; } ;
struct TYPE_2__ {int (* is_hardreset_asserted ) (struct omap_hwmod*,struct omap_hwmod_rst_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct omap_hwmod*,char const*,struct omap_hwmod_rst_info*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (struct omap_hwmod*,struct omap_hwmod_rst_info*) ;

__attribute__((used)) static int FUNC_2(struct omap_hwmod *VAR_3, const char *VAR_4)
{
 struct omap_hwmod_rst_info VAR_5;
 int VAR_6 = -VAR_0;

 if (!VAR_3)
  return -VAR_0;

 if (!VAR_2.is_hardreset_asserted)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_3, VAR_4, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 return VAR_2.is_hardreset_asserted(VAR_3, &VAR_5);
}
