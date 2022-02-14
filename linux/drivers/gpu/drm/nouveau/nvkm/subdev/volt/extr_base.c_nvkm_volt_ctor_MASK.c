
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nvkm_volt_func {int dummy; } ;
struct nvkm_volt {int max0_id; int max1_id; int max2_id; int vid_nr; TYPE_1__* vid; int subdev; int max_uv; int min_uv; struct nvkm_volt_func const* func; } ;
struct nvkm_device {struct nvkm_bios* bios; } ;
struct nvkm_bios {int dummy; } ;
struct nvbios_vmap {int max0; int max1; int max2; } ;
struct TYPE_2__ {int uv; int vid; } ;


 scalar_t__ FUNC_0 (struct nvkm_bios*,int *,int *,int *,int *,struct nvbios_vmap*) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,struct nvkm_device*,int,int *) ;
 int VAR_0 ;
 int FUNC_3 (struct nvkm_bios*,struct nvkm_volt*) ;

void
FUNC_4(const struct nvkm_volt_func *VAR_1, struct nvkm_device *VAR_2,
        int VAR_3, struct nvkm_volt *VAR_4)
{
 struct nvkm_bios *VAR_5 = VAR_2->bios;
 int VAR_6;

 FUNC_2(&VAR_0, VAR_2, VAR_3, &VAR_4->subdev);
 VAR_4->func = VAR_1;


 if (VAR_5) {
  u8 VAR_7, VAR_8, VAR_9, VAR_10;
  struct nvbios_vmap VAR_11;

  FUNC_3(VAR_5, VAR_4);
  FUNC_1(&VAR_4->subdev, "min: %iuv max: %iuv\n",
      VAR_4->min_uv, VAR_4->max_uv);

  if (FUNC_0(VAR_5, &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11)) {
   VAR_4->max0_id = VAR_11.max0;
   VAR_4->max1_id = VAR_11.max1;
   VAR_4->max2_id = VAR_11.max2;
  } else {
   VAR_4->max0_id = 0xff;
   VAR_4->max1_id = 0xff;
   VAR_4->max2_id = 0xff;
  }
 }

 if (VAR_4->vid_nr) {
  for (VAR_6 = 0; VAR_6 < VAR_4->vid_nr; VAR_6++) {
   FUNC_1(&VAR_4->subdev, "VID %02x: %duv\n",
       VAR_4->vid[VAR_6].vid, VAR_4->vid[VAR_6].uv);
  }
 }
}
