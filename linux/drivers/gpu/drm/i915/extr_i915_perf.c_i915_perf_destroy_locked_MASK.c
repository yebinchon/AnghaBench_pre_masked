
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_perf_stream {scalar_t__ ctx; int link; TYPE_1__* ops; scalar_t__ enabled; } ;
struct TYPE_2__ {int (* destroy ) (struct i915_perf_stream*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct i915_perf_stream*) ;
 int FUNC_2 (struct i915_perf_stream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct i915_perf_stream*) ;

__attribute__((used)) static void FUNC_5(struct i915_perf_stream *VAR_0)
{
 if (VAR_0->enabled)
  FUNC_1(VAR_0);

 if (VAR_0->ops->destroy)
  VAR_0->ops->destroy(VAR_0);

 FUNC_3(&VAR_0->link);

 if (VAR_0->ctx)
  FUNC_0(VAR_0->ctx);

 FUNC_2(VAR_0);
}
