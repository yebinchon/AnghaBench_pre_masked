
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_gpio {TYPE_1__ subdev; } ;
struct nvkm_device {struct nvkm_bios* bios; } ;
struct nvkm_bios {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvkm_bios*,int ,int,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (struct nvkm_bios*,int ) ;
 int FUNC_2 (struct nvkm_gpio*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct nvkm_device*,int,int,scalar_t__) ;

void
FUNC_4(struct nvkm_gpio *VAR_1, u8 VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_1->subdev.device;
 struct nvkm_bios *VAR_4 = VAR_3->bios;
 u8 VAR_5, VAR_6;
 u16 VAR_7;
 int VAR_8 = -1;

 while ((VAR_7 = FUNC_0(VAR_4, 0, ++VAR_8, &VAR_5, &VAR_6))) {
  u32 VAR_9 = FUNC_1(VAR_4, VAR_7);
  u8 VAR_10 = (VAR_9 & 0x0000003f);
  u8 VAR_11 = !!(VAR_9 & 0x00000080);
  u8 VAR_12 = (VAR_9 & 0x0000ff00) >> 8;
  u8 VAR_13 = (VAR_9 & 0x00ff0000) >> 16;
  u8 VAR_14 = (VAR_9 & 0x1f000000) >> 24;

  if ( VAR_12 == VAR_0 ||
      (VAR_2 != VAR_0 && VAR_2 != VAR_12))
   continue;

  FUNC_2(VAR_1, 0, VAR_12, VAR_10, VAR_11);

  FUNC_3(VAR_3, 0x00d610 + (VAR_10 * 4), 0xff, VAR_13);
  if (VAR_14--)
   FUNC_3(VAR_3, 0x00d740 + (VAR_14 * 4), 0xff, VAR_10);
 }
}
