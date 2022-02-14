
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_object {int dummy; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct TYPE_2__ {int index; } ;
struct nvkm_engine {TYPE_1__ subdev; } ;
struct nv50_fifo_chan {int * engn; } ;


 scalar_t__ FUNC_0 (struct nvkm_engine*) ;
 struct nv50_fifo_chan* FUNC_1 (struct nvkm_fifo_chan*) ;
 int FUNC_2 (struct nvkm_object*,int *,int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_fifo_chan *VAR_0,
     struct nvkm_engine *VAR_1,
     struct nvkm_object *VAR_2)
{
 struct nv50_fifo_chan *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = VAR_1->subdev.index;

 if (FUNC_0(VAR_1) < 0)
  return 0;

 return FUNC_2(VAR_2, ((void*)0), 0, &VAR_3->engn[VAR_4]);
}
