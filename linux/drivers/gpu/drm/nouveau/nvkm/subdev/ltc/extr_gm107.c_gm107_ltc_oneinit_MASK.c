
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_ltc {int lts_nr; int ltc_nr; TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_ltc*) ;
 int FUNC_1 (struct nvkm_device*,int) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_ltc *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->subdev.device;
 const u32 VAR_2 = FUNC_1(VAR_1, 0x022438);
 const u32 VAR_3 = FUNC_1(VAR_1, 0x021c14);
 const u32 VAR_4 = FUNC_1(VAR_1, 0x17e280) >> 28;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (!(VAR_3 & (1 << VAR_5)))
   VAR_0->ltc_nr++;
 }
 VAR_0->lts_nr = VAR_4;

 return FUNC_0(VAR_0);
}
