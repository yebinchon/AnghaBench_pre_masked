
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i915_wa_list {int count; struct i915_wa* list; } ;
struct i915_wa {int val; int reg; } ;
struct i915_request {TYPE_1__* engine; } ;
struct TYPE_2__ {int (* emit_flush ) (struct i915_request*,int ) ;struct i915_wa_list ctx_wa_list; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct i915_request*,int *) ;
 int * FUNC_5 (struct i915_request*,int) ;
 int FUNC_6 (struct i915_request*,int ) ;
 int FUNC_7 (struct i915_request*,int ) ;

int FUNC_8(struct i915_request *VAR_2)
{
 struct i915_wa_list *VAR_3 = &VAR_2->engine->ctx_wa_list;
 struct i915_wa *VAR_4;
 unsigned int VAR_5;
 u32 *VAR_6;
 int VAR_7;

 if (VAR_3->count == 0)
  return 0;

 VAR_7 = VAR_2->engine->emit_flush(VAR_2, VAR_0);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_5(VAR_2, (VAR_3->count * 2 + 2));
 if (FUNC_0(VAR_6))
  return FUNC_2(VAR_6);

 *VAR_6++ = FUNC_1(VAR_3->count);
 for (VAR_5 = 0, VAR_4 = VAR_3->list; VAR_5 < VAR_3->count; VAR_5++, VAR_4++) {
  *VAR_6++ = FUNC_3(VAR_4->reg);
  *VAR_6++ = VAR_4->val;
 }
 *VAR_6++ = VAR_1;

 FUNC_4(VAR_2, VAR_6);

 VAR_7 = VAR_2->engine->emit_flush(VAR_2, VAR_0);
 if (VAR_7)
  return VAR_7;

 return 0;
}
