
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct nv31_mpeg {TYPE_3__* func; TYPE_2__ engine; } ;
struct TYPE_6__ {int (* mthd_dma ) (struct nvkm_device*,int,int) ;} ;


 int FUNC_0 (struct nvkm_device*,int,int) ;

__attribute__((used)) static bool
FUNC_1(struct nv31_mpeg *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_0->engine.subdev.device;
 switch (VAR_1) {
 case 0x190:
 case 0x1a0:
 case 0x1b0:
  return VAR_0->func->mthd_dma(VAR_3, VAR_1, VAR_2);
 default:
  break;
 }
 return 0;
}
