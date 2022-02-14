
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_dmac_xfer_chunk {int node; } ;
struct rcar_dmac_desc_page {int node; struct rcar_dmac_xfer_chunk* chunks; } ;
struct TYPE_2__ {int pages; int chunks_free; } ;
struct rcar_dmac_chan {int lock; TYPE_1__ desc; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct rcar_dmac_chan *VAR_3, gfp_t VAR_4)
{
 struct rcar_dmac_desc_page *VAR_5;
 unsigned long VAR_6;
 FUNC_0(VAR_2);
 unsigned int VAR_7;

 VAR_5 = (void *)FUNC_1(VAR_4);
 if (!VAR_5)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
  struct rcar_dmac_xfer_chunk *VAR_8 = &VAR_5->chunks[VAR_7];

  FUNC_2(&VAR_8->node, &VAR_2);
 }

 FUNC_4(&VAR_3->lock, VAR_6);
 FUNC_3(&VAR_2, &VAR_3->desc.chunks_free);
 FUNC_2(&VAR_5->node, &VAR_3->desc.pages);
 FUNC_5(&VAR_3->lock, VAR_6);

 return 0;
}
