
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_perf_stream {int enabled; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* enable ) (struct i915_perf_stream*) ;} ;


 int FUNC_0 (struct i915_perf_stream*) ;

__attribute__((used)) static void FUNC_1(struct i915_perf_stream *VAR_0)
{
 if (VAR_0->enabled)
  return;


 VAR_0->enabled = 1;

 if (VAR_0->ops->enable)
  VAR_0->ops->enable(VAR_0);
}
