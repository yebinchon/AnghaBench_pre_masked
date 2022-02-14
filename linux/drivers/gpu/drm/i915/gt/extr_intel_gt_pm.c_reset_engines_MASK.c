
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_gt {int i915; } ;
struct TYPE_2__ {scalar_t__ gpu_reset_clobbers_display; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct intel_gt*,int ) ;

__attribute__((used)) static bool FUNC_2(struct intel_gt *VAR_1)
{
 if (FUNC_0(VAR_1->i915)->gpu_reset_clobbers_display)
  return 0;

 return FUNC_1(VAR_1, VAR_0) == 0;
}
