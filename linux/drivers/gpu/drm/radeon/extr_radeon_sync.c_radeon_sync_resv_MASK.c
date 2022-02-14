
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_sync {int dummy; } ;
struct radeon_fence {struct radeon_device* rdev; } ;
struct radeon_device {int dummy; } ;
struct dma_resv_list {unsigned int shared_count; int * shared; } ;
struct dma_resv {int dummy; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (struct dma_fence*,int) ;
 struct dma_fence* FUNC_1 (struct dma_resv*) ;
 struct dma_resv_list* FUNC_2 (struct dma_resv*) ;
 int FUNC_3 (struct dma_resv*) ;
 int FUNC_4 (struct radeon_sync*,struct radeon_fence*) ;
 struct dma_fence* FUNC_5 (int ,int ) ;
 struct radeon_fence* FUNC_6 (struct dma_fence*) ;

int FUNC_7(struct radeon_device *VAR_0,
       struct radeon_sync *VAR_1,
       struct dma_resv *VAR_2,
       bool VAR_3)
{
 struct dma_resv_list *VAR_4;
 struct dma_fence *VAR_5;
 struct radeon_fence *VAR_6;
 unsigned VAR_7;
 int VAR_8 = 0;


 VAR_5 = FUNC_1(VAR_2);
 VAR_6 = VAR_5 ? FUNC_6(VAR_5) : ((void*)0);
 if (VAR_6 && VAR_6->rdev == VAR_0)
  FUNC_4(VAR_1, VAR_6);
 else if (VAR_5)
  VAR_8 = FUNC_0(VAR_5, 1);

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_3 || !VAR_4 || VAR_8)
  return VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_4->shared_count; ++VAR_7) {
  VAR_5 = FUNC_5(VAR_4->shared[VAR_7],
           FUNC_3(VAR_2));
  VAR_6 = FUNC_6(VAR_5);
  if (VAR_6 && VAR_6->rdev == VAR_0)
   FUNC_4(VAR_1, VAR_6);
  else
   VAR_8 = FUNC_0(VAR_5, 1);

  if (VAR_8)
   break;
 }
 return VAR_8;
}
