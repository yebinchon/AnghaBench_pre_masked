
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rcar_dmac_desc_page {int node; struct rcar_dmac_desc* descs; } ;
struct TYPE_4__ {int tx_submit; } ;
struct rcar_dmac_desc {int node; int chunks; TYPE_2__ async_tx; } ;
struct TYPE_3__ {int pages; int free; } ;
struct rcar_dmac_chan {int lock; TYPE_1__ desc; int chan; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int VAR_3 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct rcar_dmac_chan *VAR_4, gfp_t VAR_5)
{
 struct rcar_dmac_desc_page *VAR_6;
 unsigned long VAR_7;
 FUNC_1(VAR_2);
 unsigned int VAR_8;

 VAR_6 = (void *)FUNC_3(VAR_5);
 if (!VAR_6)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8) {
  struct rcar_dmac_desc *VAR_9 = &VAR_6->descs[VAR_8];

  FUNC_2(&VAR_9->async_tx, &VAR_4->chan);
  VAR_9->async_tx.tx_submit = VAR_3;
  FUNC_0(&VAR_9->chunks);

  FUNC_4(&VAR_9->node, &VAR_2);
 }

 FUNC_6(&VAR_4->lock, VAR_7);
 FUNC_5(&VAR_2, &VAR_4->desc.free);
 FUNC_4(&VAR_6->node, &VAR_4->desc.pages);
 FUNC_7(&VAR_4->lock, VAR_7);

 return 0;
}
