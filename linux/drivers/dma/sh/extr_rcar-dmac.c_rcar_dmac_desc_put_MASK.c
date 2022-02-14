
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_dmac_desc {int node; int chunks; } ;
struct TYPE_2__ {int free; int chunks_free; } ;
struct rcar_dmac_chan {int lock; TYPE_1__ desc; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct rcar_dmac_chan *VAR_0,
          struct rcar_dmac_desc *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->lock, VAR_2);
 FUNC_1(&VAR_1->chunks, &VAR_0->desc.chunks_free);
 FUNC_0(&VAR_1->node, &VAR_0->desc.free);
 FUNC_3(&VAR_0->lock, VAR_2);
}
