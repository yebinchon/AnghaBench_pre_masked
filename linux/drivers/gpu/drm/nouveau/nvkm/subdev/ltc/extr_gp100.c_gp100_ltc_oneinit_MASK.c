
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_ltc {int ltc_nr; int lts_nr; TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int) ;

int
FUNC_1(struct nvkm_ltc *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->subdev.device;
 VAR_0->ltc_nr = FUNC_0(VAR_1, 0x12006c);
 VAR_0->lts_nr = FUNC_0(VAR_1, 0x17e280) >> 28;

 return 0;
}
