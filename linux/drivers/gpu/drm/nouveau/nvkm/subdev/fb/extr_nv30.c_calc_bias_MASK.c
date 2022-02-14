
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_fb {TYPE_1__ subdev; } ;
struct nvkm_device {int chipset; } ;


 int FUNC_0 (struct nvkm_device*,int) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_fb *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_0->subdev.device;
 int VAR_5 = (VAR_4->chipset > 0x30 ?
   FUNC_0(VAR_4, 0x122c + 0x10 * VAR_1 + 0x4 * VAR_3) >>
   (4 * (VAR_2 ^ 1)) :
   0) & 0xf;

 return 2 * (VAR_5 & 0x8 ? VAR_5 - 0x10 : VAR_5);
}
