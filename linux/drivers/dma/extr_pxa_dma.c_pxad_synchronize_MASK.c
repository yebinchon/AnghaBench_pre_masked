
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxad_chan {int vc; int wq_state; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct pxad_chan*) ;
 struct pxad_chan* FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct dma_chan *VAR_0)
{
 struct pxad_chan *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1->wq_state, !FUNC_0(VAR_1));
 FUNC_2(&VAR_1->vc);
}
