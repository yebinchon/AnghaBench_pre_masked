
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxad_chan {int prio; int drcmr; int * desc_pool; int vc; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct pxad_chan* FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dma_chan *VAR_2)
{
 struct pxad_chan *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(&VAR_3->vc);
 FUNC_0(VAR_3->desc_pool);
 VAR_3->desc_pool = ((void*)0);

 VAR_3->drcmr = VAR_1;
 VAR_3->prio = VAR_0;
}
