
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_resv {int fence_excl; int fence; int seq; int lock; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(struct dma_resv *VAR_3)
{
 FUNC_2(&VAR_3->lock, &VAR_2);

 FUNC_1(&VAR_3->seq, VAR_1,
   &VAR_0);
 FUNC_0(VAR_3->fence, ((void*)0));
 FUNC_0(VAR_3->fence_excl, ((void*)0));
}
