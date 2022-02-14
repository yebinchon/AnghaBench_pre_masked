
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* running; } ;
struct rcar_dmac_chan {int lock; TYPE_2__ desc; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;
struct TYPE_3__ {int cyclic; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_chan*,int ,struct dma_tx_state*) ;
 int FUNC_1 (struct dma_tx_state*,unsigned int) ;
 unsigned int FUNC_2 (struct rcar_dmac_chan*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct rcar_dmac_chan* FUNC_5 (struct dma_chan*) ;

__attribute__((used)) static enum dma_status FUNC_6(struct dma_chan *VAR_1,
        dma_cookie_t VAR_2,
        struct dma_tx_state *VAR_3)
{
 struct rcar_dmac_chan *VAR_4 = FUNC_5(VAR_1);
 enum dma_status VAR_5;
 unsigned long VAR_6;
 unsigned int VAR_7;
 bool VAR_8;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_5 == VAR_0 || !VAR_3)
  return VAR_5;

 FUNC_3(&VAR_4->lock, VAR_6);
 VAR_7 = FUNC_2(VAR_4, VAR_2);
 VAR_8 = VAR_4->desc.running ? VAR_4->desc.running->cyclic : 0;
 FUNC_4(&VAR_4->lock, VAR_6);


 if (!VAR_7 && !VAR_8)
  return VAR_0;

 FUNC_1(VAR_3, VAR_7);

 return VAR_5;
}
