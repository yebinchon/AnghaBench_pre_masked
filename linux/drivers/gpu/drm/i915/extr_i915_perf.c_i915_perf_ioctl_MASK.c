
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_perf_stream {struct drm_i915_private* dev_priv; } ;
struct file {struct i915_perf_stream* private_data; } ;
struct TYPE_2__ {int lock; } ;
struct drm_i915_private {TYPE_1__ perf; } ;


 long FUNC_0 (struct i915_perf_stream*,unsigned int,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static long FUNC_3(struct file *VAR_0,
       unsigned int VAR_1,
       unsigned long VAR_2)
{
 struct i915_perf_stream *VAR_3 = VAR_0->private_data;
 struct drm_i915_private *VAR_4 = VAR_3->dev_priv;
 long VAR_5;

 FUNC_1(&VAR_4->perf.lock);
 VAR_5 = FUNC_0(VAR_3, VAR_1, VAR_2);
 FUNC_2(&VAR_4->perf.lock);

 return VAR_5;
}
