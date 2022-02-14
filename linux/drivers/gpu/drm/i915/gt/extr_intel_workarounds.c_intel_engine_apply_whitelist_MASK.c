
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct i915_wa_list {unsigned int count; struct i915_wa* list; } ;
struct intel_engine_cs {int mmio_base; struct intel_uncore* uncore; struct i915_wa_list whitelist; } ;
struct i915_wa {int reg; } ;


 int FUNC_0 (int const,unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intel_uncore*,int ,int ) ;

void FUNC_4(struct intel_engine_cs *VAR_1)
{
 const struct i915_wa_list *VAR_2 = &VAR_1->whitelist;
 struct intel_uncore *VAR_3 = VAR_1->uncore;
 const u32 VAR_4 = VAR_1->mmio_base;
 struct i915_wa *VAR_5;
 unsigned int VAR_6;

 if (!VAR_2->count)
  return;

 for (VAR_6 = 0, VAR_5 = VAR_2->list; VAR_6 < VAR_2->count; VAR_6++, VAR_5++)
  FUNC_3(VAR_3,
       FUNC_0(VAR_4, VAR_6),
       FUNC_2(VAR_5->reg));


 for (; VAR_6 < VAR_0; VAR_6++)
  FUNC_3(VAR_3,
       FUNC_0(VAR_4, VAR_6),
       FUNC_2(FUNC_1(VAR_4)));
}
