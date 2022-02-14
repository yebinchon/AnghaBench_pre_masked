
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
struct drm_i915_private {int dummy; } ;
typedef int intel_wakeref_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*) ;
 scalar_t__ FUNC_10 (struct drm_i915_private*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct drm_i915_private*,int ) ;
 int FUNC_13 (struct drm_i915_private*,int ,int ) ;
 struct drm_i915_private* FUNC_14 (int ) ;
 int FUNC_15 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_16(struct seq_file *VAR_11, void *VAR_12)
{
 struct drm_i915_private *VAR_13 = FUNC_14(VAR_11->private);
 intel_wakeref_t VAR_14;
 bool VAR_15 = 0;

 VAR_14 = FUNC_12(VAR_13, VAR_8);

 if (FUNC_2(VAR_13) >= 9)
                                                 ;
 else if (FUNC_0(VAR_13))
  VAR_15 = FUNC_1(VAR_9) & VAR_10;
 else if (FUNC_8(VAR_13) || FUNC_4(VAR_13) ||
   FUNC_6(VAR_13) || FUNC_7(VAR_13))
  VAR_15 = FUNC_1(VAR_1) & VAR_2;
 else if (FUNC_5(VAR_13))
  VAR_15 = FUNC_1(VAR_5) & VAR_6;
 else if (FUNC_9(VAR_13))
  VAR_15 = FUNC_1(VAR_0) & VAR_7;
 else if (FUNC_10(VAR_13) || FUNC_3(VAR_13))
  VAR_15 = FUNC_1(VAR_3) & VAR_4;

 FUNC_13(VAR_13, VAR_8, VAR_14);

 FUNC_15(VAR_11, "self-refresh: %s\n", FUNC_11(VAR_15));

 return 0;
}
