
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_ltc {struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,char*,int,int,int,char*) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (char*,int,int ,int) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct nvkm_ltc *VAR_1, int VAR_2, int VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_1->subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 u32 VAR_6 = 0x141000 + (VAR_2 * 0x2000) + (VAR_3 * 0x400);
 u32 VAR_7 = FUNC_1(VAR_5, VAR_6 + 0x020);
 u32 VAR_8 = VAR_7 & 0x0000ffff;
 char VAR_9[128];

 if (VAR_8) {
  FUNC_2(VAR_9, sizeof(VAR_9), VAR_0, VAR_8);
  FUNC_0(VAR_4, "LTC%d_LTS%d: %08x [%s]\n", VAR_2, VAR_3, VAR_8, VAR_9);
 }

 FUNC_3(VAR_5, VAR_6 + 0x020, VAR_7);
}
