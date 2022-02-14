
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dma_resv {int dummy; } ;
struct dma_fence {int dummy; } ;
struct dma_fence_array {struct dma_fence base; } ;
struct amdgpu_pasid_cb {unsigned int pasid; int cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct dma_fence*,int *) ;
 scalar_t__ FUNC_2 (struct dma_fence*,int *,int (*) (struct dma_fence*,int *)) ;
 struct dma_fence_array* FUNC_3 (unsigned int,struct dma_fence**,int ,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct dma_fence*) ;
 int FUNC_6 (struct dma_fence*,int) ;
 int FUNC_7 (struct dma_resv*,int *,unsigned int*,struct dma_fence***) ;
 int FUNC_8 (struct dma_resv*,int,int,int ) ;
 int FUNC_9 (struct dma_fence**) ;
 struct amdgpu_pasid_cb* FUNC_10 (int,int ) ;

void FUNC_11(struct dma_resv *VAR_2,
          unsigned int VAR_3)
{
 struct dma_fence *VAR_4, **VAR_5;
 struct amdgpu_pasid_cb *VAR_6;
 unsigned VAR_7;
 int VAR_8;

 VAR_8 = FUNC_7(VAR_2, ((void*)0), &VAR_7, &VAR_5);
 if (VAR_8)
  goto fallback;

 if (VAR_7 == 0) {
  FUNC_0(VAR_3);
  return;
 }

 if (VAR_7 == 1) {
  VAR_4 = VAR_5[0];
  FUNC_9(VAR_5);
 } else {
  uint64_t VAR_9 = FUNC_4(1);
  struct dma_fence_array *VAR_10;

  VAR_10 = FUNC_3(VAR_7, VAR_5, VAR_9,
            1, 0);
  if (!VAR_10) {
   FUNC_9(VAR_5);
   goto fallback;
  }
  VAR_4 = &VAR_10->base;
 }

 VAR_6 = FUNC_10(sizeof(*VAR_6), VAR_0);
 if (!VAR_6) {

  FUNC_6(VAR_4, 0);
  FUNC_5(VAR_4);
  FUNC_0(VAR_3);
 } else {
  VAR_6->pasid = VAR_3;
  if (FUNC_2(VAR_4, &VAR_6->cb,
        FUNC_1))
   FUNC_1(VAR_4, &VAR_6->cb);
 }

 return;

fallback:



 FUNC_8(VAR_2, 1, 0,
         VAR_1);
 FUNC_0(VAR_3);
}
