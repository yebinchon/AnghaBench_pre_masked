
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_engine_cs {scalar_t__ class; TYPE_2__* i915; } ;
struct intel_context {int dummy; } ;
struct i915_perf_stream {int oa_config; } ;
struct TYPE_3__ {struct i915_perf_stream* exclusive_stream; } ;
struct TYPE_4__ {TYPE_1__ perf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct i915_perf_stream*,struct intel_context*,int *,int ) ;

void FUNC_1(struct intel_engine_cs *VAR_1,
       struct intel_context *VAR_2,
       u32 *VAR_3)
{
 struct i915_perf_stream *VAR_4;

 if (VAR_1->class != VAR_0)
  return;

 VAR_4 = VAR_1->i915->perf.exclusive_stream;
 if (VAR_4)
  FUNC_0(VAR_4, VAR_2, VAR_3, VAR_4->oa_config);
}
