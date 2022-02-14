
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_head_state {int vblanks; int vtotal; int vblanke; int hblanks; int htotal; int hblanke; } ;
struct nvkm_head {int id; TYPE_3__* disp; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;


 int FUNC_0 (struct nvkm_device*,int const) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_head *VAR_0, struct nvkm_head_state *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->disp->engine.subdev.device;
 const u32 VAR_3 = VAR_0->id * 0x0200;
 VAR_1->vblanks = FUNC_0(VAR_2, 0x680800 + VAR_3) & 0x0000ffff;
 VAR_1->vtotal = FUNC_0(VAR_2, 0x680804 + VAR_3) & 0x0000ffff;
 VAR_1->vblanke = VAR_1->vtotal - 1;
 VAR_1->hblanks = FUNC_0(VAR_2, 0x680820 + VAR_3) & 0x0000ffff;
 VAR_1->htotal = FUNC_0(VAR_2, 0x680824 + VAR_3) & 0x0000ffff;
 VAR_1->hblanke = VAR_1->htotal - 1;
}
