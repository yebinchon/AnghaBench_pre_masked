
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_mem_reg {int num_pages; scalar_t__ mem_type; } ;
struct TYPE_4__ {int resv; } ;
struct ttm_buffer_object {scalar_t__ type; TYPE_1__ base; int bdev; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_copy_mem {scalar_t__ offset; struct ttm_mem_reg* mem; struct ttm_buffer_object* bo; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int *,struct dma_fence**) ;
 struct amdgpu_device* FUNC_1 (int ) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_copy_mem*,struct amdgpu_copy_mem*,int,int ,struct dma_fence**) ;
 int FUNC_3 (struct dma_fence*) ;
 int FUNC_4 (struct dma_fence*,int) ;
 int FUNC_5 (struct ttm_buffer_object*,struct dma_fence*,int,struct ttm_mem_reg*) ;
 int FUNC_6 (struct ttm_buffer_object*,struct dma_fence*,int,struct ttm_mem_reg*) ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_7 (struct ttm_buffer_object*) ;

__attribute__((used)) static int FUNC_8(struct ttm_buffer_object *VAR_5,
       bool VAR_6, bool VAR_7,
       struct ttm_mem_reg *VAR_8,
       struct ttm_mem_reg *VAR_9)
{
 struct amdgpu_device *VAR_10 = FUNC_1(VAR_5->bdev);
 struct amdgpu_copy_mem VAR_11, VAR_12;
 struct dma_fence *VAR_13 = ((void*)0);
 int VAR_14;

 VAR_11.bo = VAR_5;
 VAR_12.bo = VAR_5;
 VAR_11.mem = VAR_9;
 VAR_12.mem = VAR_8;
 VAR_11.offset = 0;
 VAR_12.offset = 0;

 VAR_14 = FUNC_2(VAR_10, &VAR_11, &VAR_12,
           VAR_8->num_pages << VAR_2,
           VAR_5->base.resv, &VAR_13);
 if (VAR_14)
  goto error;


 if (VAR_9->mem_type == VAR_3 &&
     (FUNC_7(VAR_5)->flags &
      VAR_0)) {
  struct dma_fence *VAR_15 = ((void*)0);

  VAR_14 = FUNC_0(FUNC_7(VAR_5), VAR_1,
           ((void*)0), &VAR_15);
  if (VAR_14) {
   goto error;
  } else if (VAR_15) {
   FUNC_3(VAR_13);
   VAR_13 = VAR_15;
  }
 }


 if (VAR_5->type == VAR_4)
  VAR_14 = FUNC_5(VAR_5, VAR_13, 1, VAR_8);
 else
  VAR_14 = FUNC_6(VAR_5, VAR_13, VAR_6, VAR_8);
 FUNC_3(VAR_13);
 return VAR_14;

error:
 if (VAR_13)
  FUNC_4(VAR_13, 0);
 FUNC_3(VAR_13);
 return VAR_14;
}
