
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct dma_slave_config {int dummy; } ;
struct mdc_chan {TYPE_1__ vc; struct dma_slave_config config; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct mdc_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_0,
       struct dma_slave_config *VAR_1)
{
 struct mdc_chan *VAR_2 = FUNC_2(VAR_0);
 unsigned long VAR_3;

 FUNC_0(&VAR_2->vc.lock, VAR_3);
 VAR_2->config = *VAR_1;
 FUNC_1(&VAR_2->vc.lock, VAR_3);

 return 0;
}
