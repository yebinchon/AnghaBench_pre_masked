
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc440spe_adma_chan {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct ppc440spe_adma_chan*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_1)
{
 struct ppc440spe_adma_chan *VAR_2 = (struct ppc440spe_adma_chan *) VAR_1;

 FUNC_1(&VAR_2->lock, VAR_0);
 FUNC_0(VAR_2);
 FUNC_2(&VAR_2->lock);
}
