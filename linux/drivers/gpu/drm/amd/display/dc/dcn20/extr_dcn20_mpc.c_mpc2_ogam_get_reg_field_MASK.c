
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int exp_resion_start_segment; int exp_region_start; int field_region_linear_slope; int field_region_end_base; int field_region_end_slope; int field_region_end; int exp_region1_num_segments; int exp_region1_lut_offset; int exp_region0_num_segments; int exp_region0_lut_offset; } ;
struct TYPE_5__ {int exp_resion_start_segment; int exp_region_start; int field_region_linear_slope; int field_region_end_base; int field_region_end_slope; int field_region_end; int exp_region1_num_segments; int exp_region1_lut_offset; int exp_region0_num_segments; int exp_region0_lut_offset; } ;
struct xfer_func_reg {TYPE_3__ masks; TYPE_1__ shifts; } ;
struct mpc {int dummy; } ;
struct dcn20_mpc {TYPE_4__* mpc_mask; TYPE_2__* mpc_shift; } ;
struct TYPE_8__ {int MPCC_OGAM_RAMA_EXP_REGION_START_SEGMENT_B; int MPCC_OGAM_RAMA_EXP_REGION_START_B; int MPCC_OGAM_RAMA_EXP_REGION_LINEAR_SLOPE_B; int MPCC_OGAM_RAMA_EXP_REGION_END_BASE_B; int MPCC_OGAM_RAMA_EXP_REGION_END_SLOPE_B; int MPCC_OGAM_RAMA_EXP_REGION_END_B; int MPCC_OGAM_RAMA_EXP_REGION1_NUM_SEGMENTS; int MPCC_OGAM_RAMA_EXP_REGION1_LUT_OFFSET; int MPCC_OGAM_RAMA_EXP_REGION0_NUM_SEGMENTS; int MPCC_OGAM_RAMA_EXP_REGION0_LUT_OFFSET; } ;
struct TYPE_6__ {int MPCC_OGAM_RAMA_EXP_REGION_START_SEGMENT_B; int MPCC_OGAM_RAMA_EXP_REGION_START_B; int MPCC_OGAM_RAMA_EXP_REGION_LINEAR_SLOPE_B; int MPCC_OGAM_RAMA_EXP_REGION_END_BASE_B; int MPCC_OGAM_RAMA_EXP_REGION_END_SLOPE_B; int MPCC_OGAM_RAMA_EXP_REGION_END_B; int MPCC_OGAM_RAMA_EXP_REGION1_NUM_SEGMENTS; int MPCC_OGAM_RAMA_EXP_REGION1_LUT_OFFSET; int MPCC_OGAM_RAMA_EXP_REGION0_NUM_SEGMENTS; int MPCC_OGAM_RAMA_EXP_REGION0_LUT_OFFSET; } ;


 struct dcn20_mpc* FUNC_0 (struct mpc*) ;

__attribute__((used)) static void FUNC_1(
  struct mpc *VAR_0,
  struct xfer_func_reg *VAR_1)
{
 struct dcn20_mpc *VAR_2 = FUNC_0(VAR_0);

 VAR_1->shifts.exp_region0_lut_offset = VAR_2->mpc_shift->MPCC_OGAM_RAMA_EXP_REGION0_LUT_OFFSET;
 VAR_1->masks.exp_region0_lut_offset = VAR_2->mpc_mask->MPCC_OGAM_RAMA_EXP_REGION0_LUT_OFFSET;
 VAR_1->shifts.exp_region0_num_segments = VAR_2->mpc_shift->MPCC_OGAM_RAMA_EXP_REGION0_NUM_SEGMENTS;
 VAR_1->masks.exp_region0_num_segments = VAR_2->mpc_mask->MPCC_OGAM_RAMA_EXP_REGION0_NUM_SEGMENTS;
 VAR_1->shifts.exp_region1_lut_offset = VAR_2->mpc_shift->MPCC_OGAM_RAMA_EXP_REGION1_LUT_OFFSET;
 VAR_1->masks.exp_region1_lut_offset = VAR_2->mpc_mask->MPCC_OGAM_RAMA_EXP_REGION1_LUT_OFFSET;
 VAR_1->shifts.exp_region1_num_segments = VAR_2->mpc_shift->MPCC_OGAM_RAMA_EXP_REGION1_NUM_SEGMENTS;
 VAR_1->masks.exp_region1_num_segments = VAR_2->mpc_mask->MPCC_OGAM_RAMA_EXP_REGION1_NUM_SEGMENTS;
 VAR_1->shifts.field_region_end = VAR_2->mpc_shift->MPCC_OGAM_RAMA_EXP_REGION_END_B;
 VAR_1->masks.field_region_end = VAR_2->mpc_mask->MPCC_OGAM_RAMA_EXP_REGION_END_B;
 VAR_1->shifts.field_region_end_slope = VAR_2->mpc_shift->MPCC_OGAM_RAMA_EXP_REGION_END_SLOPE_B;
 VAR_1->masks.field_region_end_slope = VAR_2->mpc_mask->MPCC_OGAM_RAMA_EXP_REGION_END_SLOPE_B;
 VAR_1->shifts.field_region_end_base = VAR_2->mpc_shift->MPCC_OGAM_RAMA_EXP_REGION_END_BASE_B;
 VAR_1->masks.field_region_end_base = VAR_2->mpc_mask->MPCC_OGAM_RAMA_EXP_REGION_END_BASE_B;
 VAR_1->shifts.field_region_linear_slope = VAR_2->mpc_shift->MPCC_OGAM_RAMA_EXP_REGION_LINEAR_SLOPE_B;
 VAR_1->masks.field_region_linear_slope = VAR_2->mpc_mask->MPCC_OGAM_RAMA_EXP_REGION_LINEAR_SLOPE_B;
 VAR_1->shifts.exp_region_start = VAR_2->mpc_shift->MPCC_OGAM_RAMA_EXP_REGION_START_B;
 VAR_1->masks.exp_region_start = VAR_2->mpc_mask->MPCC_OGAM_RAMA_EXP_REGION_START_B;
 VAR_1->shifts.exp_resion_start_segment = VAR_2->mpc_shift->MPCC_OGAM_RAMA_EXP_REGION_START_SEGMENT_B;
 VAR_1->masks.exp_resion_start_segment = VAR_2->mpc_mask->MPCC_OGAM_RAMA_EXP_REGION_START_SEGMENT_B;
}
