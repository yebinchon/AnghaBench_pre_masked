
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


 int FUNC_0 (struct nvkm_device*,int const,int,int const) ;
 int FUNC_1 (struct nvkm_device*,int const,int) ;
 int FUNC_2 (struct packed_hdmi_infoframe*,int*,int) ;

void
FUNC_3(struct nvkm_ior *VAR_0, int VAR_1, bool VAR_2, u8 VAR_3,
  u8 VAR_4, u8 *VAR_5, u8 VAR_6, u8 *VAR_7, u8 VAR_8)
{
 struct nvkm_device *VAR_9 = VAR_0->disp->engine.subdev.device;
 const u32 VAR_10 = 0x40000000 * VAR_2 |
    VAR_3 << 16 |
    VAR_4;
 const u32 VAR_11 = VAR_1 * 0x800;
 const u32 VAR_12 = VAR_1 * 0x400;
 struct packed_hdmi_infoframe VAR_13;
 struct packed_hdmi_infoframe VAR_14;

 FUNC_2(&VAR_13, VAR_5, VAR_6);
 FUNC_2(&VAR_14, VAR_7, VAR_8);

 if (!(VAR_10 & 0x40000000)) {
  FUNC_0(VAR_9, 0x616798 + VAR_11, 0x40000000, 0x00000000);
  FUNC_0(VAR_9, 0x690100 + VAR_12, 0x00000001, 0x00000000);
  FUNC_0(VAR_9, 0x6900c0 + VAR_12, 0x00000001, 0x00000000);
  FUNC_0(VAR_9, 0x690000 + VAR_12, 0x00000001, 0x00000000);
  return;
 }


 FUNC_0(VAR_9, 0x690000 + VAR_12, 0x00000001, 0x00000000);
 if (VAR_6) {
  FUNC_1(VAR_9, 0x690008 + VAR_12, VAR_13.header);
  FUNC_1(VAR_9, 0x69000c + VAR_12, VAR_13.subpack0_low);
  FUNC_1(VAR_9, 0x690010 + VAR_12, VAR_13.subpack0_high);
  FUNC_1(VAR_9, 0x690014 + VAR_12, VAR_13.subpack1_low);
  FUNC_1(VAR_9, 0x690018 + VAR_12, VAR_13.subpack1_high);
  FUNC_0(VAR_9, 0x690000 + VAR_12, 0x00000001, 0x00000001);
 }


 FUNC_0(VAR_9, 0x690100 + VAR_12, 0x00010001, 0x00000000);
 if (VAR_8) {
  FUNC_1(VAR_9, 0x690108 + VAR_12, VAR_14.header);
  FUNC_1(VAR_9, 0x69010c + VAR_12, VAR_14.subpack0_low);
  FUNC_1(VAR_9, 0x690110 + VAR_12, VAR_14.subpack0_high);

  FUNC_0(VAR_9, 0x690100 + VAR_12, 0x00000001, 0x00000001);
 }



 FUNC_0(VAR_9, 0x6900c0 + VAR_12, 0x00000001, 0x00000000);
 FUNC_1(VAR_9, 0x6900cc + VAR_12, 0x00000010);
 FUNC_0(VAR_9, 0x6900c0 + VAR_12, 0x00000001, 0x00000001);


 FUNC_1(VAR_9, 0x690080 + VAR_12, 0x82000000);


 FUNC_0(VAR_9, 0x616798 + VAR_11, 0x401f007f, VAR_10);
}
