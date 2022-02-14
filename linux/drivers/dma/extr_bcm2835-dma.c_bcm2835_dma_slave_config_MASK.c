
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_slave_config {int dummy; } ;
struct dma_chan {int dummy; } ;
struct bcm2835_chan {struct dma_slave_config cfg; } ;


 struct bcm2835_chan* FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_1(struct dma_chan *VAR_0,
        struct dma_slave_config *VAR_1)
{
 struct bcm2835_chan *VAR_2 = FUNC_0(VAR_0);

 VAR_2->cfg = *VAR_1;

 return 0;
}
