
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sysfs_metric; } ;
struct TYPE_4__ {int * metrics_kobj; TYPE_1__ test_config; } ;
struct drm_i915_private {TYPE_2__ perf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct drm_i915_private *VAR_0)
{
 if (!VAR_0->perf.metrics_kobj)
  return;

 FUNC_1(VAR_0->perf.metrics_kobj,
      &VAR_0->perf.test_config.sysfs_metric);

 FUNC_0(VAR_0->perf.metrics_kobj);
 VAR_0->perf.metrics_kobj = ((void*)0);
}
