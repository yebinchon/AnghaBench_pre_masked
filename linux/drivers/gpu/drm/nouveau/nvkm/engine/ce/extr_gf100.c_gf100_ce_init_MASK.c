
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nvkm_falcon {scalar_t__ addr; TYPE_2__ engine; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_device*,scalar_t__,int const) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_falcon *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_1->engine.subdev.device;
 const int VAR_3 = VAR_1->engine.subdev.index - VAR_0;
 FUNC_0(VAR_2, VAR_1->addr + 0x084, VAR_3);
}
