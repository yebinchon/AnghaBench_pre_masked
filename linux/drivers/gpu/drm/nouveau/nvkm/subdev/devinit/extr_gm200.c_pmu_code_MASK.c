
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {struct nvkm_bios* bios; } ;
struct nvkm_bios {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nv50_devinit {TYPE_2__ base; } ;


 int FUNC_0 (struct nvkm_bios*,int) ;
 int FUNC_1 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nv50_devinit *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3, bool VAR_4)
{
 struct nvkm_device *VAR_5 = VAR_0->base.subdev.device;
 struct nvkm_bios *VAR_6 = VAR_5->bios;
 int VAR_7;

 FUNC_1(VAR_5, 0x10a180, 0x01000000 | (VAR_4 ? 0x10000000 : 0) | VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7 += 4) {
  if ((VAR_7 & 0xff) == 0)
   FUNC_1(VAR_5, 0x10a188, (VAR_1 + VAR_7) >> 8);
  FUNC_1(VAR_5, 0x10a184, FUNC_0(VAR_6, VAR_2 + VAR_7));
 }

 while (VAR_7 & 0xff) {
  FUNC_1(VAR_5, 0x10a184, 0x00000000);
  VAR_7 += 4;
 }
}
