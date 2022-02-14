
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_wa_list {int count; int engine_name; int name; int wa_count; struct i915_wa* list; } ;
struct i915_wa {int dummy; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct i915_wa*) ;
 struct i915_wa* FUNC_3 (struct i915_wa*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct i915_wa_list *VAR_2)
{

 if (!FUNC_1(VAR_2->count, VAR_1)) {
  struct i915_wa *VAR_3 = FUNC_3(VAR_2->list,
            VAR_2->count * sizeof(*VAR_3),
            VAR_0);

  if (VAR_3) {
   FUNC_2(VAR_2->list);
   VAR_2->list = VAR_3;
  }
 }

 if (!VAR_2->count)
  return;

 FUNC_0("Initialized %u %s workarounds on %s\n",
    VAR_2->wa_count, VAR_2->name, VAR_2->engine_name);
}
