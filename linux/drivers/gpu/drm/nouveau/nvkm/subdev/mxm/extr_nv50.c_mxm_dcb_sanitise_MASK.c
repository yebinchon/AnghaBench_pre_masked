
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct nvkm_subdev {TYPE_1__* device; } ;
struct nvkm_mxm {struct nvkm_subdev subdev; } ;
struct nvkm_bios {int dummy; } ;
struct TYPE_2__ {struct nvkm_bios* bios; } ;


 int FUNC_0 (struct nvkm_bios*,struct nvkm_mxm*,int ) ;
 int FUNC_1 (struct nvkm_bios*,int*,int*,int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct nvkm_mxm*,int,int ,int *) ;
 int FUNC_3 (struct nvkm_subdev*,char*) ;

__attribute__((used)) static void
FUNC_4(struct nvkm_mxm *VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_2->subdev;
 struct nvkm_bios *VAR_4 = VAR_3->device->bios;
 u8 VAR_5, VAR_6, VAR_7, VAR_8;
 u16 VAR_9 = FUNC_1(VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8);
 if (VAR_9 == 0x0000 || (VAR_5 != 0x40 && VAR_5 != 0x41)) {
  FUNC_3(VAR_3, "unsupported DCB version\n");
  return;
 }

 FUNC_0(VAR_4, VAR_2, VAR_0);
 FUNC_2(VAR_2, 0x01, VAR_1, ((void*)0));
}
