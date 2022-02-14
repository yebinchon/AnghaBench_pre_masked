
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_instmem {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {int reserved; int ramro; int ramfc; int ramht; int vbios; TYPE_1__ subdev; } ;
struct nv04_instmem {TYPE_2__ base; int heap; } ;


 int VAR_0 ;
 struct nv04_instmem* FUNC_0 (struct nvkm_instmem*) ;
 int FUNC_1 (struct nvkm_device*,int ,int,int ,int,int *) ;
 int FUNC_2 (int *,int ,int ,int,int) ;
 int FUNC_3 (struct nvkm_device*,int,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_instmem *VAR_1)
{
 struct nv04_instmem *VAR_2 = FUNC_0(VAR_1);
 struct nvkm_device *VAR_3 = VAR_2->base.subdev.device;
 int VAR_4;


 VAR_2->base.reserved = 512 * 1024;

 VAR_4 = FUNC_2(&VAR_2->heap, 0, 0, VAR_2->base.reserved, 1);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_3, VAR_0, 0x10000, 0, 0,
         &VAR_2->base.vbios);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_3(VAR_3, 0x08000, 0, ((void*)0), &VAR_2->base.ramht);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_3, VAR_0, 0x00800, 0, 1,
         &VAR_2->base.ramfc);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_3, VAR_0, 0x00200, 0, 0,
         &VAR_2->base.ramro);
 if (VAR_4)
  return VAR_4;

 return 0;
}
