
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int lock; } ;
struct i915_wa_list {unsigned int count; int name; struct i915_wa* list; } ;
struct i915_wa {int reg; int val; int mask; } ;
typedef enum forcewake_domains { ____Placeholder_forcewake_domains } forcewake_domains ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct intel_uncore*,int) ;
 int FUNC_2 (struct intel_uncore*,int) ;
 int FUNC_3 (struct intel_uncore*,int ) ;
 int FUNC_4 (struct intel_uncore*,int ,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct i915_wa*,int ,int ,char*) ;
 int FUNC_8 (struct intel_uncore*,struct i915_wa_list const*) ;

__attribute__((used)) static void
FUNC_9(struct intel_uncore *VAR_1, const struct i915_wa_list *VAR_2)
{
 enum forcewake_domains VAR_3;
 unsigned long VAR_4;
 struct i915_wa *VAR_5;
 unsigned int VAR_6;

 if (!VAR_2->count)
  return;

 VAR_3 = FUNC_8(VAR_1, VAR_2);

 FUNC_5(&VAR_1->lock, VAR_4);
 FUNC_1(VAR_1, VAR_3);

 for (VAR_6 = 0, VAR_5 = VAR_2->list; VAR_6 < VAR_2->count; VAR_6++, VAR_5++) {
  FUNC_4(VAR_1, VAR_5->reg, VAR_5->mask, VAR_5->val);
  if (FUNC_0(VAR_0))
   FUNC_7(VAR_5,
      FUNC_3(VAR_1, VAR_5->reg),
      VAR_2->name, "application");
 }

 FUNC_2(VAR_1, VAR_3);
 FUNC_6(&VAR_1->lock, VAR_4);
}
