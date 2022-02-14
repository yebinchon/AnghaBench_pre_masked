
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_uncore {int dummy; } ;
struct i915_perf_stream {TYPE_1__* dev_priv; } ;
struct TYPE_2__ {struct intel_uncore uncore; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct intel_uncore*,int ,int ) ;
 scalar_t__ FUNC_2 (struct intel_uncore*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct i915_perf_stream *VAR_2)
{
 struct intel_uncore *VAR_3 = &VAR_2->dev_priv->uncore;

 FUNC_1(VAR_3, VAR_0, 0);
 if (FUNC_2(VAR_3,
        VAR_0, VAR_1, 0,
        50))
  FUNC_0("wait for OA to be disabled timed out\n");
}
