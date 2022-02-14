
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_devinit {struct nvkm_subdev subdev; } ;
struct nvkm_device {struct nvkm_bios* bios; } ;
struct nvkm_bios {int dummy; } ;
struct io_mapping {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*) ;
 int FUNC_2 (struct io_mapping*) ;
 struct io_mapping* FUNC_3 (struct nvkm_device*) ;
 scalar_t__ FUNC_4 (struct io_mapping*,int) ;
 int FUNC_5 (struct io_mapping*,int,scalar_t__) ;
 int FUNC_6 (struct io_mapping*,int,scalar_t__) ;
 int FUNC_7 (struct nvkm_bios*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_9 (struct nvkm_subdev*,char*) ;
 int FUNC_10 (struct nvkm_device*,int,int,int) ;
 int FUNC_11 (struct nvkm_device*,int) ;
 int FUNC_12 (struct nvkm_device*,int ,int) ;
 int FUNC_13 (struct nvkm_device*,int ,scalar_t__) ;
 int FUNC_14 (struct nvkm_device*,int ,int,int) ;

__attribute__((used)) static void
FUNC_15(struct nvkm_devinit *VAR_13)
{
 static const u8 VAR_14[][2] = {
  { 0x24, 0x00 },
  { 0x28, 0x00 },
  { 0x24, 0x01 },
  { 0x1f, 0x00 },
  { 0x0f, 0x00 },
  { 0x17, 0x00 },
  { 0x06, 0x00 },
  { 0x00, 0x00 }
 };
 struct nvkm_subdev *VAR_15 = &VAR_13->subdev;
 struct nvkm_device *VAR_16 = VAR_15->device;
 struct nvkm_bios *VAR_17 = VAR_16->bios;
 struct io_mapping *VAR_18;
 u32 VAR_19 = 0xdeadbeef;
 u16 VAR_20;
 u8 VAR_21, VAR_22[2];
 int VAR_23, VAR_24;


 VAR_18 = FUNC_3(VAR_16);
 if (!VAR_18) {
  FUNC_9(VAR_15, "failed to map fb\n");
  return;
 }

 VAR_21 = (FUNC_11(VAR_16, 0x101000) & 0x0000003c) >> 2;
 if ((VAR_20 = FUNC_1(VAR_17))) {
  VAR_22[0] = FUNC_7(VAR_17, VAR_20 + 2 * VAR_21 + 0);
  VAR_22[1] = FUNC_7(VAR_17, VAR_20 + 2 * VAR_21 + 1);
 } else {
  VAR_22[0] = VAR_14[VAR_21][0];
  VAR_22[1] = VAR_14[VAR_21][1];
 }


 FUNC_14(VAR_16, 0, 1, FUNC_12(VAR_16, 0, 1) | 0x20);

 if (FUNC_11(VAR_16, VAR_0) & VAR_7)
  goto out;

 FUNC_10(VAR_16, VAR_11, VAR_12, 0);


 if (VAR_20) {
  for (VAR_23 = 0, VAR_20 += 0x10; VAR_23 < 8; VAR_23++, VAR_20 += 4) {
   u32 VAR_25 = FUNC_8(VAR_17, VAR_20);
   FUNC_13(VAR_16, FUNC_0(VAR_23), VAR_25);
  }
 }


 FUNC_10(VAR_16, VAR_0, 0x3f, VAR_22[0]);

 if (VAR_22[1] & 0x80)
  FUNC_10(VAR_16, VAR_8, 0, VAR_9);

 FUNC_10(VAR_16, VAR_10, 0x700001, (VAR_22[1] & 1) << 20);
 FUNC_10(VAR_16, VAR_10, 0, 1);


 for (VAR_23 = 0; VAR_23 < 4; VAR_23++)
  FUNC_5(VAR_18, 4 * VAR_23, VAR_19);

 if (FUNC_4(VAR_18, 0xc) != VAR_19)
  FUNC_10(VAR_16, VAR_0,
     VAR_6, 0);


 VAR_24 = FUNC_11(VAR_16, VAR_0) & VAR_1;

 if (VAR_24 == VAR_3 &&
     (!FUNC_6(VAR_18, 0x1000000, ++VAR_19) ||
      !FUNC_6(VAR_18, 0, ++VAR_19)))
  FUNC_10(VAR_16, VAR_0, VAR_1,
     VAR_2);

 if (VAR_24 == VAR_2 &&
     !FUNC_6(VAR_18, 0x800000, ++VAR_19))
  FUNC_10(VAR_16, VAR_0, VAR_1,
     VAR_5);

 if (!FUNC_6(VAR_18, 0x400000, ++VAR_19))
  FUNC_10(VAR_16, VAR_0, VAR_1,
     VAR_4);

out:

 FUNC_14(VAR_16, 0, 1, FUNC_12(VAR_16, 0, 1) & ~0x20);
 FUNC_2(VAR_18);
}
