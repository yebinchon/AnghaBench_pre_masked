
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_ddb_entry {int end; int start; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct drm_i915_private *VAR_0,
    i915_reg_t VAR_1,
    const struct skl_ddb_entry *VAR_2)
{
 if (VAR_2->end)
  FUNC_0(VAR_1, (VAR_2->end - 1) << 16 | VAR_2->start);
 else
  FUNC_0(VAR_1, 0);
}
