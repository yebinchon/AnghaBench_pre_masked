
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct videomode {int hactive; int vactive; } ;
struct TYPE_2__ {int hsa; int hfp; int hbp; int vsa; int vfp; int vbp; int window_sync; scalar_t__ trans_mode; } ;
struct dsi_data {int num_lanes_used; scalar_t__ mode; TYPE_1__ vm_timings; int pix_fmt; struct videomode vm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int,int,...) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int,int) ;
 int FUNC_5 (unsigned int,int,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct dsi_data*,int ) ;
 int FUNC_8 (struct dsi_data*,int ,int) ;
 int FUNC_9 (struct dsi_data*,int) ;

__attribute__((used)) static void FUNC_10(struct dsi_data *VAR_10)
{
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18, VAR_19;
 unsigned int VAR_20, VAR_21;
 unsigned int VAR_22, VAR_23;
 unsigned int VAR_24, VAR_25;
 unsigned int VAR_26;
 int VAR_27 = VAR_10->num_lanes_used - 1;
 u32 VAR_28;

 VAR_28 = FUNC_7(VAR_10, VAR_1);
 VAR_17 = FUNC_3(VAR_28, 31, 24);
 VAR_18 = FUNC_3(VAR_28, 23, 16);
 VAR_19 = VAR_18 - VAR_17;
 VAR_20 = FUNC_3(VAR_28, 15, 8);
 VAR_21 = FUNC_3(VAR_28, 7, 0);

 VAR_28 = FUNC_7(VAR_10, VAR_2);
 VAR_11 = FUNC_3(VAR_28, 20, 16) * 2;
 VAR_14 = FUNC_3(VAR_28, 15, 8);
 VAR_12 = FUNC_3(VAR_28, 7, 0);

 VAR_28 = FUNC_7(VAR_10, VAR_3);
 VAR_13 = FUNC_3(VAR_28, 7, 0);


 VAR_15 = 20;

 VAR_16 = FUNC_9(VAR_10, 60) + 26;

 VAR_26 = FUNC_1(4, VAR_27);

 VAR_22 = FUNC_1(VAR_15 + VAR_11 + VAR_12 + VAR_13,
   4);
 VAR_23 = FUNC_1(VAR_16 + VAR_20, 4) + VAR_26;

 FUNC_0(VAR_22 == 0 || VAR_22 > 255);
 FUNC_0(VAR_23 == 0 || VAR_23 > 255);

 VAR_28 = FUNC_7(VAR_10, VAR_0);
 VAR_28 = FUNC_4(VAR_28, VAR_22, 15, 8);
 VAR_28 = FUNC_4(VAR_28, VAR_23, 7, 0);
 FUNC_8(VAR_10, VAR_0, VAR_28);

 FUNC_2("ddr_clk_pre %u, ddr_clk_post %u\n",
   VAR_22,
   VAR_23);

 VAR_24 = 1 + FUNC_1(VAR_11, 4) +
  FUNC_1(VAR_17, 4) +
  FUNC_1(VAR_19 + 3, 4);

 VAR_25 = FUNC_1(VAR_20 + VAR_21, 4) + 1 + VAR_26;

 VAR_28 = FUNC_5(VAR_24, 31, 16) |
  FUNC_5(VAR_25, 15, 0);
 FUNC_8(VAR_10, VAR_7, VAR_28);

 FUNC_2("enter_hs_mode_lat %u, exit_hs_mode_lat %u\n",
   VAR_24, VAR_25);

  if (VAR_10->mode == VAR_9) {

  int VAR_29 = VAR_10->vm_timings.hsa;
  int VAR_30 = VAR_10->vm_timings.hfp;
  int VAR_31 = VAR_10->vm_timings.hbp;
  int VAR_32 = VAR_10->vm_timings.vsa;
  int VAR_33 = VAR_10->vm_timings.vfp;
  int VAR_34 = VAR_10->vm_timings.vbp;
  int VAR_35 = VAR_10->vm_timings.window_sync;
  bool VAR_36;
  const struct videomode *VAR_37 = &VAR_10->vm;
  int VAR_38 = FUNC_6(VAR_10->pix_fmt);
  int VAR_39, VAR_40, VAR_41;

  VAR_36 = VAR_10->vm_timings.trans_mode == VAR_8;
  VAR_40 = VAR_36 ?
   ((VAR_29 == 0 && VAR_27 == 3) ? 1 : FUNC_1(4, VAR_27)) : 0;

  VAR_41 = FUNC_1(VAR_37->hactive * VAR_38, 8);


  VAR_39 = FUNC_1(4, VAR_27) + (VAR_36 ? VAR_29 : 0) + VAR_40 + VAR_30 +
   FUNC_1(VAR_41 + 6, VAR_27) + VAR_31;

  FUNC_2("HBP: %d, HFP: %d, HSA: %d, TL: %d TXBYTECLKHS\n", VAR_31,
   VAR_30, VAR_36 ? VAR_29 : 0, VAR_39);
  FUNC_2("VBP: %d, VFP: %d, VSA: %d, VACT: %d lines\n", VAR_34, VAR_33,
   VAR_32, VAR_37->vactive);

  VAR_28 = FUNC_7(VAR_10, VAR_4);
  VAR_28 = FUNC_4(VAR_28, VAR_31, 11, 0);
  VAR_28 = FUNC_4(VAR_28, VAR_30, 23, 12);
  VAR_28 = FUNC_4(VAR_28, VAR_36 ? VAR_29 : 0, 31, 24);
  FUNC_8(VAR_10, VAR_4, VAR_28);

  VAR_28 = FUNC_7(VAR_10, VAR_5);
  VAR_28 = FUNC_4(VAR_28, VAR_34, 7, 0);
  VAR_28 = FUNC_4(VAR_28, VAR_33, 15, 8);
  VAR_28 = FUNC_4(VAR_28, VAR_32, 23, 16);
  VAR_28 = FUNC_4(VAR_28, VAR_35, 27, 24);
  FUNC_8(VAR_10, VAR_5, VAR_28);

  VAR_28 = FUNC_7(VAR_10, VAR_6);
  VAR_28 = FUNC_4(VAR_28, VAR_37->vactive, 14, 0);
  VAR_28 = FUNC_4(VAR_28, VAR_39, 31, 16);
  FUNC_8(VAR_10, VAR_6, VAR_28);
 }
}
