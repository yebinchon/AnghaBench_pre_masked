
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_csc_cfg {int const* csc_mv; int* csc_pre_lv; int* csc_post_lv; int* csc_pre_bv; int* csc_post_bv; } ;


 int FUNC_0 (struct dpu_hw_blk_reg_map*,int,int) ;

void FUNC_1(struct dpu_hw_blk_reg_map *VAR_0,
  u32 VAR_1,
  struct dpu_csc_cfg *VAR_2, bool VAR_3)
{
 static const u32 VAR_4 = 7;
 u32 VAR_5 = VAR_3 ? 16 : 8;
 u32 VAR_6;


 VAR_6 = ((VAR_2->csc_mv[0] >> VAR_4) & 0x1FFF) |
  (((VAR_2->csc_mv[1] >> VAR_4) & 0x1FFF) << 16);
 FUNC_0(VAR_0, VAR_1, VAR_6);
 VAR_6 = ((VAR_2->csc_mv[2] >> VAR_4) & 0x1FFF) |
  (((VAR_2->csc_mv[3] >> VAR_4) & 0x1FFF) << 16);
 FUNC_0(VAR_0, VAR_1 + 0x4, VAR_6);
 VAR_6 = ((VAR_2->csc_mv[4] >> VAR_4) & 0x1FFF) |
  (((VAR_2->csc_mv[5] >> VAR_4) & 0x1FFF) << 16);
 FUNC_0(VAR_0, VAR_1 + 0x8, VAR_6);
 VAR_6 = ((VAR_2->csc_mv[6] >> VAR_4) & 0x1FFF) |
  (((VAR_2->csc_mv[7] >> VAR_4) & 0x1FFF) << 16);
 FUNC_0(VAR_0, VAR_1 + 0xc, VAR_6);
 VAR_6 = (VAR_2->csc_mv[8] >> VAR_4) & 0x1FFF;
 FUNC_0(VAR_0, VAR_1 + 0x10, VAR_6);


 VAR_6 = (VAR_2->csc_pre_lv[0] << VAR_5) | VAR_2->csc_pre_lv[1];
 FUNC_0(VAR_0, VAR_1 + 0x14, VAR_6);
 VAR_6 = (VAR_2->csc_pre_lv[2] << VAR_5) | VAR_2->csc_pre_lv[3];
 FUNC_0(VAR_0, VAR_1 + 0x18, VAR_6);
 VAR_6 = (VAR_2->csc_pre_lv[4] << VAR_5) | VAR_2->csc_pre_lv[5];
 FUNC_0(VAR_0, VAR_1 + 0x1c, VAR_6);


 VAR_6 = (VAR_2->csc_post_lv[0] << VAR_5) | VAR_2->csc_post_lv[1];
 FUNC_0(VAR_0, VAR_1 + 0x20, VAR_6);
 VAR_6 = (VAR_2->csc_post_lv[2] << VAR_5) | VAR_2->csc_post_lv[3];
 FUNC_0(VAR_0, VAR_1 + 0x24, VAR_6);
 VAR_6 = (VAR_2->csc_post_lv[4] << VAR_5) | VAR_2->csc_post_lv[5];
 FUNC_0(VAR_0, VAR_1 + 0x28, VAR_6);


 FUNC_0(VAR_0, VAR_1 + 0x2c, VAR_2->csc_pre_bv[0]);
 FUNC_0(VAR_0, VAR_1 + 0x30, VAR_2->csc_pre_bv[1]);
 FUNC_0(VAR_0, VAR_1 + 0x34, VAR_2->csc_pre_bv[2]);


 FUNC_0(VAR_0, VAR_1 + 0x38, VAR_2->csc_post_bv[0]);
 FUNC_0(VAR_0, VAR_1 + 0x3c, VAR_2->csc_post_bv[1]);
 FUNC_0(VAR_0, VAR_1 + 0x40, VAR_2->csc_post_bv[2]);
}
