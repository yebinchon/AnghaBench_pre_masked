
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct dma_fence {int dummy; } ;
struct default_wait_cb {int base; int task; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct dma_fence*,int *,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct dma_fence*) ;
 int FUNC_4 (struct dma_fence*,int *) ;
 scalar_t__ FUNC_5 (struct dma_fence**,unsigned int,unsigned int*) ;
 struct default_wait_cb* FUNC_6 (unsigned int,int,int ) ;
 int FUNC_7 (struct default_wait_cb*) ;
 long FUNC_8 (long) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;

signed long
FUNC_11(struct dma_fence **VAR_9, uint32_t VAR_10,
      bool VAR_11, signed long VAR_12, uint32_t *VAR_13)
{
 struct default_wait_cb *VAR_14;
 signed long VAR_15 = VAR_12;
 unsigned VAR_16;

 if (FUNC_0(!VAR_9 || !VAR_10 || VAR_12 < 0))
  return -VAR_0;

 if (VAR_12 == 0) {
  for (VAR_16 = 0; VAR_16 < VAR_10; ++VAR_16)
   if (FUNC_3(VAR_9[VAR_16])) {
    if (VAR_13)
     *VAR_13 = VAR_16;
    return 1;
   }

  return 0;
 }

 VAR_14 = FUNC_6(VAR_10, sizeof(struct default_wait_cb), VAR_3);
 if (VAR_14 == ((void*)0)) {
  VAR_15 = -VAR_1;
  goto err_free_cb;
 }

 for (VAR_16 = 0; VAR_16 < VAR_10; ++VAR_16) {
  struct dma_fence *VAR_17 = VAR_9[VAR_16];

  VAR_14[VAR_16].task = VAR_7;
  if (FUNC_2(VAR_17, &VAR_14[VAR_16].base,
        VAR_8)) {

   if (VAR_13)
    *VAR_13 = VAR_16;
   goto fence_rm_cb;
  }
 }

 while (VAR_15 > 0) {
  if (VAR_11)
   FUNC_9(VAR_4);
  else
   FUNC_9(VAR_6);

  if (FUNC_5(VAR_9, VAR_10, VAR_13))
   break;

  VAR_15 = FUNC_8(VAR_15);

  if (VAR_15 > 0 && VAR_11 && FUNC_10(VAR_7))
   VAR_15 = -VAR_2;
 }

 FUNC_1(VAR_5);

fence_rm_cb:
 while (VAR_16-- > 0)
  FUNC_4(VAR_9[VAR_16], &VAR_14[VAR_16].base);

err_free_cb:
 FUNC_7(VAR_14);

 return VAR_15;
}
