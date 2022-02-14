
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int chipset; int dev; } ;
struct gf100_gr_fuc {int * data; int size; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct TYPE_4__ {TYPE_1__ engine; } ;
struct gf100_gr {TYPE_2__ base; } ;
struct firmware {int data; int size; } ;
typedef int f ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct nvkm_subdev*,char*,char const*) ;
 int FUNC_2 (struct nvkm_subdev*,char*,char const*) ;
 int FUNC_3 (struct firmware const*) ;
 int FUNC_4 (struct firmware const**,char*,int ) ;
 int FUNC_5 (char*,int,char*,...) ;
 int FUNC_6 (char const*,char*) ;

int
FUNC_7(struct gf100_gr *VAR_2, const char *VAR_3,
   struct gf100_gr_fuc *VAR_4, int VAR_5)
{
 struct nvkm_subdev *VAR_6 = &VAR_2->base.engine.subdev;
 struct nvkm_device *VAR_7 = VAR_6->device;
 const struct firmware *VAR_8;
 char VAR_9[32];


 if (!FUNC_6(VAR_3, "fecs_inst"))
  VAR_3 = "fuc409c";
 else if (!FUNC_6(VAR_3, "fecs_data"))
  VAR_3 = "fuc409d";
 else if (!FUNC_6(VAR_3, "gpccs_inst"))
  VAR_3 = "fuc41ac";
 else if (!FUNC_6(VAR_3, "gpccs_data"))
  VAR_3 = "fuc41ad";
 else {

  FUNC_2(VAR_6, "failed to load %s\n", VAR_3);
  return VAR_5;
 }


 FUNC_1(VAR_6, "%s: falling back to legacy path\n", VAR_3);

 FUNC_5(VAR_9, sizeof(VAR_9), "nouveau/nv%02x_%s", VAR_7->chipset, VAR_3);
 VAR_5 = FUNC_4(&VAR_8, VAR_9, VAR_7->dev);
 if (VAR_5) {
  FUNC_5(VAR_9, sizeof(VAR_9), "nouveau/%s", VAR_3);
  VAR_5 = FUNC_4(&VAR_8, VAR_9, VAR_7->dev);
  if (VAR_5) {
   FUNC_2(VAR_6, "failed to load %s\n", VAR_3);
   return VAR_5;
  }
 }

 VAR_4->size = VAR_8->size;
 VAR_4->data = FUNC_0(VAR_8->data, VAR_4->size, VAR_1);
 FUNC_3(VAR_8);
 return (VAR_4->data != ((void*)0)) ? 0 : -VAR_0;
}
