
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_perf_stream {struct drm_i915_private* dev_priv; } ;
struct file {struct i915_perf_stream* private_data; } ;
struct TYPE_2__ {int lock; } ;
struct drm_i915_private {TYPE_1__ perf; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int FUNC_0 (struct drm_i915_private*,struct i915_perf_stream*,struct file*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_0, poll_table *VAR_1)
{
 struct i915_perf_stream *VAR_2 = VAR_0->private_data;
 struct drm_i915_private *VAR_3 = VAR_2->dev_priv;
 __poll_t VAR_4;

 FUNC_1(&VAR_3->perf.lock);
 VAR_4 = FUNC_0(VAR_3, VAR_2, VAR_0, VAR_1);
 FUNC_2(&VAR_3->perf.lock);

 return VAR_4;
}
