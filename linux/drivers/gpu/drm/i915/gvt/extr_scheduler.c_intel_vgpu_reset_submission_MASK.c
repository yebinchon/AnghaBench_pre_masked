
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu_submission {TYPE_1__* ops; int active; } ;
struct intel_vgpu {struct intel_vgpu_submission submission; } ;
typedef int intel_engine_mask_t ;
struct TYPE_2__ {int (* reset ) (struct intel_vgpu*,int ) ;} ;


 int FUNC_0 (struct intel_vgpu*,int ) ;
 int FUNC_1 (struct intel_vgpu*,int ) ;

void FUNC_2(struct intel_vgpu *VAR_0,
     intel_engine_mask_t VAR_1)
{
 struct intel_vgpu_submission *VAR_2 = &VAR_0->submission;

 if (!VAR_2->active)
  return;

 FUNC_0(VAR_0, VAR_1);
 VAR_2->ops->reset(VAR_0, VAR_1);
}
