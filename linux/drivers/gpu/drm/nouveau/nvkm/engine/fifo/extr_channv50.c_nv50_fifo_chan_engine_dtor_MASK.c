
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_fifo_chan {int dummy; } ;
struct TYPE_2__ {size_t index; } ;
struct nvkm_engine {TYPE_1__ subdev; } ;
struct nv50_fifo_chan {int * engn; } ;


 struct nv50_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct nvkm_fifo_chan *VAR_0,
      struct nvkm_engine *VAR_1)
{
 struct nv50_fifo_chan *VAR_2 = FUNC_0(VAR_0);
 FUNC_1(&VAR_2->engn[VAR_1->subdev.index]);
}
