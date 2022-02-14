
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct igt_spinner {int * seqno; } ;
struct TYPE_2__ {int context; } ;
struct i915_request {TYPE_1__ fence; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32
FUNC_2(const struct igt_spinner *VAR_0, const struct i915_request *VAR_1)
{
 u32 *VAR_2 = VAR_0->seqno + FUNC_1(VAR_1->fence.context);

 return FUNC_0(*VAR_2);
}
