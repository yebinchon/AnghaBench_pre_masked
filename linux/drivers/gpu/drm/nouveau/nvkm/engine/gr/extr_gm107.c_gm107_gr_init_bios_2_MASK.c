
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {struct nvkm_bios* bios; } ;
struct nvkm_bios {int dummy; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct TYPE_4__ {TYPE_1__ engine; } ;
struct gf100_gr {TYPE_2__ base; } ;
struct bit_entry {int version; int length; scalar_t__ offset; } ;


 int FUNC_0 (struct nvkm_bios*,char,struct bit_entry*) ;
 int FUNC_1 (struct nvkm_subdev*,scalar_t__) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct nvkm_bios*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct nvkm_device*,int) ;
 int FUNC_5 (struct nvkm_device*,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct gf100_gr *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->base.engine.subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;
 struct nvkm_bios *VAR_3 = VAR_2->bios;
 struct bit_entry VAR_4;
 if (!FUNC_0(VAR_3, 'P', &VAR_4) &&
     VAR_4.version == 2 && VAR_4.length >= 0x2c) {
  u32 VAR_5 = FUNC_3(VAR_3, VAR_4.offset + 0x28);
  if (VAR_5) {
   u8 VAR_6 = FUNC_2(VAR_3, VAR_5 + 0x00);
   u8 VAR_7 = FUNC_2(VAR_3, VAR_5 + 0x01);
   if (VAR_6 == 0x20 && VAR_7 >= 8) {
    VAR_5 = FUNC_3(VAR_3, VAR_5 + 0x04);
    if (VAR_5) {
     u32 VAR_8 = FUNC_4(VAR_2, 0x619444);
     FUNC_1(VAR_1, VAR_5);
     FUNC_5(VAR_2, 0x619444, VAR_8);
    }
   }
  }
 }
}
