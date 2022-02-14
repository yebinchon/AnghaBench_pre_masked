
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_gpuobj {int dummy; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct TYPE_8__ {size_t index; } ;
struct nvkm_engine {TYPE_4__ subdev; } ;
struct TYPE_7__ {struct nvkm_gpuobj* inst; } ;
struct gk104_fifo_chan {TYPE_2__* engn; TYPE_3__ base; } ;
struct TYPE_6__ {TYPE_1__* vma; } ;
struct TYPE_5__ {int addr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct gk104_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;
 int FUNC_1 (struct gk104_fifo_chan*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nvkm_gpuobj*) ;
 int FUNC_4 (struct nvkm_gpuobj*) ;
 int FUNC_5 (struct nvkm_gpuobj*,int,int) ;
 int FUNC_6 (int ) ;

int
FUNC_7(struct nvkm_fifo_chan *VAR_2,
         struct nvkm_engine *VAR_3)
{
 struct gk104_fifo_chan *VAR_4 = FUNC_0(VAR_2);
 struct nvkm_gpuobj *VAR_5 = VAR_4->base.inst;
 u64 VAR_6;

 if (VAR_3->subdev.index >= VAR_0 &&
     VAR_3->subdev.index <= VAR_1)
  return 0;

 VAR_6 = VAR_4->engn[VAR_3->subdev.index].vma->addr;
 FUNC_4(VAR_5);
 FUNC_5(VAR_5, 0x210, FUNC_2(VAR_6) | 0x00000004);
 FUNC_5(VAR_5, 0x214, FUNC_6(VAR_6));
 FUNC_3(VAR_5);

 return FUNC_1(VAR_4, 0, 1);
}
