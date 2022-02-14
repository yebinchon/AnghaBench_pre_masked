
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_surface_reg {struct radeon_bo* bo; } ;
struct radeon_device {struct radeon_surface_reg* surface_regs; } ;
struct TYPE_5__ {int start; } ;
struct TYPE_4__ {int resv; } ;
struct TYPE_6__ {int num_pages; TYPE_2__ mem; TYPE_1__ base; } ;
struct radeon_bo {size_t surface_reg; scalar_t__ pin_count; TYPE_3__ tbo; int pitch; int tiling_flags; struct radeon_device* rdev; } ;


 int FUNC_0 (char*,int,struct radeon_bo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*,int,int ,int ,int,int) ;
 int FUNC_3 (TYPE_3__*) ;

int FUNC_4(struct radeon_bo *VAR_3)
{
 struct radeon_device *VAR_4 = VAR_3->rdev;
 struct radeon_surface_reg *VAR_5;
 struct radeon_bo *VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_1(VAR_3->tbo.base.resv);

 if (!VAR_3->tiling_flags)
  return 0;

 if (VAR_3->surface_reg >= 0) {
  VAR_5 = &VAR_4->surface_regs[VAR_3->surface_reg];
  VAR_8 = VAR_3->surface_reg;
  goto out;
 }

 VAR_7 = -1;
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {

  VAR_5 = &VAR_4->surface_regs[VAR_8];
  if (!VAR_5->bo)
   break;

  VAR_6 = VAR_5->bo;
  if (VAR_6->pin_count == 0)
   VAR_7 = VAR_8;
 }


 if (VAR_8 == VAR_2) {
  if (VAR_7 == -1)
   return -VAR_0;

  VAR_5 = &VAR_4->surface_regs[VAR_7];
  VAR_6 = VAR_5->bo;

  FUNC_0("stealing surface reg %d from %p\n", VAR_7, VAR_6);
  FUNC_3(&VAR_6->tbo);
  VAR_6->surface_reg = -1;
  VAR_8 = VAR_7;
 }

 VAR_3->surface_reg = VAR_8;
 VAR_5->bo = VAR_3;

out:
 FUNC_2(VAR_4, VAR_8, VAR_3->tiling_flags, VAR_3->pitch,
          VAR_3->tbo.mem.start << VAR_1,
          VAR_3->tbo.num_pages << VAR_1);
 return 0;
}
