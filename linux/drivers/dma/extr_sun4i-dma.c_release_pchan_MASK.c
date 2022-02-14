
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_dma_pchan {int * vchan; } ;
struct sun4i_dma_dev {int lock; int pchans_used; struct sun4i_dma_pchan* pchans; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct sun4i_dma_dev *VAR_0,
     struct sun4i_dma_pchan *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3 = VAR_1 - VAR_0->pchans;

 FUNC_1(&VAR_0->lock, VAR_2);

 VAR_1->vchan = ((void*)0);
 FUNC_0(VAR_3, VAR_0->pchans_used);

 FUNC_2(&VAR_0->lock, VAR_2);
}
