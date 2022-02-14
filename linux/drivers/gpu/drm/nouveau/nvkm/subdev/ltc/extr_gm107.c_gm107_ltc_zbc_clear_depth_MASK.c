
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_ltc {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;
 int FUNC_1 (struct nvkm_device*,int,int const) ;

void
FUNC_2(struct nvkm_ltc *VAR_0, int VAR_1, const u32 VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_0->subdev.device;
 FUNC_0(VAR_3, 0x17e338, 0x0000000f, VAR_1);
 FUNC_1(VAR_3, 0x17e34c, VAR_2);
}
