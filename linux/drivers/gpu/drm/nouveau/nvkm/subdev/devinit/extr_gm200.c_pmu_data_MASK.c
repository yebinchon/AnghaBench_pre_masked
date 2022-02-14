
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
FUNC_2(struct nv50_devinit *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_0->base.subdev.device;
 struct nvkm_bios *VAR_5 = VAR_4->bios;
 int VAR_6;

 FUNC_1(VAR_4, 0x10a1c0, 0x01000000 | VAR_1);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6 += 4)
  FUNC_1(VAR_4, 0x10a1c4, FUNC_0(VAR_5, VAR_2 + VAR_6));
}
