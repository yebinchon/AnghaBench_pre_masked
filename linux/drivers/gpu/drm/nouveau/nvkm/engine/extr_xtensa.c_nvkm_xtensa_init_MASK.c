
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct nvkm_xtensa {int addr; TYPE_2__* func; int gpu_fw; TYPE_1__ engine; } ;
struct nvkm_engine {int dummy; } ;
struct nvkm_device {int dev; } ;
struct firmware {int size; scalar_t__ data; } ;
typedef int name ;
struct TYPE_4__ {int unkd28; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nvkm_device*,int ,int,int,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nvkm_device*,int) ;
 int FUNC_6 (struct nvkm_subdev*,char*,char*) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (struct nvkm_device*,int const,int) ;
 struct nvkm_xtensa* FUNC_9 (struct nvkm_engine*) ;
 int FUNC_10 (struct firmware const*) ;
 int FUNC_11 (struct firmware const**,char*,int ) ;
 int FUNC_12 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_13(struct nvkm_engine *VAR_2)
{
 struct nvkm_xtensa *VAR_3 = FUNC_9(VAR_2);
 struct nvkm_subdev *VAR_4 = &VAR_3->engine.subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 const u32 VAR_6 = VAR_3->addr;
 const struct firmware *VAR_7;
 char VAR_8[32];
 int VAR_9, VAR_10;
 u64 VAR_11, VAR_12;
 u32 VAR_13;

 if (!VAR_3->gpu_fw) {
  FUNC_12(VAR_8, sizeof(VAR_8), "nouveau/nv84_xuc%03x",
    VAR_3->addr >> 12);

  VAR_10 = FUNC_11(&VAR_7, VAR_8, VAR_5->dev);
  if (VAR_10) {
   FUNC_6(VAR_4, "unable to load firmware %s\n", VAR_8);
   return VAR_10;
  }

  if (VAR_7->size > 0x40000) {
   FUNC_6(VAR_4, "firmware %s too large\n", VAR_8);
   FUNC_10(VAR_7);
   return -VAR_0;
  }

  VAR_10 = FUNC_3(VAR_5, VAR_1,
          0x40000, 0x1000, 0,
          &VAR_3->gpu_fw);
  if (VAR_10) {
   FUNC_10(VAR_7);
   return VAR_10;
  }

  FUNC_1(VAR_3->gpu_fw);
  for (VAR_9 = 0; VAR_9 < VAR_7->size / 4; VAR_9++)
   FUNC_7(VAR_3->gpu_fw, VAR_9 * 4, *((u32 *)VAR_7->data + VAR_9));
  FUNC_0(VAR_3->gpu_fw);
  FUNC_10(VAR_7);
 }

 VAR_11 = FUNC_2(VAR_3->gpu_fw);
 VAR_12 = FUNC_4(VAR_3->gpu_fw);

 FUNC_8(VAR_5, VAR_6 + 0xd10, 0x1fffffff);
 FUNC_8(VAR_5, VAR_6 + 0xd08, 0x0fffffff);

 FUNC_8(VAR_5, VAR_6 + 0xd28, VAR_3->func->unkd28);
 FUNC_8(VAR_5, VAR_6 + 0xc20, 0x3f);
 FUNC_8(VAR_5, VAR_6 + 0xd84, 0x3f);

 FUNC_8(VAR_5, VAR_6 + 0xcc0, VAR_11 >> 8);
 FUNC_8(VAR_5, VAR_6 + 0xcc4, 0x1c);
 FUNC_8(VAR_5, VAR_6 + 0xcc8, VAR_12 >> 8);

 VAR_13 = FUNC_5(VAR_5, 0x0);
 FUNC_8(VAR_5, VAR_6 + 0xde0, VAR_13);

 FUNC_8(VAR_5, VAR_6 + 0xce8, 0xf);

 FUNC_8(VAR_5, VAR_6 + 0xc20, 0x3f);
 FUNC_8(VAR_5, VAR_6 + 0xd84, 0x3f);
 return 0;
}
