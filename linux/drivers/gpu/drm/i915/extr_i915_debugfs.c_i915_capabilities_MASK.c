
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
struct intel_device_info {int platform; } ;
struct drm_printer {int dummy; } ;
struct drm_i915_private {int caps; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 struct intel_device_info* FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int VAR_0 ;
 struct drm_printer FUNC_4 (struct seq_file*) ;
 int VAR_1 ;
 int FUNC_5 (int *,struct drm_printer*) ;
 int FUNC_6 (struct intel_device_info const*,struct drm_printer*) ;
 int FUNC_7 (int ,struct drm_printer*) ;
 int FUNC_8 (int *,struct drm_printer*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 struct drm_i915_private* FUNC_12 (int ) ;
 int FUNC_13 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_14(struct seq_file *VAR_2, void *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_12(VAR_2->private);
 const struct intel_device_info *VAR_5 = FUNC_1(VAR_4);
 struct drm_printer VAR_6 = FUNC_4(VAR_2);

 FUNC_13(VAR_2, "gen: %d\n", FUNC_0(VAR_4));
 FUNC_13(VAR_2, "platform: %s\n", FUNC_9(VAR_5->platform));
 FUNC_13(VAR_2, "pch: %d\n", FUNC_2(VAR_4));

 FUNC_6(VAR_5, &VAR_6);
 FUNC_7(FUNC_3(VAR_4), &VAR_6);
 FUNC_8(&VAR_4->caps, &VAR_6);

 FUNC_10(VAR_0);
 FUNC_5(&VAR_1, &VAR_6);
 FUNC_11(VAR_0);

 return 0;
}
