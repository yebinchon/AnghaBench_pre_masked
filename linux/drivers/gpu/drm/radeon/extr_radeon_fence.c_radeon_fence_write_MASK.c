
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_fence_driver {int scratch_reg; int * cpu_addr; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;
struct radeon_device {TYPE_1__ wb; struct radeon_fence_driver* fence_drv; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_0, u32 VAR_1, int VAR_2)
{
 struct radeon_fence_driver *VAR_3 = &VAR_0->fence_drv[VAR_2];
 if (FUNC_2(VAR_0->wb.enabled || !VAR_3->scratch_reg)) {
  if (VAR_3->cpu_addr) {
   *VAR_3->cpu_addr = FUNC_1(VAR_1);
  }
 } else {
  FUNC_0(VAR_3->scratch_reg, VAR_1);
 }
}
