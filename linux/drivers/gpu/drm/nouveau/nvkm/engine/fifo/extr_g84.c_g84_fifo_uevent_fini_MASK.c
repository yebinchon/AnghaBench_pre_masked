
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nvkm_fifo {TYPE_2__ engine; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_fifo *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->engine.subdev.device;
 FUNC_0(VAR_1, 0x002140, 0x40000000, 0x00000000);
}
