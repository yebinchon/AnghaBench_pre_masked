
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_fb {TYPE_1__ subdev; } ;
struct nvkm_device {int chipset; } ;


 int FUNC_0 (struct nvkm_fb*,int,int,int) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_device*,int,int ) ;

void
FUNC_3(struct nvkm_fb *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->subdev.device;
 int VAR_2, VAR_3;


 if (VAR_1->chipset == 0x30 ||
     VAR_1->chipset == 0x31 ||
     VAR_1->chipset == 0x35) {

  int VAR_4 = (VAR_1->chipset == 0x31 ? 2 : 4);
  int VAR_5 = FUNC_1(VAR_1, 0x1003d0);

  for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
   for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
    FUNC_2(VAR_1, 0x10037c + 0xc * VAR_2 + 0x4 * VAR_3,
       FUNC_0(VAR_0, VAR_5, 0, VAR_3));

   for (VAR_3 = 0; VAR_3 < 2; VAR_3++)
    FUNC_2(VAR_1, 0x1003ac + 0x8 * VAR_2 + 0x4 * VAR_3,
       FUNC_0(VAR_0, VAR_5, 1, VAR_3));
  }
 }
}
