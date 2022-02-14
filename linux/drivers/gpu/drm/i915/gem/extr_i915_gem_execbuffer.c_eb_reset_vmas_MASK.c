
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_execbuffer {int lut_size; int buckets; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (struct i915_execbuffer const*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(const struct i915_execbuffer *VAR_0)
{
 FUNC_0(VAR_0);
 if (VAR_0->lut_size > 0)
  FUNC_1(VAR_0->buckets, 0,
         sizeof(struct hlist_head) << VAR_0->lut_size);
}
