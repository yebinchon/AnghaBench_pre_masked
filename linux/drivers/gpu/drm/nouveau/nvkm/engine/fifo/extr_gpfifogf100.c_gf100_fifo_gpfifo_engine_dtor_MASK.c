
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_fifo_chan {int dummy; } ;
struct TYPE_6__ {size_t index; } ;
struct nvkm_engine {TYPE_3__ subdev; } ;
struct TYPE_4__ {int vmm; } ;
struct gf100_fifo_chan {TYPE_2__* engn; TYPE_1__ base; } ;
struct TYPE_5__ {int inst; int vma; } ;


 struct gf100_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_fifo_chan *VAR_0,
         struct nvkm_engine *VAR_1)
{
 struct gf100_fifo_chan *VAR_2 = FUNC_0(VAR_0);
 FUNC_2(VAR_2->base.vmm, &VAR_2->engn[VAR_1->subdev.index].vma);
 FUNC_1(&VAR_2->engn[VAR_1->subdev.index].inst);
}
