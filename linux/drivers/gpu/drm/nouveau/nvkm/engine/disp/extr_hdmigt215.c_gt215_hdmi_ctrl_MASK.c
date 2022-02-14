
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct packed_hdmi_infoframe {int header; int subpack0_low; int subpack0_high; int subpack1_low; int subpack1_high; } ;
struct nvkm_ior {TYPE_3__* disp; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;


 int FUNC_0 (struct nvkm_ior*) ;
 int FUNC_1 (struct nvkm_device*,int,int,int const) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;
 int FUNC_3 (struct packed_hdmi_infoframe*,int*,int) ;

void
FUNC_4(struct nvkm_ior *VAR_0, int VAR_1, bool VAR_2, u8 VAR_3,
  u8 VAR_4, u8 *VAR_5, u8 VAR_6, u8 *VAR_7, u8 VAR_8)
{
 struct nvkm_device *VAR_9 = VAR_0->disp->engine.subdev.device;
 const u32 VAR_10 = 0x40000000 * VAR_2 |
    0x1f000000 |
    VAR_3 << 16 |
    VAR_4;
 const u32 VAR_11 = FUNC_0(VAR_0);
 struct packed_hdmi_infoframe VAR_12;
 struct packed_hdmi_infoframe VAR_13;

 FUNC_3(&VAR_12, VAR_5, VAR_6);
 FUNC_3(&VAR_13, VAR_7, VAR_8);

 if (!(VAR_10 & 0x40000000)) {
  FUNC_1(VAR_9, 0x61c5a4 + VAR_11, 0x40000000, 0x00000000);
  FUNC_1(VAR_9, 0x61c53c + VAR_11, 0x00000001, 0x00000000);
  FUNC_1(VAR_9, 0x61c520 + VAR_11, 0x00000001, 0x00000000);
  FUNC_1(VAR_9, 0x61c500 + VAR_11, 0x00000001, 0x00000000);
  return;
 }


 FUNC_1(VAR_9, 0x61c520 + VAR_11, 0x00000001, 0x00000000);
 if (VAR_6) {
  FUNC_2(VAR_9, 0x61c528 + VAR_11, VAR_12.header);
  FUNC_2(VAR_9, 0x61c52c + VAR_11, VAR_12.subpack0_low);
  FUNC_2(VAR_9, 0x61c530 + VAR_11, VAR_12.subpack0_high);
  FUNC_2(VAR_9, 0x61c534 + VAR_11, VAR_12.subpack1_low);
  FUNC_2(VAR_9, 0x61c538 + VAR_11, VAR_12.subpack1_high);
  FUNC_1(VAR_9, 0x61c520 + VAR_11, 0x00000001, 0x00000001);
 }


 FUNC_1(VAR_9, 0x61c500 + VAR_11, 0x00000001, 0x00000000);
 FUNC_2(VAR_9, 0x61c508 + VAR_11, 0x000a0184);
 FUNC_2(VAR_9, 0x61c50c + VAR_11, 0x00000071);
 FUNC_2(VAR_9, 0x61c510 + VAR_11, 0x00000000);
 FUNC_1(VAR_9, 0x61c500 + VAR_11, 0x00000001, 0x00000001);


 FUNC_1(VAR_9, 0x61c53c + VAR_11, 0x00010001, 0x00010000);
 if (VAR_8) {
  FUNC_2(VAR_9, 0x61c544 + VAR_11, VAR_13.header);
  FUNC_2(VAR_9, 0x61c548 + VAR_11, VAR_13.subpack0_low);
  FUNC_2(VAR_9, 0x61c54c + VAR_11, VAR_13.subpack0_high);



  FUNC_1(VAR_9, 0x61c53c + VAR_11, 0x00010001, 0x00010001);
 }

 FUNC_1(VAR_9, 0x61c5d0 + VAR_11, 0x00070001, 0x00010001);
 FUNC_1(VAR_9, 0x61c568 + VAR_11, 0x00010101, 0x00000000);
 FUNC_1(VAR_9, 0x61c578 + VAR_11, 0x80000000, 0x80000000);


 FUNC_1(VAR_9, 0x61733c, 0x00100000, 0x00100000);
 FUNC_1(VAR_9, 0x61733c, 0x10000000, 0x10000000);
 FUNC_1(VAR_9, 0x61733c, 0x00100000, 0x00000000);


 FUNC_1(VAR_9, 0x61c5a4 + VAR_11, 0x5f1f007f, VAR_10);
}
