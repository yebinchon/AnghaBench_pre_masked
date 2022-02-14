
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * shadow_va; int * obj; } ;
struct intel_shadow_wa_ctx {TYPE_1__ indirect_ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct intel_shadow_wa_ctx *VAR_0)
{
 if (!VAR_0->indirect_ctx.obj)
  return;

 FUNC_1(VAR_0->indirect_ctx.obj);
 FUNC_0(VAR_0->indirect_ctx.obj);

 VAR_0->indirect_ctx.obj = ((void*)0);
 VAR_0->indirect_ctx.shadow_va = ((void*)0);
}
