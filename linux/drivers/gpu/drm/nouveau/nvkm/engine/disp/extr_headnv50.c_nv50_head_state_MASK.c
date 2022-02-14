
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_head_state {int vblanke; int hblanke; int vblanks; int hblanks; int vtotal; int htotal; int vsynce; int hsynce; int hz; } ;
struct nvkm_head {int id; struct nvkm_head_state arm; TYPE_3__* disp; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;


 int FUNC_0 (struct nvkm_device*,int const) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_head *VAR_0, struct nvkm_head_state *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->disp->engine.subdev.device;
 const u32 VAR_3 = VAR_0->id * 0x540 + (VAR_1 == &VAR_0->arm) * 4;
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_2, 0x610ae8 + VAR_3);
 VAR_1->vblanke = (VAR_4 & 0xffff0000) >> 16;
 VAR_1->hblanke = (VAR_4 & 0x0000ffff);
 VAR_4 = FUNC_0(VAR_2, 0x610af0 + VAR_3);
 VAR_1->vblanks = (VAR_4 & 0xffff0000) >> 16;
 VAR_1->hblanks = (VAR_4 & 0x0000ffff);
 VAR_4 = FUNC_0(VAR_2, 0x610af8 + VAR_3);
 VAR_1->vtotal = (VAR_4 & 0xffff0000) >> 16;
 VAR_1->htotal = (VAR_4 & 0x0000ffff);
 VAR_4 = FUNC_0(VAR_2, 0x610b00 + VAR_3);
 VAR_1->vsynce = (VAR_4 & 0xffff0000) >> 16;
 VAR_1->hsynce = (VAR_4 & 0x0000ffff);
 VAR_1->hz = (FUNC_0(VAR_2, 0x610ad0 + VAR_3) & 0x003fffff) * 1000;
}
