
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_4__ {int duallink_transition_clk; size_t xlated_entry; size_t lvdsmanufacturerpointer; int power_off_for_reset; int reset_after_pclk_change; int dual_link; int link_c_increment; int if_is_24bit; int strapless_is_24bit; int fpxlatemanufacturertableptr; } ;
struct TYPE_3__ {int lvds_single_a_script_ptr; } ;
struct nvbios {int chip_version; int* data; TYPE_2__ fp; TYPE_1__ legacy; } ;
struct nouveau_drm {struct nvbios vbios; } ;
struct lvdstableheader {int lvds_ver; size_t headerlen; int recordlen; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_device*,struct nvbios*) ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*,struct nvbios*,struct lvdstableheader*) ;

int FUNC_5(struct drm_device *VAR_1, int VAR_2, bool *VAR_3, bool *VAR_4)
{
 struct nouveau_drm *VAR_5 = FUNC_3(VAR_1);
 struct nvbios *VAR_6 = &VAR_5->vbios;
 int VAR_7 = FUNC_2(VAR_1, VAR_6), VAR_8 = 0;
 struct lvdstableheader VAR_9;
 uint16_t VAR_10;
 int VAR_11, VAR_12 = VAR_6->chip_version;

 VAR_11 = FUNC_4(VAR_1, VAR_6, &VAR_9);
 if (VAR_11)
  return VAR_11;

 switch (VAR_9.lvds_ver) {
 case 0x0a:
  VAR_8 = VAR_6->data[
     VAR_6->fp.fpxlatemanufacturertableptr +
     VAR_7];


  if (!VAR_2)
   break;

  if (VAR_12 < 0x25) {





   VAR_8 =
    (VAR_6->legacy.lvds_single_a_script_ptr & 1) ?
         2 : 0;
   if (VAR_2 >= VAR_6->fp.duallink_transition_clk)
    VAR_8++;
  } else if (VAR_12 < 0x30) {
   VAR_8 = 0;
  } else {

   VAR_8 = 0;
   if (VAR_2 >= VAR_6->fp.duallink_transition_clk)
    VAR_8 = 2;
   if (VAR_2 >= 140000)
    VAR_8 = 3;
  }





  break;
 case 0x30:
 case 0x40:
  VAR_8 = VAR_7;
  break;
 default:
  FUNC_0(VAR_5, "LVDS table revision not currently supported\n");
  return -VAR_0;
 }

 VAR_10 = VAR_6->fp.xlated_entry = VAR_6->fp.lvdsmanufacturerpointer + VAR_9.headerlen + VAR_9.recordlen * VAR_8;
 switch (VAR_9.lvds_ver) {
 case 0x0a:
  VAR_6->fp.power_off_for_reset = VAR_6->data[VAR_10] & 1;
  VAR_6->fp.reset_after_pclk_change = VAR_6->data[VAR_10] & 2;
  VAR_6->fp.dual_link = VAR_6->data[VAR_10] & 4;
  VAR_6->fp.link_c_increment = VAR_6->data[VAR_10] & 8;
  *VAR_4 = VAR_6->data[VAR_10] & 16;
  break;
 case 0x30:
 case 0x40:




  VAR_6->fp.power_off_for_reset = 1;
  VAR_6->fp.reset_after_pclk_change = 1;





  VAR_6->fp.dual_link = VAR_6->data[VAR_10] & 1;
  VAR_6->fp.if_is_24bit = VAR_6->data[VAR_10] & 2;
  VAR_6->fp.strapless_is_24bit = VAR_6->data[VAR_6->fp.lvdsmanufacturerpointer + 4];
  VAR_6->fp.duallink_transition_clk = FUNC_1(VAR_6->data[VAR_6->fp.lvdsmanufacturerpointer + 5]) * 10;
  break;
 }


 if (VAR_2 && (VAR_12 < 0x25 || VAR_12 > 0x28))
  VAR_6->fp.dual_link = (VAR_2 >= VAR_6->fp.duallink_transition_clk);

 *VAR_3 = VAR_6->fp.dual_link;

 return 0;
}
