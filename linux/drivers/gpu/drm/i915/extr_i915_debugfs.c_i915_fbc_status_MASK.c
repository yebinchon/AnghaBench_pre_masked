
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int private; } ;
struct intel_fbc {int lock; int no_fbc_reason; } ;
struct drm_i915_private {int runtime_pm; struct intel_fbc fbc; } ;
typedef int intel_wakeref_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct drm_i915_private* FUNC_9 (int ) ;
 int FUNC_10 (struct seq_file*,char*,int ) ;
 int FUNC_11 (struct seq_file*,char*) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct seq_file *VAR_11, void *VAR_12)
{
 struct drm_i915_private *VAR_13 = FUNC_9(VAR_11->private);
 struct intel_fbc *VAR_14 = &VAR_13->fbc;
 intel_wakeref_t VAR_15;

 if (!FUNC_0(VAR_13))
  return -VAR_3;

 VAR_15 = FUNC_5(&VAR_13->runtime_pm);
 FUNC_7(&VAR_14->lock);

 if (FUNC_4(VAR_13))
  FUNC_11(VAR_11, "FBC enabled\n");
 else
  FUNC_10(VAR_11, "FBC disabled: %s\n", VAR_14->no_fbc_reason);

 if (FUNC_4(VAR_13)) {
  u32 VAR_16;

  if (FUNC_2(VAR_13) >= 8)
   VAR_16 = FUNC_1(VAR_10) & VAR_0;
  else if (FUNC_2(VAR_13) >= 7)
   VAR_16 = FUNC_1(VAR_10) & VAR_9;
  else if (FUNC_2(VAR_13) >= 5)
   VAR_16 = FUNC_1(VAR_8) & VAR_7;
  else if (FUNC_3(VAR_13))
   VAR_16 = FUNC_1(VAR_2) & VAR_1;
  else
   VAR_16 = FUNC_1(VAR_4) & (VAR_6 |
       VAR_5);

  FUNC_10(VAR_11, "Compressing: %s\n", FUNC_12(VAR_16));
 }

 FUNC_8(&VAR_14->lock);
 FUNC_6(&VAR_13->runtime_pm, VAR_15);

 return 0;
}
