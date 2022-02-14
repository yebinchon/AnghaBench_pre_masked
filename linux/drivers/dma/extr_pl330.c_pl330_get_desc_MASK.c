
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct pl330_dmac {int pcfg; int pool_lock; int desc_pool; } ;
struct TYPE_6__ {scalar_t__ cookie; } ;
struct TYPE_5__ {int * pcfg; } ;
struct dma_pl330_desc {TYPE_2__ txd; TYPE_1__ rqcfg; int peri; struct dma_pl330_chan* pchan; } ;
struct TYPE_7__ {int chan_id; int * private; } ;
struct dma_pl330_chan {TYPE_3__ chan; struct pl330_dmac* dmac; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 struct dma_pl330_desc* FUNC_7 (int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static struct dma_pl330_desc *FUNC_8(struct dma_pl330_chan *VAR_3)
{
 struct pl330_dmac *VAR_4 = VAR_3->dmac;
 u8 *VAR_5 = VAR_3->chan.private;
 struct dma_pl330_desc *VAR_6;


 VAR_6 = FUNC_7(&VAR_4->desc_pool, &VAR_4->pool_lock);


 if (!VAR_6) {
  FUNC_0(VAR_1);
  FUNC_1(VAR_2);

  if (!FUNC_3(&VAR_2, &VAR_1, VAR_0, 1))
   return ((void*)0);

  VAR_6 = FUNC_7(&VAR_2, &VAR_1);
  FUNC_2(!VAR_6 || !FUNC_6(&VAR_2));
 }


 VAR_6->pchan = VAR_3;
 VAR_6->txd.cookie = 0;
 FUNC_4(&VAR_6->txd);

 VAR_6->peri = VAR_5 ? VAR_3->chan.chan_id : 0;
 VAR_6->rqcfg.pcfg = &VAR_3->dmac->pcfg;

 FUNC_5(&VAR_6->txd, &VAR_3->chan);

 return VAR_6;
}
