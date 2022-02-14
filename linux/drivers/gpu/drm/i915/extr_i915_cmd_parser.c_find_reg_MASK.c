
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_engine_cs {int reg_table_count; struct drm_i915_reg_table* reg_tables; } ;
struct drm_i915_reg_table {int num_regs; int regs; } ;
struct drm_i915_reg_descriptor {int dummy; } ;


 struct drm_i915_reg_descriptor* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static const struct drm_i915_reg_descriptor *
FUNC_1(const struct intel_engine_cs *VAR_0, u32 VAR_1)
{
 const struct drm_i915_reg_table *VAR_2 = VAR_0->reg_tables;
 const struct drm_i915_reg_descriptor *VAR_3 = ((void*)0);
 int VAR_4 = VAR_0->reg_table_count;

 for (; !VAR_3 && (VAR_4 > 0); ++VAR_2, --VAR_4)
  VAR_3 = FUNC_0(VAR_2->regs, VAR_2->num_regs, VAR_1);

 return VAR_3;
}
