
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_gt {TYPE_1__* i915; } ;
typedef int intel_engine_mask_t ;
struct TYPE_2__ {int gpu_error; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct intel_gt*,int ,int *) ;

__attribute__((used)) static u32 FUNC_2(struct intel_gt *VAR_0, intel_engine_mask_t VAR_1)
{
 u32 VAR_2 = FUNC_0(&VAR_0->i915->gpu_error);

 FUNC_1(VAR_0, VAR_1, ((void*)0));

 return VAR_2;
}
