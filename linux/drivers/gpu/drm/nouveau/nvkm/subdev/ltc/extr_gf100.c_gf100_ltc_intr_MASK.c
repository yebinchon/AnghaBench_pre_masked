
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_ltc {int lts_nr; TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nvkm_ltc*,int,int) ;
 int FUNC_2 (struct nvkm_device*,int) ;

void
FUNC_3(struct nvkm_ltc *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->subdev.device;
 u32 VAR_2;

 VAR_2 = FUNC_2(VAR_1, 0x00017c);
 while (VAR_2) {
  u32 VAR_3, VAR_4 = FUNC_0(VAR_2);
  for (VAR_3 = 0; VAR_3 < VAR_0->lts_nr; VAR_3++)
   FUNC_1(VAR_0, VAR_4, VAR_3);
  VAR_2 &= ~(1 << VAR_4);
 }
}
