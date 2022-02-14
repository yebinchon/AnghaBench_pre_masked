
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_wait_cb {int base; int task; } ;
struct radeon_fence {struct radeon_device* rdev; } ;
struct radeon_device {scalar_t__ needs_reset; } ;
struct dma_fence {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct dma_fence*,int *,int ) ;
 int FUNC_2 (struct dma_fence*,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct radeon_fence*) ;
 long FUNC_4 (long) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 struct radeon_fence* FUNC_7 (struct dma_fence*) ;

__attribute__((used)) static signed long FUNC_8(struct dma_fence *VAR_7, bool VAR_8,
          signed long VAR_9)
{
 struct radeon_fence *VAR_10 = FUNC_7(VAR_7);
 struct radeon_device *VAR_11 = VAR_10->rdev;
 struct radeon_wait_cb VAR_12;

 VAR_12.task = VAR_5;

 if (FUNC_1(VAR_7, &VAR_12.base, VAR_6))
  return VAR_9;

 while (VAR_9 > 0) {
  if (VAR_8)
   FUNC_5(VAR_2);
  else
   FUNC_5(VAR_4);





  if (FUNC_3(VAR_10))
   break;

  if (VAR_11->needs_reset) {
   VAR_9 = -VAR_0;
   break;
  }

  VAR_9 = FUNC_4(VAR_9);

  if (VAR_9 > 0 && VAR_8 && FUNC_6(VAR_5))
   VAR_9 = -VAR_1;
 }

 FUNC_0(VAR_3);
 FUNC_2(VAR_7, &VAR_12.base);

 return VAR_9;
}
