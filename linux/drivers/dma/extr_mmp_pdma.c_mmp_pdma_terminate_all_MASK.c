
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_pdma_chan {int idle; int desc_lock; int chain_running; int chain_pending; int phy; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmp_pdma_chan*,int *) ;
 int FUNC_2 (struct mmp_pdma_chan*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct mmp_pdma_chan* FUNC_5 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_6(struct dma_chan *VAR_1)
{
 struct mmp_pdma_chan *VAR_2 = FUNC_5(VAR_1);
 unsigned long VAR_3;

 if (!VAR_1)
  return -VAR_0;

 FUNC_0(VAR_2->phy);
 FUNC_2(VAR_2);
 FUNC_3(&VAR_2->desc_lock, VAR_3);
 FUNC_1(VAR_2, &VAR_2->chain_pending);
 FUNC_1(VAR_2, &VAR_2->chain_running);
 FUNC_4(&VAR_2->desc_lock, VAR_3);
 VAR_2->idle = 1;

 return 0;
}
