
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {int mutex; struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_6__ {int inst; TYPE_2__* fifo; } ;
struct gk104_fifo_chan {int runl; TYPE_3__ base; } ;
struct TYPE_4__ {struct nvkm_subdev subdev; } ;
struct TYPE_5__ {TYPE_1__ engine; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct gk104_fifo_chan*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct nvkm_device*,int,int ,int ) ;
 int FUNC_7 (int ,int,int const,int const) ;

__attribute__((used)) static int
FUNC_8(struct gk104_fifo_chan *VAR_0, bool VAR_1, bool VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_0->base.fifo->engine.subdev;
 struct nvkm_device *VAR_4 = VAR_3->device;
 const u32 VAR_5 = VAR_1 ? 0x00020000 : 0x00010000;
 const u32 VAR_6 = VAR_2 ? VAR_5 : 0x00000000;
 int VAR_7;


 FUNC_2(&VAR_3->mutex);
 FUNC_6(VAR_4, 0x002630, FUNC_0(VAR_0->runl), FUNC_0(VAR_0->runl));


 VAR_7 = FUNC_1(VAR_0);
 if (VAR_7 == 0) {

  FUNC_5(VAR_0->base.inst);
  FUNC_7(VAR_0->base.inst, 0x0ac, VAR_5, VAR_6);
  FUNC_4(VAR_0->base.inst);
 }


 FUNC_6(VAR_4, 0x002630, FUNC_0(VAR_0->runl), 0);
 FUNC_3(&VAR_3->mutex);
 return VAR_7;
}
