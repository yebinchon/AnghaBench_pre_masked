
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_devinit {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_2__ {int post; struct nvkm_subdev subdev; } ;
struct nv04_devinit {scalar_t__ owner; TYPE_1__ base; } ;


 struct nv04_devinit* FUNC_0 (struct nvkm_devinit*) ;
 int FUNC_1 (struct nvkm_subdev*,char*) ;
 int FUNC_2 (struct nvkm_device*,int,int,int) ;
 int FUNC_3 (struct nvkm_device*,int ,int) ;
 scalar_t__ FUNC_4 (struct nvkm_device*) ;
 int FUNC_5 (struct nvkm_device*,int ) ;

void
FUNC_6(struct nvkm_devinit *VAR_0)
{
 struct nv04_devinit *VAR_1 = FUNC_0(VAR_0);
 struct nvkm_subdev *VAR_2 = &VAR_1->base.subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;


 FUNC_2(VAR_3, 0x000200, 0x00000001, 0x00000001);


 if (VAR_1->owner < 0)
  VAR_1->owner = FUNC_4(VAR_3);
 FUNC_5(VAR_3, 0);

 if (!VAR_1->base.post) {
  u32 VAR_4 = FUNC_3(VAR_3, 0, 0x06);
  VAR_4 |= (FUNC_3(VAR_3, 0, 0x07) & 0x01) << 8;
  VAR_4 |= (FUNC_3(VAR_3, 0, 0x07) & 0x20) << 4;
  VAR_4 |= (FUNC_3(VAR_3, 0, 0x25) & 0x01) << 10;
  VAR_4 |= (FUNC_3(VAR_3, 0, 0x41) & 0x01) << 11;
  if (!VAR_4) {
   FUNC_1(VAR_2, "adaptor not initialised\n");
   VAR_1->base.post = 1;
  }
 }
}
