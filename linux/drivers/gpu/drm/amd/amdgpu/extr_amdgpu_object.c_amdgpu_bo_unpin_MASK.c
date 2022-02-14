
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_operation_ctx {int member_0; int member_1; } ;
struct amdgpu_device {int dev; } ;
struct TYPE_6__ {int num_placement; } ;
struct TYPE_5__ {int bdev; } ;
struct amdgpu_bo {TYPE_3__ placement; TYPE_2__ tbo; TYPE_1__* placements; scalar_t__ pin_count; } ;
struct TYPE_4__ {int flags; scalar_t__ lpfn; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct amdgpu_bo*) ;
 struct amdgpu_device* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,struct amdgpu_bo*) ;
 int FUNC_4 (int ,char*,struct amdgpu_bo*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,struct ttm_operation_ctx*) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct amdgpu_bo *VAR_1)
{
 struct amdgpu_device *VAR_2 = FUNC_2(VAR_1->tbo.bdev);
 struct ttm_operation_ctx VAR_3 = { 0, 0 };
 int VAR_4, VAR_5;

 if (FUNC_0(!VAR_1->pin_count)) {
  FUNC_4(VAR_2->dev, "%p unpin not necessary\n", VAR_1);
  return 0;
 }
 VAR_1->pin_count--;
 if (VAR_1->pin_count)
  return 0;

 FUNC_1(VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_1->placement.num_placement; VAR_5++) {
  VAR_1->placements[VAR_5].lpfn = 0;
  VAR_1->placements[VAR_5].flags &= ~VAR_0;
 }
 VAR_4 = FUNC_5(&VAR_1->tbo, &VAR_1->placement, &VAR_3);
 if (FUNC_6(VAR_4))
  FUNC_3(VAR_2->dev, "%p validate failed for unpin\n", VAR_1);

 return VAR_4;
}
