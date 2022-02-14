
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int initialized; int ops; int sysctl_header; int metrics_idr; } ;
struct drm_i915_private {TYPE_1__ perf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,struct drm_i915_private*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct drm_i915_private *VAR_1)
{
 if (!VAR_1->perf.initialized)
  return;

 FUNC_1(&VAR_1->perf.metrics_idr, VAR_0, VAR_1);
 FUNC_0(&VAR_1->perf.metrics_idr);

 FUNC_3(VAR_1->perf.sysctl_header);

 FUNC_2(&VAR_1->perf.ops, 0, sizeof(VAR_1->perf.ops));

 VAR_1->perf.initialized = 0;
}
