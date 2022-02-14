
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_surface_reg {int * bo; } ;
struct radeon_device {struct radeon_surface_reg* surface_regs; } ;
struct radeon_bo {int surface_reg; struct radeon_device* rdev; } ;


 int FUNC_0 (struct radeon_device*,size_t) ;

__attribute__((used)) static void FUNC_1(struct radeon_bo *VAR_0)
{
 struct radeon_device *VAR_1 = VAR_0->rdev;
 struct radeon_surface_reg *VAR_2;

 if (VAR_0->surface_reg == -1)
  return;

 VAR_2 = &VAR_1->surface_regs[VAR_0->surface_reg];
 FUNC_0(VAR_1, VAR_0->surface_reg);

 VAR_2->bo = ((void*)0);
 VAR_0->surface_reg = -1;
}
