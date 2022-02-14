
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_8__ {int duallink_transition_clk; int fptablepointer; int fpxlatetableptr; int xlatwidth; int lvdsmanufacturerpointer; int fpxlatemanufacturertableptr; } ;
struct TYPE_5__ {int crt; int tv; int panel; } ;
struct TYPE_7__ {int mem_init_tbl_ptr; int sdr_seq_tbl_ptr; int ddr_seq_tbl_ptr; int lvds_single_a_script_ptr; TYPE_1__ i2c_indices; } ;
struct TYPE_6__ {int output0_script_ptr; int output1_script_ptr; } ;
struct nvbios {int* data; int digital_min_front_porch; int fmaxvco; int fminvco; int feature_byte; int old_style_init; int init_script_tbls_ptr; int extra_init_script_tbl_ptr; int pll_limit_tbl_ptr; TYPE_4__ fp; TYPE_3__ legacy; TYPE_2__ tmds; } ;
struct nouveau_drm {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_drm*,char*) ;
 int FUNC_1 (struct nouveau_drm*,char*,int,int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 struct nouveau_drm* FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (int*,int) ;
 int FUNC_6 (struct nvbios*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_2, struct nvbios *VAR_3, unsigned int VAR_4)
{
 struct nouveau_drm *VAR_5 = FUNC_4(VAR_2);
 uint8_t *VAR_6 = &VAR_3->data[VAR_4], VAR_7, VAR_8;
 uint16_t VAR_9;
 uint16_t VAR_10, VAR_11;


 VAR_3->digital_min_front_porch = 0x4b;
 VAR_3->fmaxvco = 256000;
 VAR_3->fminvco = 128000;
 VAR_3->fp.duallink_transition_clk = 90000;

 VAR_7 = VAR_6[5];
 VAR_8 = VAR_6[6];

 FUNC_1(VAR_5, "BMP version %d.%d\n",
   VAR_7, VAR_8);





 if (VAR_7 < 5)
  *(uint16_t *)&VAR_3->data[0x36] = 0;






 if ((VAR_7 < 5 && VAR_8 != 1) || VAR_7 > 5) {
  FUNC_0(VAR_5, "You have an unsupported BMP version. "
    "Please send in your bios\n");
  return -VAR_1;
 }

 if (VAR_7 == 0)

  return 0;
 else if (VAR_7 == 1)
  VAR_9 = 44;
 else if (VAR_7 == 2)
  VAR_9 = 48;
 else if (VAR_7 == 3)
  VAR_9 = 54;

 else if (VAR_7 == 4 || VAR_8 < 0x1)

  VAR_9 = 62;

 else if (VAR_8 < 0x6)
  VAR_9 = 67;
 else if (VAR_8 < 0x10)
  VAR_9 = 75;
 else if (VAR_8 == 0x10)
  VAR_9 = 89;
 else if (VAR_8 < 0x14)
  VAR_9 = 118;
 else if (VAR_8 < 0x24)





  VAR_9 = 123;
 else if (VAR_8 < 0x27)




  VAR_9 = 144;
 else




  VAR_9 = 158;


 if (FUNC_5(VAR_6, 8)) {
  FUNC_0(VAR_5, "Bad BMP checksum\n");
  return -VAR_0;
 }







 VAR_3->feature_byte = VAR_6[9];

 if (VAR_7 < 5 || VAR_8 < 0x10)
  VAR_3->old_style_init = 1;
 VAR_10 = 18;
 if (VAR_7 < 2)
  VAR_10 -= 4;
 VAR_3->init_script_tbls_ptr = FUNC_2(VAR_6[VAR_10]);
 VAR_3->extra_init_script_tbl_ptr = FUNC_2(VAR_6[VAR_10 + 2]);

 if (VAR_7 > 2) {
  VAR_3->legacy.mem_init_tbl_ptr = FUNC_2(VAR_6[24]);
  VAR_3->legacy.sdr_seq_tbl_ptr = FUNC_2(VAR_6[26]);
  VAR_3->legacy.ddr_seq_tbl_ptr = FUNC_2(VAR_6[28]);
 }

 VAR_11 = 0x48;
 if (VAR_9 > 61)
  VAR_11 = VAR_4 + 54;
 VAR_3->legacy.i2c_indices.crt = VAR_3->data[VAR_11];
 VAR_3->legacy.i2c_indices.tv = VAR_3->data[VAR_11 + 1];
 VAR_3->legacy.i2c_indices.panel = VAR_3->data[VAR_11 + 2];

 if (VAR_9 > 74) {
  VAR_3->fmaxvco = FUNC_3(VAR_6[67]);
  VAR_3->fminvco = FUNC_3(VAR_6[71]);
 }
 if (VAR_9 > 88)
  FUNC_6(VAR_3, VAR_4 + 75);
 if (VAR_9 > 94) {
  VAR_3->tmds.output0_script_ptr = FUNC_2(VAR_6[89]);
  VAR_3->tmds.output1_script_ptr = FUNC_2(VAR_6[91]);





  VAR_3->legacy.lvds_single_a_script_ptr = FUNC_2(VAR_6[95]);
 }
 if (VAR_9 > 108) {
  VAR_3->fp.fptablepointer = FUNC_2(VAR_6[105]);
  VAR_3->fp.fpxlatetableptr = FUNC_2(VAR_6[107]);
  VAR_3->fp.xlatwidth = 1;
 }
 if (VAR_9 > 120) {
  VAR_3->fp.lvdsmanufacturerpointer = FUNC_2(VAR_6[117]);
  VAR_3->fp.fpxlatemanufacturertableptr = FUNC_2(VAR_6[119]);
 }





 if (VAR_9 > 157)
  VAR_3->fp.duallink_transition_clk = FUNC_2(VAR_6[156]) * 10;

 return 0;
}
