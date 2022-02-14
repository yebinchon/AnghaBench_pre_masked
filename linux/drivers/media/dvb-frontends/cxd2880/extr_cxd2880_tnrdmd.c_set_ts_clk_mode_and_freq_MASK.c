
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int member_0; int member_1; int member_2; } ;
struct TYPE_7__ {int member_0; int member_1; int member_2; } ;
struct cxd2880_tnrdmd_ts_clk_cfg {int ts_clk_period; int srl_clk_mode; int srl_duty_mode; TYPE_2__ member_1; TYPE_1__ member_0; } ;
struct cxd2880_tnrdmd {int ts_byte_clk_manual_setting; size_t srl_ts_clk_mod_cnts; size_t srl_ts_clk_frq; TYPE_3__* io; scalar_t__ is_ts_backwards_compatible_mode; } ;
typedef enum cxd2880_dtv_sys { ____Placeholder_cxd2880_dtv_sys } cxd2880_dtv_sys ;
struct TYPE_9__ {int (* write_reg ) (TYPE_3__*,int ,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,int,int,int) ;
 int FUNC_1 (TYPE_3__*,int ,int,int) ;
 int FUNC_2 (TYPE_3__*,int ,int,int) ;
 int FUNC_3 (TYPE_3__*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct cxd2880_tnrdmd *VAR_3,
        enum cxd2880_dtv_sys VAR_4)
{
 int VAR_5;
 u8 VAR_6 = 0;
 struct cxd2880_tnrdmd_ts_clk_cfg VAR_7;
 u8 VAR_8 = 0;
 u8 VAR_9 = 0;
 u8 VAR_10 = 0;
 u8 VAR_11 = 0;

 static const struct cxd2880_tnrdmd_ts_clk_cfg VAR_12[2][2] = {
  {
   {3, 1, 8,},
   {0, 2, 16,}
  }, {
   {1, 1, 8,},
   {2, 2, 16,}
  }
 };

 if (!VAR_3)
  return -VAR_2;

 VAR_5 = VAR_3->io->write_reg(VAR_3->io,
         VAR_1,
         0x00, 0x00);
 if (VAR_5)
  return VAR_5;

 if (VAR_3->is_ts_backwards_compatible_mode) {
  VAR_6 = 1;
  VAR_8 = 1;
  VAR_9 = 1;
 } else {
  VAR_6 = 0;
  VAR_8 = 0;
  VAR_9 = 0;
 }

 if (VAR_3->ts_byte_clk_manual_setting) {
  VAR_10 = 1;
  VAR_8 = 0;
 }

 VAR_5 = FUNC_0(VAR_3->io,
          VAR_1,
          0xd3, VAR_8, 0x01);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_3->io,
          VAR_1,
          0xde, VAR_9, 0x01);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_3->io,
          VAR_1,
          0xda, VAR_10, 0x01);
 if (VAR_5)
  return VAR_5;

 VAR_7 = VAR_12[VAR_3->srl_ts_clk_mod_cnts]
        [VAR_3->srl_ts_clk_frq];

 if (VAR_3->ts_byte_clk_manual_setting)
  VAR_7.ts_clk_period = VAR_3->ts_byte_clk_manual_setting;

 VAR_5 = FUNC_0(VAR_3->io,
          VAR_1,
          0xc4, VAR_7.srl_clk_mode, 0x03);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_3->io,
          VAR_1,
          0xd1, VAR_7.srl_duty_mode, 0x03);
 if (VAR_5)
  return VAR_5;

 VAR_5 = VAR_3->io->write_reg(VAR_3->io,
         VAR_1, 0xd9,
         VAR_7.ts_clk_period);
 if (VAR_5)
  return VAR_5;

 VAR_11 = VAR_6 ? 0x00 : 0x01;

 if (VAR_4 == VAR_0) {
  VAR_5 = VAR_3->io->write_reg(VAR_3->io,
          VAR_1,
          0x00, 0x10);
  if (VAR_5)
   return VAR_5;

  VAR_5 =
      FUNC_0(VAR_3->io,
         VAR_1,
         0x66, VAR_11, 0x01);
 }

 return VAR_5;
}
