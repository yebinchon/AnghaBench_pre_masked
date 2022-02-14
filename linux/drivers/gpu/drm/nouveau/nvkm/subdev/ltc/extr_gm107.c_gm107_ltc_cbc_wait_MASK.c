
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_ltc {int ltc_nr; int lts_nr; TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int const,int,int) ;

void
FUNC_1(struct nvkm_ltc *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->subdev.device;
 int VAR_2, VAR_3;
 for (VAR_2 = 0; VAR_2 < VAR_0->ltc_nr; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < VAR_0->lts_nr; VAR_3++) {
   const u32 VAR_4 = 0x14046c + (VAR_2 * 0x2000) + (VAR_3 * 0x200);
   FUNC_0(VAR_1, 2000, VAR_4,
           0x00000004, 0x00000000);
  }
 }
}
