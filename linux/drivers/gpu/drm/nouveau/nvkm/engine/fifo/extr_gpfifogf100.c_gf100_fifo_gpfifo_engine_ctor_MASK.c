
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nvkm_object {int dummy; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct TYPE_6__ {int index; } ;
struct nvkm_engine {TYPE_1__ subdev; } ;
struct TYPE_7__ {int vmm; } ;
struct gf100_fifo_chan {TYPE_3__* engn; TYPE_2__ base; } ;
struct TYPE_9__ {int size; } ;
struct TYPE_8__ {int vma; TYPE_4__* inst; } ;


 struct gf100_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;
 int FUNC_1 (struct nvkm_engine*) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ,int *,int ) ;
 int FUNC_3 (struct nvkm_object*,int *,int ,TYPE_4__**) ;
 int FUNC_4 (int ,int,int ,int *) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_fifo_chan *VAR_0,
         struct nvkm_engine *VAR_1,
         struct nvkm_object *VAR_2)
{
 struct gf100_fifo_chan *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = VAR_1->subdev.index;
 int VAR_5;

 if (!FUNC_1(VAR_1))
  return 0;

 VAR_5 = FUNC_3(VAR_2, ((void*)0), 0, &VAR_3->engn[VAR_4].inst);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_3->base.vmm, 12, VAR_3->engn[VAR_4].inst->size,
      &VAR_3->engn[VAR_4].vma);
 if (VAR_5)
  return VAR_5;

 return FUNC_2(VAR_3->engn[VAR_4].inst, 0, VAR_3->base.vmm,
          VAR_3->engn[VAR_4].vma, ((void*)0), 0);
}
