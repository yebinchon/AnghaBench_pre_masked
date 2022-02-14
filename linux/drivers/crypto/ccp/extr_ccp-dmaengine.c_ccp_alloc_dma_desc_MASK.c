
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long flags; int tx_submit; } ;
struct ccp_dma_desc {int status; int active; int pending; TYPE_1__* ccp; TYPE_2__ tx_desc; } ;
struct ccp_dma_chan {TYPE_1__* ccp; int dma_chan; } ;
struct TYPE_3__ {int dma_desc_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 struct ccp_dma_desc* FUNC_2 (int ,int ) ;

__attribute__((used)) static struct ccp_dma_desc *FUNC_3(struct ccp_dma_chan *VAR_3,
            unsigned long VAR_4)
{
 struct ccp_dma_desc *VAR_5;

 VAR_5 = FUNC_2(VAR_3->ccp->dma_desc_cache, VAR_1);
 if (!VAR_5)
  return ((void*)0);

 FUNC_1(&VAR_5->tx_desc, &VAR_3->dma_chan);
 VAR_5->tx_desc.flags = VAR_4;
 VAR_5->tx_desc.tx_submit = VAR_2;
 VAR_5->ccp = VAR_3->ccp;
 FUNC_0(&VAR_5->pending);
 FUNC_0(&VAR_5->active);
 VAR_5->status = VAR_0;

 return VAR_5;
}
