
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nvkm_instmem {int ramht; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct nv04_fifo_chan {TYPE_3__* fifo; } ;
struct TYPE_10__ {int mutex; TYPE_1__* device; } ;
struct TYPE_9__ {TYPE_5__ subdev; } ;
struct TYPE_7__ {TYPE_4__ engine; } ;
struct TYPE_8__ {TYPE_2__ base; } ;
struct TYPE_6__ {struct nvkm_instmem* imem; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nv04_fifo_chan* FUNC_2 (struct nvkm_fifo_chan*) ;
 int FUNC_3 (int ,int) ;

void
FUNC_4(struct nvkm_fifo_chan *VAR_0, int VAR_1)
{
 struct nv04_fifo_chan *VAR_2 = FUNC_2(VAR_0);
 struct nvkm_instmem *VAR_3 = VAR_2->fifo->base.engine.subdev.device->imem;

 FUNC_0(&VAR_2->fifo->base.engine.subdev.mutex);
 FUNC_3(VAR_3->ramht, VAR_1);
 FUNC_1(&VAR_2->fifo->base.engine.subdev.mutex);
}
