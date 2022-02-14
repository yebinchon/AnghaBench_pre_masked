
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ seqno; } ;
struct i915_request {TYPE_1__ fence; } ;


 int FUNC_0 (struct i915_request const*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline bool FUNC_2(const struct i915_request *VAR_0)
{
 return FUNC_1(FUNC_0(VAR_0), VAR_0->fence.seqno - 1);
}
