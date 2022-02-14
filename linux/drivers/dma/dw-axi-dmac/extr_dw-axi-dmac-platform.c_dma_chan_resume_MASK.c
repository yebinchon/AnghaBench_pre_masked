
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_chan {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct axi_dma_chan {TYPE_1__ vc; scalar_t__ is_paused; } ;


 int FUNC_0 (struct axi_dma_chan*) ;
 struct axi_dma_chan* FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct dma_chan *VAR_0)
{
 struct axi_dma_chan *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;

 FUNC_2(&VAR_1->vc.lock, VAR_2);

 if (VAR_1->is_paused)
  FUNC_0(VAR_1);

 FUNC_3(&VAR_1->vc.lock, VAR_2);

 return 0;
}
