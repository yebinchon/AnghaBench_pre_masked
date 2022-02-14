
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct i915_perf_stream {struct drm_i915_private* dev_priv; } ;
struct file {struct i915_perf_stream* private_data; } ;
struct TYPE_2__ {int lock; } ;
struct drm_i915_private {int drm; TYPE_1__ perf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct i915_perf_stream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct i915_perf_stream *VAR_2 = VAR_1->private_data;
 struct drm_i915_private *VAR_3 = VAR_2->dev_priv;

 FUNC_2(&VAR_3->perf.lock);
 FUNC_1(VAR_2);
 FUNC_3(&VAR_3->perf.lock);


 FUNC_0(&VAR_3->drm);

 return 0;
}
