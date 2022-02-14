
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int private; } ;
struct intel_uncore {int dummy; } ;
struct TYPE_2__ {int bit_6_swizzle_y; int bit_6_swizzle_x; } ;
struct drm_i915_private {int quirks; int runtime_pm; TYPE_1__ mm; struct intel_uncore uncore; } ;
typedef int intel_wakeref_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct intel_uncore*,int ) ;
 int FUNC_5 (struct intel_uncore*,int ) ;
 struct drm_i915_private* FUNC_6 (int ) ;
 int FUNC_7 (struct seq_file*,char*,int ) ;
 int FUNC_8 (struct seq_file*,char*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct seq_file *VAR_12, void *VAR_13)
{
 struct drm_i915_private *VAR_14 = FUNC_6(VAR_12->private);
 struct intel_uncore *VAR_15 = &VAR_14->uncore;
 intel_wakeref_t VAR_16;

 VAR_16 = FUNC_2(&VAR_14->runtime_pm);

 FUNC_7(VAR_12, "bit6 swizzle for X-tiling = %s\n",
     FUNC_9(VAR_14->mm.bit_6_swizzle_x));
 FUNC_7(VAR_12, "bit6 swizzle for Y-tiling = %s\n",
     FUNC_9(VAR_14->mm.bit_6_swizzle_y));

 if (FUNC_1(VAR_14, 3, 4)) {
  FUNC_7(VAR_12, "DDC = 0x%08x\n",
      FUNC_4(VAR_15, VAR_3));
  FUNC_7(VAR_12, "DDC2 = 0x%08x\n",
      FUNC_4(VAR_15, VAR_4));
  FUNC_7(VAR_12, "C0DRB3 = 0x%04x\n",
      FUNC_5(VAR_15, VAR_1));
  FUNC_7(VAR_12, "C1DRB3 = 0x%04x\n",
      FUNC_5(VAR_15, VAR_2));
 } else if (FUNC_0(VAR_14) >= 6) {
  FUNC_7(VAR_12, "MAD_DIMM_C0 = 0x%08x\n",
      FUNC_4(VAR_15, VAR_7));
  FUNC_7(VAR_12, "MAD_DIMM_C1 = 0x%08x\n",
      FUNC_4(VAR_15, VAR_8));
  FUNC_7(VAR_12, "MAD_DIMM_C2 = 0x%08x\n",
      FUNC_4(VAR_15, VAR_9));
  FUNC_7(VAR_12, "TILECTL = 0x%08x\n",
      FUNC_4(VAR_15, VAR_11));
  if (FUNC_0(VAR_14) >= 8)
   FUNC_7(VAR_12, "GAMTARBMODE = 0x%08x\n",
       FUNC_4(VAR_15, VAR_6));
  else
   FUNC_7(VAR_12, "ARB_MODE = 0x%08x\n",
       FUNC_4(VAR_15, VAR_0));
  FUNC_7(VAR_12, "DISP_ARB_CTL = 0x%08x\n",
      FUNC_4(VAR_15, VAR_5));
 }

 if (VAR_14->quirks & VAR_10)
  FUNC_8(VAR_12, "L-shaped memory detected\n");

 FUNC_3(&VAR_14->runtime_pm, VAR_16);

 return 0;
}
