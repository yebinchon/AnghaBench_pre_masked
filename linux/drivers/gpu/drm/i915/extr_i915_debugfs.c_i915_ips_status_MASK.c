
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int private; } ;
struct drm_i915_private {int runtime_pm; } ;
typedef int intel_wakeref_t ;
struct TYPE_2__ {int enable_ips; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 int FUNC_6 (struct seq_file*,char*,int ) ;
 int FUNC_7 (struct seq_file*,char*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct seq_file *VAR_4, void *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_5(VAR_4->private);
 intel_wakeref_t VAR_7;

 if (!FUNC_0(VAR_6))
  return -VAR_0;

 VAR_7 = FUNC_3(&VAR_6->runtime_pm);

 FUNC_6(VAR_4, "Enabled by kernel parameter: %s\n",
     FUNC_8(VAR_3.enable_ips));

 if (FUNC_2(VAR_6) >= 8) {
  FUNC_7(VAR_4, "Currently: unknown\n");
 } else {
  if (FUNC_1(VAR_1) & VAR_2)
   FUNC_7(VAR_4, "Currently: enabled\n");
  else
   FUNC_7(VAR_4, "Currently: disabled\n");
 }

 FUNC_4(&VAR_6->runtime_pm, VAR_7);

 return 0;
}
