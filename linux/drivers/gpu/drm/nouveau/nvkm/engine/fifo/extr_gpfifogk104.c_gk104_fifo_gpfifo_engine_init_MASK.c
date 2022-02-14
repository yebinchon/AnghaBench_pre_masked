
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_gpuobj {int dummy; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct TYPE_7__ {size_t index; } ;
struct nvkm_engine {TYPE_3__ subdev; } ;
struct TYPE_8__ {struct nvkm_gpuobj* inst; } ;
struct gk104_fifo_chan {TYPE_2__* engn; TYPE_4__ base; } ;
struct TYPE_6__ {TYPE_1__* vma; } ;
struct TYPE_5__ {int addr; } ;


 struct gk104_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;
 int FUNC_1 (struct nvkm_engine*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nvkm_gpuobj*) ;
 int FUNC_4 (struct nvkm_gpuobj*) ;
 int FUNC_5 (struct nvkm_gpuobj*,int,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct nvkm_fifo_chan *VAR_0,
         struct nvkm_engine *VAR_1)
{
 struct gk104_fifo_chan *VAR_2 = FUNC_0(VAR_0);
 struct nvkm_gpuobj *VAR_3 = VAR_2->base.inst;
 u32 VAR_4 = FUNC_1(VAR_1);

 if (VAR_4) {
  u64 VAR_5 = VAR_2->engn[VAR_1->subdev.index].vma->addr;
  u32 VAR_6 = FUNC_2(VAR_5) | 0x00000004;
  u32 VAR_7 = FUNC_6(VAR_5);
  FUNC_4(VAR_3);
  FUNC_5(VAR_3, (VAR_4 & 0xffff) + 0x00, VAR_6);
  FUNC_5(VAR_3, (VAR_4 & 0xffff) + 0x04, VAR_7);
  if ((VAR_4 >>= 16)) {
   FUNC_5(VAR_3, VAR_4 + 0x00, VAR_6);
   FUNC_5(VAR_3, VAR_4 + 0x04, VAR_7);
  }
  FUNC_3(VAR_3);
 }

 return 0;
}
