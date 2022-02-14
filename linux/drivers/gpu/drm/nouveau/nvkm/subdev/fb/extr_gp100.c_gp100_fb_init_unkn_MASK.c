
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_fb {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ base; } ;


 TYPE_3__* FUNC_0 (struct nvkm_fb*) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_device*,int,int ) ;

void
FUNC_3(struct nvkm_fb *VAR_0)
{
 struct nvkm_device *VAR_1 = FUNC_0(VAR_0)->base.subdev.device;
 FUNC_2(VAR_1, 0x1fac80, FUNC_1(VAR_1, 0x100c80));
 FUNC_2(VAR_1, 0x1facc4, FUNC_1(VAR_1, 0x100cc4));
 FUNC_2(VAR_1, 0x1facc8, FUNC_1(VAR_1, 0x100cc8));
 FUNC_2(VAR_1, 0x1faccc, FUNC_1(VAR_1, 0x100ccc));
}
