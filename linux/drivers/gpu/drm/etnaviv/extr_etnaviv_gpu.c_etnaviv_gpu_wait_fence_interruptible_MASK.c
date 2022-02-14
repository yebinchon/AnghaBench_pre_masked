
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timespec {int dummy; } ;
struct etnaviv_gpu {int fence_idr; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dma_fence* FUNC_0 (struct dma_fence*) ;
 scalar_t__ FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (struct dma_fence*,int,unsigned long) ;
 unsigned long FUNC_4 (struct timespec*) ;
 struct dma_fence* FUNC_5 (int *,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

int FUNC_8(struct etnaviv_gpu *VAR_3,
 u32 VAR_4, struct timespec *VAR_5)
{
 struct dma_fence *VAR_6;
 int VAR_7;






 FUNC_6();
 VAR_6 = FUNC_5(&VAR_3->fence_idr, VAR_4);
 if (VAR_6)
  VAR_6 = FUNC_0(VAR_6);
 FUNC_7();

 if (!VAR_6)
  return 0;

 if (!VAR_5) {

  VAR_7 = FUNC_1(VAR_6) ? 0 : -VAR_0;
 } else {
  unsigned long VAR_8 = FUNC_4(VAR_5);

  VAR_7 = FUNC_3(VAR_6, 1, VAR_8);
  if (VAR_7 == 0)
   VAR_7 = -VAR_2;
  else if (VAR_7 != -VAR_1)
   VAR_7 = 0;

 }

 FUNC_2(VAR_6);
 return VAR_7;
}
