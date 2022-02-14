
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int dummy; } ;
struct i915_wa_list {unsigned int count; int name; struct i915_wa* list; } ;
struct i915_wa {int reg; } ;


 int FUNC_0 (struct intel_uncore*,int ) ;
 int FUNC_1 (struct i915_wa*,int ,int ,char const*) ;

__attribute__((used)) static bool FUNC_2(struct intel_uncore *VAR_0,
      const struct i915_wa_list *VAR_1,
      const char *VAR_2)
{
 struct i915_wa *VAR_3;
 unsigned int VAR_4;
 bool VAR_5 = 1;

 for (VAR_4 = 0, VAR_3 = VAR_1->list; VAR_4 < VAR_1->count; VAR_4++, VAR_3++)
  VAR_5 &= FUNC_1(VAR_3,
    FUNC_0(VAR_0, VAR_3->reg),
    VAR_1->name, VAR_2);

 return VAR_5;
}
