
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int private; } ;
struct TYPE_5__ {int mg_pll_tdc_coldst_bias; int mg_pll_bias; int mg_pll_ssc; int mg_pll_frac_lock; int mg_pll_lf; int mg_pll_div1; int mg_pll_div0; int mg_clktop2_hsclkctl; int mg_clktop2_coreclkctl1; int mg_refclkin_ctl; int cfgcr1; int cfgcr0; int wrpll; int fp1; int fp0; int dpll_md; int dpll; } ;
struct TYPE_6__ {TYPE_2__ hw_state; int crtc_mask; } ;
struct intel_shared_dpll {TYPE_3__ state; int on; int active_mask; TYPE_1__* info; } ;
struct drm_device {int dummy; } ;
struct drm_i915_private {int num_shared_dpll; struct intel_shared_dpll* shared_dplls; struct drm_device drm; } ;
struct TYPE_4__ {int id; int name; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 struct drm_i915_private* FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,...) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_2(VAR_0->private);
 struct drm_device *VAR_3 = &VAR_2->drm;
 int VAR_4;

 FUNC_0(VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_2->num_shared_dpll; VAR_4++) {
  struct intel_shared_dpll *VAR_5 = &VAR_2->shared_dplls[VAR_4];

  FUNC_3(VAR_0, "DPLL%i: %s, id: %i\n", VAR_4, VAR_5->info->name,
      VAR_5->info->id);
  FUNC_3(VAR_0, " crtc_mask: 0x%08x, active: 0x%x, on: %s\n",
      VAR_5->state.crtc_mask, VAR_5->active_mask, FUNC_4(VAR_5->on));
  FUNC_3(VAR_0, " tracked hardware state:\n");
  FUNC_3(VAR_0, " dpll:    0x%08x\n", VAR_5->state.hw_state.dpll);
  FUNC_3(VAR_0, " dpll_md: 0x%08x\n",
      VAR_5->state.hw_state.dpll_md);
  FUNC_3(VAR_0, " fp0:     0x%08x\n", VAR_5->state.hw_state.fp0);
  FUNC_3(VAR_0, " fp1:     0x%08x\n", VAR_5->state.hw_state.fp1);
  FUNC_3(VAR_0, " wrpll:   0x%08x\n", VAR_5->state.hw_state.wrpll);
  FUNC_3(VAR_0, " cfgcr0:  0x%08x\n", VAR_5->state.hw_state.cfgcr0);
  FUNC_3(VAR_0, " cfgcr1:  0x%08x\n", VAR_5->state.hw_state.cfgcr1);
  FUNC_3(VAR_0, " mg_refclkin_ctl:        0x%08x\n",
      VAR_5->state.hw_state.mg_refclkin_ctl);
  FUNC_3(VAR_0, " mg_clktop2_coreclkctl1: 0x%08x\n",
      VAR_5->state.hw_state.mg_clktop2_coreclkctl1);
  FUNC_3(VAR_0, " mg_clktop2_hsclkctl:    0x%08x\n",
      VAR_5->state.hw_state.mg_clktop2_hsclkctl);
  FUNC_3(VAR_0, " mg_pll_div0:  0x%08x\n",
      VAR_5->state.hw_state.mg_pll_div0);
  FUNC_3(VAR_0, " mg_pll_div1:  0x%08x\n",
      VAR_5->state.hw_state.mg_pll_div1);
  FUNC_3(VAR_0, " mg_pll_lf:    0x%08x\n",
      VAR_5->state.hw_state.mg_pll_lf);
  FUNC_3(VAR_0, " mg_pll_frac_lock: 0x%08x\n",
      VAR_5->state.hw_state.mg_pll_frac_lock);
  FUNC_3(VAR_0, " mg_pll_ssc:   0x%08x\n",
      VAR_5->state.hw_state.mg_pll_ssc);
  FUNC_3(VAR_0, " mg_pll_bias:  0x%08x\n",
      VAR_5->state.hw_state.mg_pll_bias);
  FUNC_3(VAR_0, " mg_pll_tdc_coldst_bias: 0x%08x\n",
      VAR_5->state.hw_state.mg_pll_tdc_coldst_bias);
 }
 FUNC_1(VAR_3);

 return 0;
}
