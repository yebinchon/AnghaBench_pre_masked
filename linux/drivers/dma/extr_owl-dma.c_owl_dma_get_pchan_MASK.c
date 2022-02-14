
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owl_dma_vchan {int dummy; } ;
struct owl_dma_pchan {int lock; struct owl_dma_vchan* vchan; } ;
struct owl_dma {int nr_pchans; struct owl_dma_pchan* pchans; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static struct owl_dma_pchan *FUNC_2(struct owl_dma *VAR_0,
            struct owl_dma_vchan *VAR_1)
{
 struct owl_dma_pchan *VAR_2 = ((void*)0);
 unsigned long VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->nr_pchans; VAR_4++) {
  VAR_2 = &VAR_0->pchans[VAR_4];

  FUNC_0(&VAR_2->lock, VAR_3);
  if (!VAR_2->vchan) {
   VAR_2->vchan = VAR_1;
   FUNC_1(&VAR_2->lock, VAR_3);
   break;
  }

  FUNC_1(&VAR_2->lock, VAR_3);
 }

 return VAR_2;
}
