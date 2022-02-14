
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vmw_private {int bdev; } ;
struct vmw_otable_batch {size_t num_otables; TYPE_1__* otable_bo; struct vmw_otable* otables; } ;
struct vmw_otable {int size; scalar_t__ enabled; } ;
struct ttm_operation_ctx {int interruptible; int no_wait_gpu; } ;
struct TYPE_9__ {int (* ttm_tt_populate ) (int ,struct ttm_operation_ctx*) ;} ;
struct TYPE_8__ {int ttm; } ;
typedef size_t SVGAOTableType ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ttm_operation_ctx*) ;
 int FUNC_2 (int *,unsigned long,int ,int *,int ,int,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int,int *) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int) ;
 TYPE_3__ VAR_3 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct vmw_private*,size_t,TYPE_1__*,unsigned long,struct vmw_otable*) ;
 int VAR_4 ;
 int FUNC_9 (struct vmw_private*,size_t,struct vmw_otable*) ;

__attribute__((used)) static int FUNC_10(struct vmw_private *VAR_5,
      struct vmw_otable_batch *VAR_6)
{
 unsigned long VAR_7;
 unsigned long VAR_8;
 struct vmw_otable *VAR_9 = VAR_6->otables;
 struct ttm_operation_ctx VAR_10 = {
  .interruptible = 0,
  .no_wait_gpu = 0
 };
 SVGAOTableType VAR_11;
 int VAR_12;

 VAR_8 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_6->num_otables; ++VAR_11) {
  if (!VAR_9[VAR_11].enabled)
   continue;

  VAR_9[VAR_11].size =
   (VAR_9[VAR_11].size + VAR_1 - 1) & VAR_0;
  VAR_8 += VAR_9[VAR_11].size;
 }

 VAR_12 = FUNC_2(&VAR_5->bdev, VAR_8,
       VAR_2,
       &VAR_4,
       0, 0, &VAR_6->otable_bo);

 if (FUNC_6(VAR_12 != 0))
  goto out_no_bo;

 VAR_12 = FUNC_4(VAR_6->otable_bo, 0, 1, ((void*)0));
 FUNC_0(VAR_12 != 0);
 VAR_12 = VAR_3.ttm_tt_populate(VAR_6->otable_bo->ttm, &VAR_10);
 if (FUNC_6(VAR_12 != 0))
  goto out_unreserve;
 VAR_12 = FUNC_7(VAR_6->otable_bo);
 if (FUNC_6(VAR_12 != 0))
  goto out_unreserve;

 FUNC_5(VAR_6->otable_bo);

 VAR_7 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_6->num_otables; ++VAR_11) {
  if (!VAR_6->otables[VAR_11].enabled)
   continue;

  VAR_12 = FUNC_8(VAR_5, VAR_11, VAR_6->otable_bo,
         VAR_7,
         &VAR_9[VAR_11]);
  if (FUNC_6(VAR_12 != 0))
   goto out_no_setup;
  VAR_7 += VAR_9[VAR_11].size;
 }

 return 0;

out_unreserve:
 FUNC_5(VAR_6->otable_bo);
out_no_setup:
 for (VAR_11 = 0; VAR_11 < VAR_6->num_otables; ++VAR_11) {
  if (VAR_6->otables[VAR_11].enabled)
   FUNC_9(VAR_5, VAR_11,
       &VAR_6->otables[VAR_11]);
 }

 FUNC_3(VAR_6->otable_bo);
 VAR_6->otable_bo = ((void*)0);
out_no_bo:
 return VAR_12;
}
