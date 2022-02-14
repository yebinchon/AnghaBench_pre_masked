
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct cxd2880_tnrdmd_pid_ftr_cfg {int dummy; } ;
struct TYPE_4__ {int xtal_share_type; scalar_t__ ts_output_if; } ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; int clk_mode; struct cxd2880_tnrdmd_pid_ftr_cfg pid_ftr_cfg; scalar_t__ pid_ftr_cfg_en; TYPE_1__ create_param; struct cxd2880_tnrdmd* diver_sub; int is_cable_input; TYPE_2__* io; } ;
typedef enum cxd2880_tnrdmd_clockmode { ____Placeholder_cxd2880_tnrdmd_clockmode } cxd2880_tnrdmd_clockmode ;
typedef enum cxd2880_dtv_sys { ____Placeholder_cxd2880_dtv_sys } cxd2880_dtv_sys ;
typedef enum cxd2880_dtv_bandwidth { ____Placeholder_cxd2880_dtv_bandwidth } cxd2880_dtv_bandwidth ;
struct TYPE_5__ {int (* write_reg ) (TYPE_2__*,int ,int,int) ;int (* read_regs ) (TYPE_2__*,int ,int,int*,int) ;} ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;




 int VAR_7 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*) ;
 int FUNC_3 (struct cxd2880_tnrdmd*,struct cxd2880_tnrdmd_pid_ftr_cfg*) ;
 int FUNC_4 (struct cxd2880_tnrdmd*,int) ;
 int FUNC_5 (struct cxd2880_tnrdmd*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int,int) ;
 int FUNC_7 (TYPE_2__*,int ,int,int*,int) ;
 int FUNC_8 (struct cxd2880_tnrdmd*,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (struct cxd2880_tnrdmd*,int,int,int,int ,int) ;
 int FUNC_11 (struct cxd2880_tnrdmd*,int,int,int) ;

int FUNC_12(struct cxd2880_tnrdmd *VAR_8,
     enum cxd2880_dtv_sys VAR_9,
     u32 VAR_10,
     enum cxd2880_dtv_bandwidth
     VAR_11, u8 VAR_12,
     u8 VAR_13)
{
 u8 VAR_14;
 enum cxd2880_tnrdmd_clockmode VAR_15 =
    VAR_1;
 int VAR_16;
 u8 VAR_17;
 int VAR_18;

 if (!VAR_8)
  return -VAR_7;

 if (VAR_8->diver_mode == VAR_3)
  return -VAR_7;

 if (VAR_8->state != VAR_5 &&
     VAR_8->state != VAR_4)
  return -VAR_7;

 if (VAR_10 < 4000)
  return -VAR_7;

 VAR_18 = FUNC_1(VAR_8);
 if (VAR_18)
  return VAR_18;

 VAR_18 = VAR_8->io->write_reg(VAR_8->io,
         VAR_0,
         0x00,
         0x00);
 if (VAR_18)
  return VAR_18;

 VAR_18 = VAR_8->io->read_regs(VAR_8->io,
         VAR_0,
         0x2b,
         &VAR_14,
         1);
 if (VAR_18)
  return VAR_18;

 switch (VAR_9) {
 case 133:
  if (VAR_14 == 0x00) {
   VAR_18 = FUNC_8(VAR_8, 1);
   if (VAR_18)
    return VAR_18;

   if (VAR_8->diver_mode ==
       VAR_2) {
    VAR_18 = FUNC_8(VAR_8->diver_sub, 1);
    if (VAR_18)
     return VAR_18;
   }
  }
  break;

 case 132:
  if (VAR_14 == 0x01) {
   VAR_18 = FUNC_8(VAR_8, 0);
   if (VAR_18)
    return VAR_18;

   if (VAR_8->diver_mode ==
       VAR_2) {
    VAR_18 = FUNC_8(VAR_8->diver_sub, 0);
    if (VAR_18)
     return VAR_18;
   }
  }
  break;

 default:
  return -VAR_7;
 }

 VAR_18 = FUNC_5(VAR_8, VAR_15);
 if (VAR_18)
  return VAR_18;

 VAR_8->clk_mode = VAR_15;

 if (VAR_8->diver_mode == VAR_2) {
  VAR_18 = FUNC_5(VAR_8->diver_sub, VAR_15);
  if (VAR_18)
   return VAR_18;

  VAR_8->diver_sub->clk_mode = VAR_15;
 }

 VAR_18 = FUNC_2(VAR_8);
 if (VAR_18)
  return VAR_18;

 if (VAR_8->diver_mode == VAR_2) {
  VAR_18 = FUNC_2(VAR_8->diver_sub);
  if (VAR_18)
   return VAR_18;
 }

 if (VAR_12) {
  if (VAR_8->diver_mode ==
      VAR_2) {
   VAR_16 = 350;
  } else {
   if (VAR_13)
    VAR_16 = 350;
   else
    VAR_16 = -350;

   if (VAR_8->create_param.xtal_share_type ==
       128)
    VAR_16 *= -1;
  }
 } else {
  if (VAR_8->diver_mode ==
      VAR_2) {
   VAR_16 = 150;
  } else {
   switch (VAR_8->create_param.xtal_share_type) {
   case 129:
   case 131:
   default:
    VAR_16 = 0;
    break;
   case 130:
    VAR_16 = 150;
    break;
   case 128:
    VAR_16 = -150;
    break;
   }
  }
 }

 VAR_18 =
     FUNC_10(VAR_8, VAR_9, VAR_10, VAR_11,
      VAR_8->is_cable_input, VAR_16);
 if (VAR_18)
  return VAR_18;

 if (VAR_8->diver_mode == VAR_2) {
  VAR_18 =
      FUNC_10(VAR_8->diver_sub, VAR_9, VAR_10,
       VAR_11, VAR_8->is_cable_input,
       -VAR_16);
  if (VAR_18)
   return VAR_18;
 }

 FUNC_9(10000, 11000);

 VAR_18 =
     FUNC_0(VAR_8,
          &VAR_17);
 if (VAR_18)
  return VAR_18;

 if (!VAR_17)
  return -VAR_7;

 VAR_18 =
     FUNC_11(VAR_8, VAR_11, VAR_8->clk_mode,
      VAR_16);
 if (VAR_18)
  return VAR_18;

 if (VAR_8->diver_mode == VAR_2) {
  VAR_18 =
      FUNC_11(VAR_8->diver_sub, VAR_11,
       VAR_8->diver_sub->clk_mode,
       -VAR_16);
  if (VAR_18)
   return VAR_18;
 }

 if (VAR_8->create_param.ts_output_if == VAR_6) {
  VAR_18 = FUNC_4(VAR_8, VAR_9);
 } else {
  struct cxd2880_tnrdmd_pid_ftr_cfg *VAR_19;

  if (VAR_8->pid_ftr_cfg_en)
   VAR_19 = &VAR_8->pid_ftr_cfg;
  else
   VAR_19 = ((void*)0);

  VAR_18 = FUNC_3(VAR_8, VAR_19);
 }

 return VAR_18;
}
