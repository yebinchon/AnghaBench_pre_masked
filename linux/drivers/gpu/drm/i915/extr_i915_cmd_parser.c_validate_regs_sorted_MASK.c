
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int reg_table_count; struct drm_i915_reg_table* reg_tables; } ;
struct drm_i915_reg_table {int num_regs; int regs; } ;


 int FUNC_0 (struct intel_engine_cs*,int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct intel_engine_cs *VAR_0)
{
 int VAR_1;
 const struct drm_i915_reg_table *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->reg_table_count; VAR_1++) {
  VAR_2 = &VAR_0->reg_tables[VAR_1];
  if (!FUNC_0(VAR_0, VAR_2->regs, VAR_2->num_regs))
   return 0;
 }

 return 1;
}
