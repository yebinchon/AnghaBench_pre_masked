
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_oclass {int engine; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_gr {TYPE_1__* func; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct TYPE_2__ {int (* chan_new ) (struct nvkm_gr*,struct nvkm_fifo_chan*,struct nvkm_oclass const*,struct nvkm_object**) ;} ;


 struct nvkm_gr* FUNC_0 (int ) ;
 int FUNC_1 (struct nvkm_gr*,struct nvkm_fifo_chan*,struct nvkm_oclass const*,struct nvkm_object**) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_fifo_chan *VAR_0,
     const struct nvkm_oclass *VAR_1,
     struct nvkm_object **VAR_2)
{
 struct nvkm_gr *VAR_3 = FUNC_0(VAR_1->engine);
 if (VAR_3->func->chan_new)
  return VAR_3->func->chan_new(VAR_3, VAR_0, VAR_1, VAR_2);
 return 0;
}
