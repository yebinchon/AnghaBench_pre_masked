
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct nvkm_head {int id; TYPE_3__* disp; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;


 int FUNC_0 (struct nvkm_device*,int const) ;

void
FUNC_1(struct nvkm_head *VAR_0, u16 *VAR_1, u16 *VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_0->disp->engine.subdev.device;
 const u32 VAR_4 = VAR_0->id * 0x800;

 *VAR_2 = FUNC_0(VAR_3, 0x616340 + VAR_4) & 0x0000ffff;
 *VAR_1 = FUNC_0(VAR_3, 0x616344 + VAR_4) & 0x0000ffff;
}
