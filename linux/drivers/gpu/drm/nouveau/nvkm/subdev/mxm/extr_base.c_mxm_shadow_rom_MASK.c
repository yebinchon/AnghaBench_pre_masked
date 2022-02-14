
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_mxm {int* mxms; TYPE_1__ subdev; } ;
struct nvkm_i2c_bus {int dummy; } ;
struct nvkm_i2c {int dummy; } ;
struct nvkm_device {struct nvkm_i2c* i2c; struct nvkm_bios* bios; } ;
struct nvkm_bios {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nvkm_bios*,int) ;
 scalar_t__ FUNC_3 (struct nvkm_i2c_bus*,int,int ,int,int*) ;
 int FUNC_4 (struct nvkm_mxm*) ;
 int FUNC_5 (struct nvkm_mxm*) ;
 struct nvkm_i2c_bus* FUNC_6 (struct nvkm_i2c*,int) ;

__attribute__((used)) static bool
FUNC_7(struct nvkm_mxm *VAR_1, u8 VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_1->subdev.device;
 struct nvkm_bios *VAR_4 = VAR_3->bios;
 struct nvkm_i2c *VAR_5 = VAR_3->i2c;
 struct nvkm_i2c_bus *VAR_6 = ((void*)0);
 u8 VAR_7, VAR_8[6], VAR_9, VAR_10;

 VAR_7 = FUNC_2(VAR_4, 1 ) & 0x0f;
 if (VAR_7 < 0x0f)
  VAR_6 = FUNC_6(VAR_5, VAR_7);
 if (!VAR_6)
  return 0;

 VAR_9 = 0x54;
 if (!FUNC_3(VAR_6, VAR_9, 0, 6, VAR_8)) {
  VAR_9 = 0x56;
  if (!FUNC_3(VAR_6, VAR_9, 0, 6, VAR_8))
   return 0;
 }

 VAR_1->mxms = VAR_8;
 VAR_10 = FUNC_4(VAR_1) + FUNC_5(VAR_1);
 VAR_1->mxms = FUNC_1(VAR_10, VAR_0);

 if (VAR_1->mxms &&
     FUNC_3(VAR_6, VAR_9, 0, VAR_10, VAR_1->mxms))
  return 1;

 FUNC_0(VAR_1->mxms);
 VAR_1->mxms = ((void*)0);
 return 0;
}
