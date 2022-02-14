
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct perf_open_properties {int dummy; } ;
struct TYPE_2__ {int lock; int initialized; } ;
struct drm_i915_private {TYPE_1__ perf; } ;
struct drm_i915_perf_open_param {int flags; int num_properties; int properties_ptr; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct drm_i915_private*,struct drm_i915_perf_open_param*,struct perf_open_properties*,struct drm_file*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_i915_private*,int ,int ,struct perf_open_properties*) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct drm_device *VAR_5, void *VAR_6,
    struct drm_file *VAR_7)
{
 struct drm_i915_private *VAR_8 = VAR_5->dev_private;
 struct drm_i915_perf_open_param *VAR_9 = VAR_6;
 struct perf_open_properties VAR_10;
 u32 VAR_11;
 int VAR_12;

 if (!VAR_8->perf.initialized) {
  FUNC_0("i915 perf interface not available for this system\n");
  return -VAR_1;
 }

 VAR_11 = VAR_3 |
      VAR_4 |
      VAR_2;
 if (VAR_9->flags & ~VAR_11) {
  FUNC_0("Unknown drm_i915_perf_open_param flag\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_4(VAR_8,
           FUNC_5(VAR_9->properties_ptr),
           VAR_9->num_properties,
           &VAR_10);
 if (VAR_12)
  return VAR_12;

 FUNC_2(&VAR_8->perf.lock);
 VAR_12 = FUNC_1(VAR_8, VAR_9, &VAR_10, VAR_7);
 FUNC_3(&VAR_8->perf.lock);

 return VAR_12;
}
