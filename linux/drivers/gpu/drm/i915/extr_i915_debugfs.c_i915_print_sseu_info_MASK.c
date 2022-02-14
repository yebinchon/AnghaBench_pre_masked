
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sseu_dev_info {scalar_t__ has_eu_pg; scalar_t__ has_subslice_pg; scalar_t__ has_slice_pg; int min_eu_in_pool; int eu_per_subslice; int eu_total; int slice_mask; } ;
struct seq_file {int private; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sseu_dev_info const*) ;
 int FUNC_4 (struct sseu_dev_info const*,int) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 int FUNC_6 (struct seq_file*,char*,char const*,...) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct seq_file *VAR_0, bool VAR_1,
     const struct sseu_dev_info *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_5(VAR_0->private);
 const char *VAR_4 = VAR_1 ? "Available" : "Enabled";
 int VAR_5;

 FUNC_6(VAR_0, "  %s Slice Mask: %04x\n", VAR_4,
     VAR_2->slice_mask);
 FUNC_6(VAR_0, "  %s Slice Total: %u\n", VAR_4,
     FUNC_2(VAR_2->slice_mask));
 FUNC_6(VAR_0, "  %s Subslice Total: %u\n", VAR_4,
     FUNC_3(VAR_2));
 for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_2->slice_mask); VAR_5++) {
  FUNC_6(VAR_0, "  %s Slice%i subslices: %u\n", VAR_4,
      VAR_5, FUNC_4(VAR_2, VAR_5));
 }
 FUNC_6(VAR_0, "  %s EU Total: %u\n", VAR_4,
     VAR_2->eu_total);
 FUNC_6(VAR_0, "  %s EU Per Subslice: %u\n", VAR_4,
     VAR_2->eu_per_subslice);

 if (!VAR_1)
  return;

 FUNC_6(VAR_0, "  Has Pooled EU: %s\n", FUNC_7(FUNC_0(VAR_3)));
 if (FUNC_0(VAR_3))
  FUNC_6(VAR_0, "  Min EU in pool: %u\n", VAR_2->min_eu_in_pool);

 FUNC_6(VAR_0, "  Has Slice Power Gating: %s\n",
     FUNC_7(VAR_2->has_slice_pg));
 FUNC_6(VAR_0, "  Has Subslice Power Gating: %s\n",
     FUNC_7(VAR_2->has_subslice_pg));
 FUNC_6(VAR_0, "  Has EU Power Gating: %s\n",
     FUNC_7(VAR_2->has_eu_pg));
}
