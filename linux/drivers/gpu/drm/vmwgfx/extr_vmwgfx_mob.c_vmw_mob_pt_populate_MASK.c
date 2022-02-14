
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vmw_private {int bdev; } ;
struct vmw_mob {int num_pages; TYPE_1__* pt_bo; } ;
struct ttm_operation_ctx {int interruptible; int no_wait_gpu; } ;
struct TYPE_8__ {int (* ttm_tt_populate ) (int ,struct ttm_operation_ctx*) ;} ;
struct TYPE_7__ {int ttm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct ttm_operation_ctx*) ;
 int FUNC_2 (int *,int,int ,int *,int ,int,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int,int *) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int) ;
 TYPE_2__ VAR_2 ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct vmw_private *VAR_4,
          struct vmw_mob *VAR_5)
{
 int VAR_6;
 struct ttm_operation_ctx VAR_7 = {
  .interruptible = 0,
  .no_wait_gpu = 0
 };

 FUNC_0(VAR_5->pt_bo != ((void*)0));

 VAR_6 = FUNC_2(&VAR_4->bdev, VAR_5->num_pages * VAR_0,
       VAR_1,
       &VAR_3,
       0, 0, &VAR_5->pt_bo);
 if (FUNC_6(VAR_6 != 0))
  return VAR_6;

 VAR_6 = FUNC_4(VAR_5->pt_bo, 0, 1, ((void*)0));

 FUNC_0(VAR_6 != 0);
 VAR_6 = VAR_2.ttm_tt_populate(VAR_5->pt_bo->ttm, &VAR_7);
 if (FUNC_6(VAR_6 != 0))
  goto out_unreserve;
 VAR_6 = FUNC_7(VAR_5->pt_bo);
 if (FUNC_6(VAR_6 != 0))
  goto out_unreserve;

 FUNC_5(VAR_5->pt_bo);

 return 0;

out_unreserve:
 FUNC_5(VAR_5->pt_bo);
 FUNC_3(VAR_5->pt_bo);
 VAR_5->pt_bo = ((void*)0);

 return VAR_6;
}
