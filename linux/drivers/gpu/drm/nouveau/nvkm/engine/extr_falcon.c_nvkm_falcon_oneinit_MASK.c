
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct TYPE_6__ {int limit; } ;
struct TYPE_5__ {int limit; } ;
struct TYPE_4__ {struct nvkm_subdev subdev; } ;
struct nvkm_falcon {int addr; int version; int secret; TYPE_3__ data; TYPE_2__ code; TYPE_1__ engine; } ;
struct nvkm_engine {int dummy; } ;
struct nvkm_device {int chipset; } ;


 int FUNC_0 (struct nvkm_subdev*,char*,int) ;
 struct nvkm_falcon* FUNC_1 (struct nvkm_engine*) ;
 int FUNC_2 (struct nvkm_device*,int const) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_engine *VAR_0)
{
 struct nvkm_falcon *VAR_1 = FUNC_1(VAR_0);
 struct nvkm_subdev *VAR_2 = &VAR_1->engine.subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 const u32 VAR_4 = VAR_1->addr;
 u32 VAR_5;


 if (VAR_3->chipset < 0xa3 ||
     VAR_3->chipset == 0xaa || VAR_3->chipset == 0xac) {
  VAR_1->version = 0;
  VAR_1->secret = (VAR_1->addr == 0x087000) ? 1 : 0;
 } else {
  VAR_5 = FUNC_2(VAR_3, VAR_4 + 0x12c);
  VAR_1->version = (VAR_5 & 0x0000000f);
  VAR_1->secret = (VAR_5 & 0x00000030) >> 4;
 }

 VAR_5 = FUNC_2(VAR_3, VAR_4 + 0x108);
 VAR_1->code.limit = (VAR_5 & 0x000001ff) << 8;
 VAR_1->data.limit = (VAR_5 & 0x0003fe00) >> 1;

 FUNC_0(VAR_2, "falcon version: %d\n", VAR_1->version);
 FUNC_0(VAR_2, "secret level: %d\n", VAR_1->secret);
 FUNC_0(VAR_2, "code limit: %d\n", VAR_1->code.limit);
 FUNC_0(VAR_2, "data limit: %d\n", VAR_1->data.limit);
 return 0;
}
