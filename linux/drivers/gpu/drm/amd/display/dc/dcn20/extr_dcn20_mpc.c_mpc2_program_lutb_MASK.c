
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfer_func_reg {void* region_end; void* region_start; void* start_end_cntl2_r; void* start_end_cntl1_r; void* start_end_cntl2_g; void* start_end_cntl1_g; void* start_end_cntl2_b; void* start_end_cntl1_b; void* start_slope_cntl_r; void* start_slope_cntl_g; void* start_slope_cntl_b; void* start_cntl_r; void* start_cntl_g; void* start_cntl_b; } ;
struct pwl_params {int dummy; } ;
struct mpc {int dummy; } ;
struct TYPE_2__ {int ctx; } ;
struct dcn20_mpc {TYPE_1__ base; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 void* FUNC_0 (int ) ;
 struct dcn20_mpc* FUNC_1 (struct mpc*) ;
 int FUNC_2 (int ,struct pwl_params const*,struct xfer_func_reg*) ;
 int FUNC_3 (struct mpc*,struct xfer_func_reg*) ;

__attribute__((used)) static void FUNC_4(struct mpc *VAR_14, int VAR_15,
   const struct pwl_params *VAR_16)
{
 struct dcn20_mpc *VAR_17 = FUNC_1(VAR_14);
 struct xfer_func_reg VAR_18;

 FUNC_3(VAR_14, &VAR_18);

 VAR_18.start_cntl_b = FUNC_0(VAR_11[VAR_15]);
 VAR_18.start_cntl_g = FUNC_0(VAR_12[VAR_15]);
 VAR_18.start_cntl_r = FUNC_0(VAR_13[VAR_15]);
 VAR_18.start_slope_cntl_b = FUNC_0(VAR_8[VAR_15]);
 VAR_18.start_slope_cntl_g = FUNC_0(VAR_9[VAR_15]);
 VAR_18.start_slope_cntl_r = FUNC_0(VAR_10[VAR_15]);
 VAR_18.start_end_cntl1_b = FUNC_0(VAR_0[VAR_15]);
 VAR_18.start_end_cntl2_b = FUNC_0(VAR_3[VAR_15]);
 VAR_18.start_end_cntl1_g = FUNC_0(VAR_1[VAR_15]);
 VAR_18.start_end_cntl2_g = FUNC_0(VAR_4[VAR_15]);
 VAR_18.start_end_cntl1_r = FUNC_0(VAR_2[VAR_15]);
 VAR_18.start_end_cntl2_r = FUNC_0(VAR_5[VAR_15]);
 VAR_18.region_start = FUNC_0(VAR_6[VAR_15]);
 VAR_18.region_end = FUNC_0(VAR_7[VAR_15]);

 FUNC_2(VAR_17->base.ctx, VAR_16, &VAR_18);

}
