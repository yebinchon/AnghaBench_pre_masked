
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ state; int srl_ts_clk_mod_cnts; int srl_ts_clk_frq; int ts_byte_clk_manual_setting; int is_ts_backwards_compatible_mode; int fixed_clk_mode; int is_cable_input; int en_fef_intmtnt_base; int en_fef_intmtnt_lite; int blind_tune_dvbt2_first; scalar_t__ diver_mode; struct cxd2880_tnrdmd* diver_sub; } ;
typedef enum cxd2880_tnrdmd_serial_ts_clk { ____Placeholder_cxd2880_tnrdmd_serial_ts_clk } cxd2880_tnrdmd_serial_ts_clk ;
typedef enum cxd2880_tnrdmd_clockmode { ____Placeholder_cxd2880_tnrdmd_clockmode } cxd2880_tnrdmd_clockmode ;
typedef enum cxd2880_tnrdmd_cfg_id { ____Placeholder_cxd2880_tnrdmd_cfg_id } cxd2880_tnrdmd_cfg_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int ,int,int,int,int) ;

int FUNC_1(struct cxd2880_tnrdmd *VAR_8,
      enum cxd2880_tnrdmd_cfg_id VAR_9,
      int VAR_10)
{
 int VAR_11 = 0;
 u8 VAR_12[2] = { 0 };
 u8 VAR_13 = 0;

 if (!VAR_8)
  return -VAR_7;

 if (VAR_8->state != VAR_6 &&
     VAR_8->state != VAR_5)
  return -VAR_7;

 switch (VAR_9) {
 case 147:
  if (VAR_8->state != VAR_6)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0xc4,
        VAR_10 ? 0x00 : 0x10,
        0x10);
  if (VAR_11)
   return VAR_11;
  break;

 case 134:
  if (VAR_8->state != VAR_6)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0xc5,
        VAR_10 ? 0x00 : 0x02,
        0x02);
  if (VAR_11)
   return VAR_11;
  break;

 case 135:
  if (VAR_8->state != VAR_6)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0xc5,
        VAR_10 ? 0x00 : 0x04,
        0x04);
  if (VAR_11)
   return VAR_11;
  break;

 case 141:
  if (VAR_8->state != VAR_6)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0xcb,
        VAR_10 ? 0x00 : 0x01,
        0x01);
  if (VAR_11)
   return VAR_11;
  break;

 case 148:
  if (VAR_8->state != VAR_6)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0xc5,
        VAR_10 ? 0x01 : 0x00,
        0x01);
  if (VAR_11)
   return VAR_11;
  break;

 case 144:
  if (VAR_8->state != VAR_6)
   return -VAR_7;

  VAR_8->srl_ts_clk_mod_cnts = VAR_10 ? 0x01 : 0x00;
  break;

 case 142:
  if (VAR_8->state != VAR_6)
   return -VAR_7;

  if (VAR_10 < 0 || VAR_10 > 0x1f)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0xc6, VAR_10,
        0x1f);
  if (VAR_11)
   return VAR_11;
  break;

 case 133:
  if (VAR_8->state != VAR_6)
   return -VAR_7;

  if (VAR_10 < 0 || VAR_10 > 0x1f)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0xc8, VAR_10,
        0x1f);
  if (VAR_11)
   return VAR_11;
  break;

 case 140:
  if (VAR_8->state != VAR_6)
   return -VAR_7;

  if (VAR_10 < 0 || VAR_10 > 0x1f)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0xc9, VAR_10,
        0x1f);
  if (VAR_11)
   return VAR_11;
  break;

 case 139:
  if (VAR_8->state != VAR_6)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0x91,
        VAR_10 ? 0x01 : 0x00,
        0x01);
  if (VAR_11)
   return VAR_11;
  break;

 case 138:
  if (VAR_8->state != VAR_6)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_1,
        0x00, 0x51, VAR_10,
        0x3f);
  if (VAR_11)
   return VAR_11;
  break;

 case 136:
  if (VAR_8->state != VAR_6)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_1,
        0x00, 0x50,
        VAR_10 ? 0x80 : 0x00,
        0x80);
  if (VAR_11)
   return VAR_11;
  break;

 case 137:
  if (VAR_8->state != VAR_6)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_1,
        0x00, 0x50, VAR_10,
        0x3f);
  if (VAR_11)
   return VAR_11;
  break;

 case 143:
  if (VAR_8->state != VAR_6)
   return -VAR_7;

  if (VAR_10 < 0 || VAR_10 > 1)
   return -VAR_7;

  VAR_8->srl_ts_clk_frq =
      (enum cxd2880_tnrdmd_serial_ts_clk)VAR_10;
  break;

 case 145:
  if (VAR_8->state != VAR_6)
   return -VAR_7;

  if (VAR_10 < 0 || VAR_10 > 0xff)
   return -VAR_7;

  VAR_8->ts_byte_clk_manual_setting = VAR_10;

  break;

 case 128:
  if (VAR_8->state != VAR_6)
   return -VAR_7;

  if (VAR_10 < 0 || VAR_10 > 7)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0xd6, VAR_10,
        0x07);
  if (VAR_11)
   return VAR_11;

  break;

 case 132:
  if (VAR_8->state != VAR_6)
   return -VAR_7;

  VAR_8->is_ts_backwards_compatible_mode = VAR_10 ? 1 : 0;

  break;

 case 146:
  if (VAR_10 < 0 || VAR_10 > 0x1000)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0x22,
        VAR_10 ? 0x01 : 0x00,
        0x01);
  if (VAR_11)
   return VAR_11;

  VAR_12[0] = (VAR_10 >> 8) & 0x1f;
  VAR_12[1] = VAR_10 & 0xff;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0x23,
        VAR_12[0], 0x1f);
  if (VAR_11)
   return VAR_11;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0x24,
        VAR_12[1], 0xff);
  if (VAR_11)
   return VAR_11;

  break;

 case 151:
  VAR_12[0] = (VAR_10 >> 8) & 0xff;
  VAR_12[1] = VAR_10 & 0xff;
  VAR_11 =
      FUNC_0(VAR_8,
        VAR_1,
        0x00, 0x48, VAR_12[0],
        0xff);
  if (VAR_11)
   return VAR_11;
  VAR_11 =
      FUNC_0(VAR_8,
        VAR_1,
        0x00, 0x49, VAR_12[1],
        0xff);
  if (VAR_11)
   return VAR_11;
  break;

 case 149:
  VAR_12[0] = VAR_10 & 0x07;
  VAR_11 =
      FUNC_0(VAR_8,
        VAR_1,
        0x00, 0x4a, VAR_12[0],
        0x07);
  if (VAR_11)
   return VAR_11;
  break;

 case 150:
  VAR_12[0] = (VAR_10 & 0x07) << 3;
  VAR_11 =
      FUNC_0(VAR_8,
        VAR_1,
        0x00, 0x4a, VAR_12[0],
        0x38);
  if (VAR_11)
   return VAR_11;
  break;

 case 152:
  if (VAR_10 < VAR_3 ||
      VAR_10 > VAR_2)
   return -VAR_7;
  VAR_8->fixed_clk_mode = (enum cxd2880_tnrdmd_clockmode)VAR_10;
  break;

 case 161:
  VAR_8->is_cable_input = VAR_10 ? 1 : 0;
  break;

 case 159:
  VAR_8->en_fef_intmtnt_base = VAR_10 ? 1 : 0;
  break;

 case 158:
  VAR_8->en_fef_intmtnt_lite = VAR_10 ? 1 : 0;
  break;

 case 131:
  VAR_12[0] = (VAR_10 >> 8) & 0x07;
  VAR_12[1] = VAR_10 & 0xff;
  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0x99, VAR_12[0],
        0x07);
  if (VAR_11)
   return VAR_11;
  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0x9a, VAR_12[1],
        0xff);
  if (VAR_11)
   return VAR_11;
  break;

 case 130:
  VAR_12[0] = (VAR_10 >> 8) & 0x07;
  VAR_12[1] = VAR_10 & 0xff;
  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0x9b, VAR_12[0],
        0x07);
  if (VAR_11)
   return VAR_11;
  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0x9c, VAR_12[1],
        0xff);
  if (VAR_11)
   return VAR_11;
  break;

 case 129:
  VAR_12[0] = (VAR_10 >> 8) & 0x07;
  VAR_12[1] = VAR_10 & 0xff;
  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0x9d, VAR_12[0],
        0x07);
  if (VAR_11)
   return VAR_11;
  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x00, 0x9e, VAR_12[1],
        0xff);
  if (VAR_11)
   return VAR_11;
  break;

 case 162:
  VAR_8->blind_tune_dvbt2_first = VAR_10 ? 1 : 0;
  break;

 case 155:
  if (VAR_10 < 0 || VAR_10 > 31)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x10, 0x60,
        VAR_10 & 0x1f, 0x1f);
  if (VAR_11)
   return VAR_11;
  break;

 case 153:
  if (VAR_10 < 0 || VAR_10 > 7)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x10, 0x6f,
        VAR_10 & 0x07, 0x07);
  if (VAR_11)
   return VAR_11;
  break;

 case 160:
  if (VAR_10 < 0 || VAR_10 > 15)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x20, 0x72,
        VAR_10 & 0x0f, 0x0f);
  if (VAR_11)
   return VAR_11;
  break;

 case 157:
  if (VAR_10 < 0 || VAR_10 > 15)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x20, 0x6f,
        VAR_10 & 0x0f, 0x0f);
  if (VAR_11)
   return VAR_11;
  break;

 case 154:
  if (VAR_10 < 0 || VAR_10 > 15)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x10, 0x5c,
        VAR_10 & 0x0f, 0x0f);
  if (VAR_11)
   return VAR_11;
  break;

 case 156:
  if (VAR_10 < 0 || VAR_10 > 15)
   return -VAR_7;

  VAR_11 =
      FUNC_0(VAR_8,
        VAR_0,
        0x24, 0xdc,
        VAR_10 & 0x0f, 0x0f);
  if (VAR_11)
   return VAR_11;
  break;

 default:
  return -VAR_7;
 }

 if (VAR_13 &&
     VAR_8->diver_mode == VAR_4)
  VAR_11 = FUNC_1(VAR_8->diver_sub, VAR_9, VAR_10);

 return VAR_11;
}
