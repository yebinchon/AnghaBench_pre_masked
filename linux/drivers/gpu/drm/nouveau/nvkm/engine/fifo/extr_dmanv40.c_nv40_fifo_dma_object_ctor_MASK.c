
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_object {int handle; TYPE_3__* engine; } ;
struct nvkm_instmem {int ramht; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct TYPE_12__ {int chid; } ;
struct nv04_fifo_chan {TYPE_8__* fifo; TYPE_4__ base; } ;
struct TYPE_13__ {int mutex; TYPE_1__* device; } ;
struct TYPE_14__ {TYPE_5__ subdev; } ;
struct TYPE_15__ {TYPE_6__ engine; } ;
struct TYPE_16__ {TYPE_7__ base; } ;
struct TYPE_10__ {int index; } ;
struct TYPE_11__ {TYPE_2__ subdev; } ;
struct TYPE_9__ {struct nvkm_instmem* imem; } ;


 int VAR_0 ;




 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct nv04_fifo_chan* FUNC_3 (struct nvkm_fifo_chan*) ;
 int FUNC_4 (int ,struct nvkm_object*,int,int,int,int) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_fifo_chan *VAR_1,
     struct nvkm_object *VAR_2)
{
 struct nv04_fifo_chan *VAR_3 = FUNC_3(VAR_1);
 struct nvkm_instmem *VAR_4 = VAR_3->fifo->base.engine.subdev.device->imem;
 u32 VAR_5 = VAR_3->base.chid << 23;
 u32 VAR_6 = VAR_2->handle;
 int VAR_7;

 switch (VAR_2->engine->subdev.index) {
 case 131:
 case 128 : VAR_5 |= 0x00000000; break;
 case 130 : VAR_5 |= 0x00100000; break;
 case 129 : VAR_5 |= 0x00200000; break;
 default:
  FUNC_0(1);
  return -VAR_0;
 }

 FUNC_1(&VAR_3->fifo->base.engine.subdev.mutex);
 VAR_7 = FUNC_4(VAR_4->ramht, VAR_2, VAR_3->base.chid, 4,
     VAR_6, VAR_5);
 FUNC_2(&VAR_3->fifo->base.engine.subdev.mutex);
 return VAR_7;
}
