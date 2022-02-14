
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_gpuobj {int dummy; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct nvkm_engine {int dummy; } ;
struct TYPE_2__ {struct nvkm_gpuobj* inst; } ;
struct gk104_fifo_chan {TYPE_1__ base; } ;


 struct gk104_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;
 int FUNC_1 (struct nvkm_engine*) ;
 int FUNC_2 (struct gk104_fifo_chan*) ;
 int FUNC_3 (struct nvkm_gpuobj*) ;
 int FUNC_4 (struct nvkm_gpuobj*) ;
 int FUNC_5 (struct nvkm_gpuobj*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_fifo_chan *VAR_0,
         struct nvkm_engine *VAR_1, bool VAR_2)
{
 struct gk104_fifo_chan *VAR_3 = FUNC_0(VAR_0);
 struct nvkm_gpuobj *VAR_4 = VAR_3->base.inst;
 u32 VAR_5 = FUNC_1(VAR_1);
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 && VAR_2)
  return VAR_6;

 if (VAR_5) {
  FUNC_4(VAR_4);
  FUNC_5(VAR_4, (VAR_5 & 0xffff) + 0x00, 0x00000000);
  FUNC_5(VAR_4, (VAR_5 & 0xffff) + 0x04, 0x00000000);
  if ((VAR_5 >>= 16)) {
   FUNC_5(VAR_4, VAR_5 + 0x00, 0x00000000);
   FUNC_5(VAR_4, VAR_5 + 0x04, 0x00000000);
  }
  FUNC_3(VAR_4);
 }

 return VAR_6;
}
