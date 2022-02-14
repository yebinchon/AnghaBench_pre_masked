
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
struct nv50_disp {int * chan; TYPE_2__ base; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct nvkm_enum* FUNC_2 (int ,int) ;
 int FUNC_3 (struct nvkm_subdev*,char*,int,char*,int,char*,int,int,int) ;
 int FUNC_4 (struct nvkm_device*,int) ;
 int FUNC_5 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_6(struct nv50_disp *VAR_3, int VAR_4)
{
 struct nvkm_subdev *VAR_5 = &VAR_3->base.engine.subdev;
 struct nvkm_device *VAR_6 = VAR_5->device;
 u32 VAR_7 = FUNC_4(VAR_6, 0x610084 + (VAR_4 * 0x08));
 u32 VAR_8 = FUNC_4(VAR_6, 0x610080 + (VAR_4 * 0x08));
 u32 VAR_9 = (VAR_8 & 0x00ff0000) >> 16;
 u32 VAR_10 = (VAR_8 & 0x00007000) >> 12;
 u32 VAR_11 = (VAR_8 & 0x00000ffc);
 const struct nvkm_enum *VAR_12, *VAR_13;

 VAR_13 = FUNC_2(VAR_2, VAR_10);
 VAR_12 = FUNC_2(VAR_1, VAR_9);

 FUNC_3(VAR_5,
     "ERROR %d [%s] %02x [%s] chid %d mthd %04x data %08x\n",
     VAR_10, VAR_13 ? VAR_13->name : "", VAR_9, VAR_12 ? VAR_12->name : "",
     VAR_4, VAR_11, VAR_7);

 if (VAR_4 < FUNC_0(VAR_3->chan)) {
  switch (VAR_11) {
  case 0x0080:
   FUNC_1(VAR_3->chan[VAR_4], VAR_0);
   break;
  default:
   break;
  }
 }

 FUNC_5(VAR_6, 0x610020, 0x00010000 << VAR_4);
 FUNC_5(VAR_6, 0x610080 + (VAR_4 * 0x08), 0x90000000);
}
