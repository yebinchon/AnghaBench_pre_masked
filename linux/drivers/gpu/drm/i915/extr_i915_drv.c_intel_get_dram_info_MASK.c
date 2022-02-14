
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dram_info {int is_16gb_dimm; int ranks; int num_channels; int bandwidth_kbps; } ;
struct drm_i915_private {struct dram_info dram_info; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct drm_i915_private *VAR_0)
{
 struct dram_info *VAR_1 = &VAR_0->dram_info;
 int VAR_2;






 VAR_1->is_16gb_dimm = !FUNC_2(VAR_0);

 if (FUNC_1(VAR_0) < 9)
  return;

 if (FUNC_2(VAR_0))
  VAR_2 = FUNC_3(VAR_0);
 else
  VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  return;

 FUNC_0("DRAM bandwidth: %u kBps, channels: %u\n",
        VAR_1->bandwidth_kbps,
        VAR_1->num_channels);

 FUNC_0("DRAM ranks: %u, 16Gb DIMMs: %s\n",
        VAR_1->ranks, FUNC_5(VAR_1->is_16gb_dimm));
}
