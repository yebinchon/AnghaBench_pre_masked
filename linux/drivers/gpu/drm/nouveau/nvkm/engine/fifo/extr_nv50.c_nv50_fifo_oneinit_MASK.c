
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_fifo {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv50_fifo {int * runlist; TYPE_3__ base; } ;


 int VAR_0 ;
 struct nv50_fifo* FUNC_0 (struct nvkm_fifo*) ;
 int FUNC_1 (struct nvkm_device*,int ,int,int,int,int *) ;

int
FUNC_2(struct nvkm_fifo *VAR_1)
{
 struct nv50_fifo *VAR_2 = FUNC_0(VAR_1);
 struct nvkm_device *VAR_3 = VAR_2->base.engine.subdev.device;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0, 128 * 4, 0x1000,
         0, &VAR_2->runlist[0]);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_3, VAR_0, 128 * 4, 0x1000,
          0, &VAR_2->runlist[1]);
}
