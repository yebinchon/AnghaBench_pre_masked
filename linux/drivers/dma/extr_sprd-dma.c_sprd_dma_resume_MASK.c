
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct sprd_dma_chn {TYPE_1__ vc; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct sprd_dma_chn*,int) ;
 struct sprd_dma_chn* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_4(struct dma_chan *VAR_0)
{
 struct sprd_dma_chn *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;

 FUNC_0(&VAR_1->vc.lock, VAR_2);
 FUNC_2(VAR_1, 0);
 FUNC_1(&VAR_1->vc.lock, VAR_2);

 return 0;
}
