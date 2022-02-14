
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int shadow_gma; } ;
struct TYPE_4__ {int size; int shadow_gma; int obj; scalar_t__ shadow_va; } ;
struct intel_shadow_wa_ctx {TYPE_1__ per_ctx; TYPE_2__ indirect_ctx; } ;
struct i915_vma {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i915_vma*) ;
 int FUNC_1 (struct i915_vma*) ;
 struct i915_vma* FUNC_2 (int ,int *,int ,int ,int ) ;
 int FUNC_3 (struct i915_vma*) ;
 int FUNC_4 (unsigned char*,int ,int ) ;
 int FUNC_5 (struct intel_shadow_wa_ctx*) ;

__attribute__((used)) static int FUNC_6(struct intel_shadow_wa_ctx *VAR_1)
{
 struct i915_vma *VAR_2;
 unsigned char *VAR_3 =
  (unsigned char *)VAR_1->indirect_ctx.shadow_va +
  VAR_1->indirect_ctx.size;

 if (VAR_1->indirect_ctx.size == 0)
  return 0;

 VAR_2 = FUNC_2(VAR_1->indirect_ctx.obj, ((void*)0),
           0, VAR_0, 0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);






 VAR_1->indirect_ctx.shadow_gma = FUNC_3(VAR_2);

 VAR_1->per_ctx.shadow_gma = *((unsigned int *)VAR_3 + 1);
 FUNC_4(VAR_3, 0, VAR_0);

 FUNC_5(VAR_1);
 return 0;
}
