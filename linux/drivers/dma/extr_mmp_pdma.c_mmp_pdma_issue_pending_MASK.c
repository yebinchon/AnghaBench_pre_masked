
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_pdma_chan {int desc_lock; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct mmp_pdma_chan*) ;
 struct mmp_pdma_chan* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_4(struct dma_chan *VAR_0)
{
 struct mmp_pdma_chan *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;

 FUNC_0(&VAR_1->desc_lock, VAR_2);
 FUNC_2(VAR_1);
 FUNC_1(&VAR_1->desc_lock, VAR_2);
}
