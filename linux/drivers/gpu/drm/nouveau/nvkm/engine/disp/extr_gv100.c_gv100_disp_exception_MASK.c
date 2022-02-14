
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_enum {char* name; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct TYPE_4__ {TYPE_1__ engine; } ;
struct nv50_disp {scalar_t__* chan; TYPE_2__ base; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_1 ;
 struct nvkm_enum* FUNC_2 (int ,int) ;
 int FUNC_3 (struct nvkm_subdev*,char*,int,int,int,char*,int,int,int) ;
 int FUNC_4 (struct nvkm_device*,int) ;
 int FUNC_5 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_6(struct nv50_disp *VAR_2, int VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_2->base.engine.subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 u32 VAR_6 = FUNC_4(VAR_5, 0x611020 + (VAR_3 * 12));
 u32 VAR_7 = (VAR_6 & 0x00007000) >> 12;
 u32 VAR_8 = (VAR_6 & 0x00000fff) << 2;
 u32 VAR_9 = FUNC_4(VAR_5, 0x611024 + (VAR_3 * 12));
 u32 VAR_10 = FUNC_4(VAR_5, 0x611028 + (VAR_3 * 12));
 const struct nvkm_enum *VAR_11 =
  FUNC_2(VAR_1, VAR_7);

 FUNC_3(VAR_4, "chid %d stat %08x reason %d [%s] mthd %04x "
      "data %08x code %08x\n",
     VAR_3, VAR_6, VAR_7, VAR_11 ? VAR_11->name : "",
     VAR_8, VAR_9, VAR_10);

 if (VAR_3 < FUNC_0(VAR_2->chan) && VAR_2->chan[VAR_3]) {
  switch (VAR_8) {
  case 0x0200:
   FUNC_1(VAR_2->chan[VAR_3], VAR_0);
   break;
  default:
   break;
  }
 }

 FUNC_5(VAR_5, 0x611020 + (VAR_3 * 12), 0x90000000);
}
