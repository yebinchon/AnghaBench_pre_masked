
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rq; } ;
struct i915_execbuffer {scalar_t__ lut_size; int buckets; TYPE_1__ reloc_cache; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(const struct i915_execbuffer *VAR_0)
{
 FUNC_0(VAR_0->reloc_cache.rq);

 if (VAR_0->lut_size > 0)
  FUNC_1(VAR_0->buckets);
}
