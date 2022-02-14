
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seqno; } ;
struct i915_request {TYPE_1__ fence; } ;


 int FUNC_0 (struct i915_request const*) ;
 scalar_t__ FUNC_1 (struct i915_request const*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline bool FUNC_3(const struct i915_request *VAR_0)
{
 if (FUNC_1(VAR_0))
  return 1;

 return FUNC_2(FUNC_0(VAR_0), VAR_0->fence.seqno);
}
