
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_resv_list {unsigned int shared_count; int * shared; } ;
struct dma_resv {int dummy; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_sync {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amdgpu_device*,struct amdgpu_sync*,struct dma_fence*,int) ;
 void* FUNC_1 (struct dma_fence*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*,struct dma_fence*) ;
 struct dma_fence* FUNC_3 (struct dma_resv*) ;
 struct dma_resv_list* FUNC_4 (struct dma_resv*) ;
 int FUNC_5 (struct dma_resv*) ;
 struct dma_fence* FUNC_6 (int ,int ) ;

int FUNC_7(struct amdgpu_device *VAR_4,
       struct amdgpu_sync *VAR_5,
       struct dma_resv *VAR_6,
       void *VAR_7, bool VAR_8)
{
 struct dma_resv_list *VAR_9;
 struct dma_fence *VAR_10;
 void *VAR_11;
 unsigned VAR_12;
 int VAR_13 = 0;

 if (VAR_6 == ((void*)0))
  return -VAR_3;


 VAR_10 = FUNC_3(VAR_6);
 VAR_13 = FUNC_0(VAR_4, VAR_5, VAR_10, 0);

 VAR_9 = FUNC_4(VAR_6);
 if (!VAR_9 || VAR_13)
  return VAR_13;

 for (VAR_12 = 0; VAR_12 < VAR_9->shared_count; ++VAR_12) {
  VAR_10 = FUNC_6(VAR_9->shared[VAR_12],
           FUNC_5(VAR_6));



  VAR_11 = FUNC_1(VAR_10);
  if (VAR_11 == VAR_0 &&
      VAR_7 != VAR_1)
   continue;

  if (FUNC_2(VAR_4, VAR_10)) {



   if ((VAR_7 != VAR_1) &&
       (VAR_11 != VAR_1) &&
       ((VAR_7 == VAR_2) !=
        (VAR_11 == VAR_2)))
    continue;




   if (VAR_7 != VAR_1 &&
       (VAR_11 == VAR_7 || VAR_8))
    continue;
  }

  VAR_13 = FUNC_0(VAR_4, VAR_5, VAR_10, 0);
  if (VAR_13)
   break;
 }
 return VAR_13;
}
