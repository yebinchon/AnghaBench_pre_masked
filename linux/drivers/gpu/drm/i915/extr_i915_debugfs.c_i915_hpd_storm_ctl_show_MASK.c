
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct drm_i915_private* private; } ;
struct i915_hotplug {int reenable_work; int hpd_storm_threshold; int hotplug_work; int dig_port_work; } ;
struct drm_i915_private {struct i915_hotplug hotplug; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct seq_file*,char*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_0->private;
 struct i915_hotplug *VAR_3 = &VAR_2->hotplug;




 FUNC_3(VAR_2);
 FUNC_2(&VAR_2->hotplug.dig_port_work);
 FUNC_1(&VAR_2->hotplug.hotplug_work);

 FUNC_4(VAR_0, "Threshold: %d\n", VAR_3->hpd_storm_threshold);
 FUNC_4(VAR_0, "Detected: %s\n",
     FUNC_5(FUNC_0(&VAR_3->reenable_work)));

 return 0;
}
