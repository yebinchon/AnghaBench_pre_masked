
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_ltc {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;
typedef scalar_t__ s64 ;


 int FUNC_0 (TYPE_1__*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct nvkm_device*,int,int,int,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

void
FUNC_3(struct nvkm_ltc *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->subdev.device;
 s64 VAR_2;

 FUNC_2(VAR_1, 0x70004, 0x00000001);
 VAR_2 = FUNC_1(VAR_1, 2000, 0x70004, 0x00000003, 0x00000000);

 if (VAR_2 > 0)
  FUNC_0(&VAR_0->subdev, "LTC invalidate took %lld ns\n", VAR_2);
}
