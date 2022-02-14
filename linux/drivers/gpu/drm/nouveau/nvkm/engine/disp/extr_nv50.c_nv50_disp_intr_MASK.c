
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
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv50_disp {int super; int supervisor; int wq; TYPE_3__ base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nv50_disp*,int) ;
 int FUNC_2 (struct nv50_disp*,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (struct nvkm_device*,int) ;
 int FUNC_5 (struct nvkm_device*,int,int) ;
 int FUNC_6 (int ,int *) ;

void
FUNC_7(struct nv50_disp *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 u32 VAR_2 = FUNC_4(VAR_1, 0x610020);
 u32 VAR_3 = FUNC_4(VAR_1, 0x610024);

 while (VAR_2 & 0x001f0000) {
  u32 VAR_4 = FUNC_0(VAR_2 & 0x001f0000) - 16;
  FUNC_2(VAR_0, VAR_4);
  VAR_2 &= ~(0x00010000 << VAR_4);
 }

 while (VAR_2 & 0x0000001f) {
  u32 VAR_5 = FUNC_0(VAR_2 & 0x0000001f);
  FUNC_1(VAR_0, VAR_5);
  VAR_2 &= ~(0x00000001 << VAR_5);
 }

 if (VAR_3 & 0x00000004) {
  FUNC_3(&VAR_0->base, 0);
  FUNC_5(VAR_1, 0x610024, 0x00000004);
 }

 if (VAR_3 & 0x00000008) {
  FUNC_3(&VAR_0->base, 1);
  FUNC_5(VAR_1, 0x610024, 0x00000008);
 }

 if (VAR_3 & 0x00000070) {
  VAR_0->super = (VAR_3 & 0x00000070);
  FUNC_6(VAR_0->wq, &VAR_0->supervisor);
  FUNC_5(VAR_1, 0x610024, VAR_0->super);
 }
}
