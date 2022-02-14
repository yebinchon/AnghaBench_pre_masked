
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_head {int id; TYPE_3__* disp; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;


 int FUNC_0 (struct nvkm_device*,int const,int,int) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_head *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->disp->engine.subdev.device;
 const u32 VAR_2 = VAR_0->id * 0x800;
 FUNC_0(VAR_1, 0x6100c0 + VAR_2, 0x00000001, 0x00000001);
}
