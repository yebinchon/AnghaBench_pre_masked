
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_resv {int dummy; } ;
struct dma_fence {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (struct dma_resv*,int *) ;
 struct dma_fence* FUNC_2 (struct dma_resv*) ;
 int FUNC_3 (struct dma_resv*,struct dma_fence**,unsigned int*,struct dma_fence***) ;
 scalar_t__ FUNC_4 (struct dma_resv*,int) ;
 scalar_t__ FUNC_5 (struct dma_resv*) ;
 int FUNC_6 (struct dma_resv*) ;
 long FUNC_7 (struct dma_fence*,unsigned int,long) ;
 int FUNC_8 (struct dma_fence**) ;

__attribute__((used)) static long
FUNC_9(struct dma_resv *VAR_1,
     unsigned int VAR_2,
     long VAR_3)
{
 struct dma_fence *VAR_4;
 bool VAR_5 = 0;

 if (VAR_2 & VAR_0) {
  struct dma_fence **VAR_6;
  unsigned int VAR_7, VAR_8;
  int VAR_9;

  VAR_9 = FUNC_3(VAR_1,
       &VAR_4, &VAR_7, &VAR_6);
  if (VAR_9)
   return VAR_9;

  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   VAR_3 = FUNC_7(VAR_6[VAR_8],
            VAR_2, VAR_3);
   if (VAR_3 < 0)
    break;

   FUNC_0(VAR_6[VAR_8]);
  }

  for (; VAR_8 < VAR_7; VAR_8++)
   FUNC_0(VAR_6[VAR_8]);
  FUNC_8(VAR_6);
  VAR_5 = VAR_7 && VAR_3 >= 0;
 } else {
  VAR_4 = FUNC_2(VAR_1);
 }

 if (VAR_4 && VAR_3 >= 0)
  VAR_3 = FUNC_7(VAR_4, VAR_2, VAR_3);

 FUNC_0(VAR_4);





 if (VAR_5 && FUNC_5(VAR_1)) {
  if (FUNC_4(VAR_1, 1))
   FUNC_1(VAR_1, ((void*)0));
  FUNC_6(VAR_1);
 }

 return VAR_3;
}
