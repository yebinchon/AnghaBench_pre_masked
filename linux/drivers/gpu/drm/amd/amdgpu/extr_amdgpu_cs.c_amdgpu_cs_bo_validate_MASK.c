
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ttm_operation_ctx {int interruptible; int no_wait_gpu; scalar_t__ bytes_moved; int flags; int resv; } ;
struct amdgpu_device {int gmc; } ;
struct amdgpu_cs_parser {scalar_t__ bytes_moved; scalar_t__ bytes_moved_threshold; scalar_t__ bytes_moved_vis; scalar_t__ bytes_moved_vis_threshold; } ;
struct TYPE_3__ {int resv; } ;
struct TYPE_4__ {TYPE_1__ base; int bdev; } ;
struct amdgpu_bo {int flags; scalar_t__ preferred_domains; scalar_t__ allowed_domains; int placement; TYPE_2__ tbo; scalar_t__ pin_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct amdgpu_bo*) ;
 int FUNC_1 (struct amdgpu_bo*,scalar_t__) ;
 int FUNC_2 (int *) ;
 struct amdgpu_device* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int *,struct ttm_operation_ctx*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_cs_parser *VAR_2,
     struct amdgpu_bo *VAR_3)
{
 struct amdgpu_device *VAR_4 = FUNC_3(VAR_3->tbo.bdev);
 struct ttm_operation_ctx VAR_5 = {
  .interruptible = 1,
  .no_wait_gpu = 0,
  .resv = VAR_3->tbo.base.resv,
  .flags = 0
 };
 uint32_t VAR_6;
 int VAR_7;

 if (VAR_3->pin_count)
  return 0;




 if (VAR_2->bytes_moved < VAR_2->bytes_moved_threshold) {
  if (!FUNC_2(&VAR_4->gmc) &&
      (VAR_3->flags & VAR_0)) {




   if (VAR_2->bytes_moved_vis < VAR_2->bytes_moved_vis_threshold)
    VAR_6 = VAR_3->preferred_domains;
   else
    VAR_6 = VAR_3->allowed_domains;
  } else {
   VAR_6 = VAR_3->preferred_domains;
  }
 } else {
  VAR_6 = VAR_3->allowed_domains;
 }

retry:
 FUNC_1(VAR_3, VAR_6);
 VAR_7 = FUNC_4(&VAR_3->tbo, &VAR_3->placement, &VAR_5);

 VAR_2->bytes_moved += VAR_5.bytes_moved;
 if (!FUNC_2(&VAR_4->gmc) &&
     FUNC_0(VAR_3))
  VAR_2->bytes_moved_vis += VAR_5.bytes_moved;

 if (FUNC_5(VAR_7 == -VAR_1) && VAR_6 != VAR_3->allowed_domains) {
  VAR_6 = VAR_3->allowed_domains;
  goto retry;
 }

 return VAR_7;
}
