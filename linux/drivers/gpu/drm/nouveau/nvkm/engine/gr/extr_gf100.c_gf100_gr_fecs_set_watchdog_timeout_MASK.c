
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
struct gf100_gr {TYPE_3__ base; } ;


 int FUNC_0 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct gf100_gr *VAR_0, u32 VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->base.engine.subdev.device;

 FUNC_0(VAR_2, 0x409840, 0xffffffff);
 FUNC_0(VAR_2, 0x409500, VAR_1);
 FUNC_0(VAR_2, 0x409504, 0x00000021);
}
