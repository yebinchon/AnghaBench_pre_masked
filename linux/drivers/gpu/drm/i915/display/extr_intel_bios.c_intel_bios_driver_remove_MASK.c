
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * deassert_seq; int * config; int * pps; int * data; } ;
struct TYPE_4__ {TYPE_1__ dsi; int * lfp_lvds_vbt_mode; int * sdvo_lvds_vbt_mode; scalar_t__ child_dev_num; int * child_dev; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct drm_i915_private *VAR_0)
{
 FUNC_0(VAR_0->vbt.child_dev);
 VAR_0->vbt.child_dev = ((void*)0);
 VAR_0->vbt.child_dev_num = 0;
 FUNC_0(VAR_0->vbt.sdvo_lvds_vbt_mode);
 VAR_0->vbt.sdvo_lvds_vbt_mode = ((void*)0);
 FUNC_0(VAR_0->vbt.lfp_lvds_vbt_mode);
 VAR_0->vbt.lfp_lvds_vbt_mode = ((void*)0);
 FUNC_0(VAR_0->vbt.dsi.data);
 VAR_0->vbt.dsi.data = ((void*)0);
 FUNC_0(VAR_0->vbt.dsi.pps);
 VAR_0->vbt.dsi.pps = ((void*)0);
 FUNC_0(VAR_0->vbt.dsi.config);
 VAR_0->vbt.dsi.config = ((void*)0);
 FUNC_0(VAR_0->vbt.dsi.deassert_seq);
 VAR_0->vbt.dsi.deassert_seq = ((void*)0);
}
