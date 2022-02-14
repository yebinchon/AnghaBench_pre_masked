
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_execbuffer {unsigned int buffer_count; TYPE_1__* args; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(const struct i915_execbuffer *VAR_1)
{
 if (VAR_1->args->flags & VAR_0)
  return 0;
 else
  return VAR_1->buffer_count - 1;
}
