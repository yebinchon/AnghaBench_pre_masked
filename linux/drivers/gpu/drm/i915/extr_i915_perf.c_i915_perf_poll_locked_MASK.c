
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_perf_stream {scalar_t__ pollin; TYPE_1__* ops; } ;
struct file {int dummy; } ;
struct drm_i915_private {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {int (* poll_wait ) (struct i915_perf_stream*,struct file*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct i915_perf_stream*,struct file*,int *) ;

__attribute__((used)) static __poll_t FUNC_1(struct drm_i915_private *VAR_1,
       struct i915_perf_stream *VAR_2,
       struct file *VAR_3,
       poll_table *VAR_4)
{
 __poll_t VAR_5 = 0;

 VAR_2->ops->poll_wait(VAR_2, VAR_3, VAR_4);







 if (VAR_2->pollin)
  VAR_5 |= VAR_0;

 return VAR_5;
}
