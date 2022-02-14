
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_subdev subdev; } ;
struct TYPE_3__ {TYPE_2__ engine; } ;
struct nv50_disp {int * chan; TYPE_1__ base; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nvkm_subdev*,char*,int,int,int,int,int) ;
 int FUNC_3 (struct nvkm_device*,int) ;
 int FUNC_4 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct nv50_disp *VAR_1, int VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_1->base.engine.subdev;
 struct nvkm_device *VAR_4 = VAR_3->device;
 u32 VAR_5 = FUNC_3(VAR_4, 0x6111f0 + (VAR_2 * 12));
 u32 VAR_6 = FUNC_3(VAR_4, 0x6111f4 + (VAR_2 * 12));
 u32 VAR_7 = FUNC_3(VAR_4, 0x6111f8 + (VAR_2 * 12));

 FUNC_2(VAR_3, "chid %d mthd %04x data %08x %08x %08x\n",
     VAR_2, (VAR_5 & 0x0000ffc), VAR_6, VAR_5, VAR_7);

 if (VAR_2 < FUNC_0(VAR_1->chan)) {
  switch (VAR_5 & 0xffc) {
  case 0x0080:
   FUNC_1(VAR_1->chan[VAR_2], VAR_0);
   break;
  default:
   break;
  }
 }

 FUNC_4(VAR_4, 0x61009c, (1 << VAR_2));
 FUNC_4(VAR_4, 0x6111f0 + (VAR_2 * 12), 0x90000000);
}
