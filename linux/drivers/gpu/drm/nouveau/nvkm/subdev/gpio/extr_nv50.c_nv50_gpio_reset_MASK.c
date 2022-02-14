
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_gpio {TYPE_1__ subdev; } ;
struct nvkm_device {struct nvkm_bios* bios; } ;
struct nvkm_bios {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_bios*,int ,int,int*,int*) ;
 int FUNC_1 (struct nvkm_bios*,int ) ;
 int FUNC_2 (struct nvkm_gpio*,int ,int,int,int) ;
 int FUNC_3 (struct nvkm_device*,int,int,int) ;

void
FUNC_4(struct nvkm_gpio *VAR_1, u8 VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_1->subdev.device;
 struct nvkm_bios *VAR_4 = VAR_3->bios;
 u8 VAR_5, VAR_6;
 u16 VAR_7;
 int VAR_8 = -1;

 while ((VAR_7 = FUNC_0(VAR_4, 0, ++VAR_8, &VAR_5, &VAR_6))) {
  static const u32 VAR_9[] = { 0xe100, 0xe28c };
  u32 VAR_10 = FUNC_1(VAR_4, VAR_7);
  u8 VAR_11 = (VAR_10 & 0x0000001f);
  u8 VAR_12 = (VAR_10 & 0x0000ff00) >> 8;
  u8 VAR_13 = !!(VAR_10 & 0x01000000);
  u8 VAR_14 = !!(VAR_10 & 0x02000000);
  u8 VAR_15 = !!(VAR_10 & 0x04000000);
  u32 VAR_16 = (VAR_15 << 16) | VAR_14;
  u32 VAR_17 = VAR_9[VAR_11 >> 4];
  u32 VAR_18 = VAR_11 & 0x0f;

  if ( VAR_12 == VAR_0 ||
      (VAR_2 != VAR_0 && VAR_2 != VAR_12))
   continue;

  FUNC_2(VAR_1, 0, VAR_12, VAR_11, VAR_13);

  FUNC_3(VAR_3, VAR_17, 0x00010001 << VAR_18, VAR_16 << VAR_18);
 }
}
