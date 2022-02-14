
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_instmem {int dummy; } ;
struct nvkm_device {int chipset; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {int reserved; int ramfc; int ramro; int ramht; int vbios; TYPE_1__ subdev; } ;
struct nv40_instmem {TYPE_2__ base; int heap; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct nv40_instmem* FUNC_1 (struct nvkm_instmem*) ;
 scalar_t__ FUNC_2 (struct nvkm_device*) ;
 int FUNC_3 (struct nvkm_device*,int ,int,int ,int,int *) ;
 int FUNC_4 (int *,int ,int ,int,int) ;
 int FUNC_5 (struct nvkm_device*,int,int ,int *,int *) ;
 int FUNC_6 (struct nvkm_device*,int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int
FUNC_8(struct nvkm_instmem *VAR_1)
{
 struct nv40_instmem *VAR_2 = FUNC_1(VAR_1);
 struct nvkm_device *VAR_3 = VAR_2->base.subdev.device;
 int VAR_4, VAR_5;





 VAR_5 = FUNC_0((FUNC_6(VAR_3, 0x001540) & 0x0000ff00) >> 8);
 if (VAR_3->chipset == 0x40) VAR_2->base.reserved = 0x6aa0 * VAR_5;
 else if (VAR_3->chipset < 0x43) VAR_2->base.reserved = 0x4f00 * VAR_5;
 else if (FUNC_2(VAR_3)) VAR_2->base.reserved = 0x4980 * VAR_5;
 else VAR_2->base.reserved = 0x4a40 * VAR_5;
 VAR_2->base.reserved += 16 * 1024;
 VAR_2->base.reserved *= 32;
 VAR_2->base.reserved += 512 * 1024;
 VAR_2->base.reserved += 512 * 1024;
 VAR_2->base.reserved = FUNC_7(VAR_2->base.reserved, 4096);

 VAR_4 = FUNC_4(&VAR_2->heap, 0, 0, VAR_2->base.reserved, 1);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_3(VAR_3, VAR_0, 0x10000, 0, 0,
         &VAR_2->base.vbios);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_5(VAR_3, 0x08000, 0, ((void*)0), &VAR_2->base.ramht);
 if (VAR_4)
  return VAR_4;




 VAR_4 = FUNC_3(VAR_3, VAR_0, 0x08000, 0, 0,
         &VAR_2->base.ramro);
 if (VAR_4)
  return VAR_4;




 VAR_4 = FUNC_3(VAR_3, VAR_0, 0x20000, 0, 1,
         &VAR_2->base.ramfc);
 if (VAR_4)
  return VAR_4;

 return 0;
}
