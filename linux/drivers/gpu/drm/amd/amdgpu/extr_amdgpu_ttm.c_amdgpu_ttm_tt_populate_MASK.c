
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_tt {int page_flags; void* state; int num_pages; int pages; scalar_t__ sg; int bdev; } ;
struct ttm_operation_ctx {int dummy; } ;
struct sg_table {int dummy; } ;
struct TYPE_3__ {int dma_address; } ;
struct amdgpu_ttm_tt {TYPE_1__ ttm; scalar_t__ userptr; } ;
struct amdgpu_device {int dev; scalar_t__ need_swiotlb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct amdgpu_device* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 () ;
 void* VAR_3 ;
 int FUNC_4 (TYPE_1__*,int ,struct ttm_operation_ctx*) ;
 int FUNC_5 (int ,TYPE_1__*,struct ttm_operation_ctx*) ;

__attribute__((used)) static int FUNC_6(struct ttm_tt *VAR_4,
   struct ttm_operation_ctx *VAR_5)
{
 struct amdgpu_device *VAR_6 = FUNC_0(VAR_4->bdev);
 struct amdgpu_ttm_tt *VAR_7 = (void *)VAR_4;
 bool VAR_8 = !!(VAR_4->page_flags & VAR_2);


 if (VAR_7 && VAR_7->userptr) {
  VAR_4->sg = FUNC_2(sizeof(struct sg_table), VAR_1);
  if (!VAR_4->sg)
   return -VAR_0;

  VAR_4->page_flags |= VAR_2;
  VAR_4->state = VAR_3;
  return 0;
 }

 if (VAR_8 && VAR_4->sg) {
  FUNC_1(VAR_4->sg, VAR_4->pages,
       VAR_7->ttm.dma_address,
       VAR_4->num_pages);
  VAR_4->state = VAR_3;
  return 0;
 }
 return FUNC_5(VAR_6->dev, &VAR_7->ttm, VAR_5);
}
