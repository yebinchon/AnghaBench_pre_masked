
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct drm_i915_private* private; } ;
struct TYPE_2__ {int hpd_short_storm_enabled; } ;
struct drm_i915_private {TYPE_1__ hotplug; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_0->private;

 FUNC_0(VAR_0, "Enabled: %s\n",
     FUNC_1(VAR_2->hotplug.hpd_short_storm_enabled));

 return 0;
}
