
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_execbuffer {TYPE_1__* args; int engine; } ;
struct TYPE_2__ {scalar_t__ batch_len; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(const struct i915_execbuffer *VAR_0)
{
 return FUNC_0(VAR_0->engine) ||
  (FUNC_1(VAR_0->engine) &&
   VAR_0->args->batch_len);
}
