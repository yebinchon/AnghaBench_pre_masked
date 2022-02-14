
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct nvkm_gpuobj {int dummy; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct TYPE_8__ {size_t index; } ;
struct nvkm_engine {TYPE_4__ subdev; } ;
struct TYPE_5__ {struct nvkm_gpuobj* inst; } ;
struct gf100_fifo_chan {TYPE_3__* engn; TYPE_1__ base; } ;
struct TYPE_7__ {TYPE_2__* vma; } ;
struct TYPE_6__ {int addr; } ;


 struct gf100_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;
 scalar_t__ FUNC_1 (struct nvkm_engine*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nvkm_gpuobj*) ;
 int FUNC_4 (struct nvkm_gpuobj*) ;
 int FUNC_5 (struct nvkm_gpuobj*,scalar_t__ const,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct nvkm_fifo_chan *VAR_0,
         struct nvkm_engine *VAR_1)
{
 const u32 VAR_2 = FUNC_1(VAR_1);
 struct gf100_fifo_chan *VAR_3 = FUNC_0(VAR_0);
 struct nvkm_gpuobj *VAR_4 = VAR_3->base.inst;

 if (VAR_2) {
  u64 VAR_5 = VAR_3->engn[VAR_1->subdev.index].vma->addr;
  FUNC_4(VAR_4);
  FUNC_5(VAR_4, VAR_2 + 0x00, FUNC_2(VAR_5) | 4);
  FUNC_5(VAR_4, VAR_2 + 0x04, FUNC_6(VAR_5));
  FUNC_3(VAR_4);
 }

 return 0;
}
