
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_gpuobj {int dummy; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct TYPE_4__ {scalar_t__ index; } ;
struct nvkm_engine {TYPE_2__ subdev; } ;
struct TYPE_3__ {struct nvkm_gpuobj* inst; } ;
struct gk104_fifo_chan {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct gk104_fifo_chan* FUNC_0 (struct nvkm_fifo_chan*) ;
 int FUNC_1 (struct gk104_fifo_chan*) ;
 int FUNC_2 (struct gk104_fifo_chan*,int,int) ;
 int FUNC_3 (struct nvkm_gpuobj*) ;
 int FUNC_4 (struct nvkm_gpuobj*) ;
 int FUNC_5 (struct nvkm_gpuobj*,int,int) ;

int
FUNC_6(struct nvkm_fifo_chan *VAR_2,
         struct nvkm_engine *VAR_3, bool VAR_4)
{
 struct gk104_fifo_chan *VAR_5 = FUNC_0(VAR_2);
 struct nvkm_gpuobj *VAR_6 = VAR_5->base.inst;
 int VAR_7;

 if (VAR_3->subdev.index >= VAR_0 &&
     VAR_3->subdev.index <= VAR_1)
  return FUNC_1(VAR_5);

 VAR_7 = FUNC_2(VAR_5, 0, 0);
 if (VAR_7 && VAR_4)
  return VAR_7;

 FUNC_4(VAR_6);
 FUNC_5(VAR_6, 0x0210, 0x00000000);
 FUNC_5(VAR_6, 0x0214, 0x00000000);
 FUNC_3(VAR_6);
 return VAR_7;
}
