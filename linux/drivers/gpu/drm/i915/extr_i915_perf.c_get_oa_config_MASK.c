
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_oa_config {int ref_count; } ;
struct TYPE_2__ {int metrics_lock; int metrics_idr; struct i915_oa_config test_config; } ;
struct drm_i915_private {TYPE_1__ perf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct i915_oa_config* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct drm_i915_private *VAR_1,
    int VAR_2,
    struct i915_oa_config **VAR_3)
{
 int VAR_4;

 if (VAR_2 == 1) {
  *VAR_3 = &VAR_1->perf.test_config;
  FUNC_0(&VAR_1->perf.test_config.ref_count);
  return 0;
 }

 VAR_4 = FUNC_2(&VAR_1->perf.metrics_lock);
 if (VAR_4)
  return VAR_4;

 *VAR_3 = FUNC_1(&VAR_1->perf.metrics_idr, VAR_2);
 if (!*VAR_3)
  VAR_4 = -VAR_0;
 else
  FUNC_0(&(*VAR_3)->ref_count);

 FUNC_3(&VAR_1->perf.metrics_lock);

 return VAR_4;
}
