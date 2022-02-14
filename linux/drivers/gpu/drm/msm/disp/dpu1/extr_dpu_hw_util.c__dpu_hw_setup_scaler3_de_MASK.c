
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_scaler3_de_cfg {int sharpen_level1; int sharpen_level2; int limit; int prec_shift; int clip; int thr_quiet; int thr_dieout; int thr_low; int thr_high; int* adjust_a; int* adjust_b; int* adjust_c; int enable; } ;
struct dpu_hw_blk_reg_map {int dummy; } ;


 int FUNC_0 (struct dpu_hw_blk_reg_map*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct dpu_hw_blk_reg_map *VAR_7,
  struct dpu_hw_scaler3_de_cfg *VAR_8, u32 VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12, VAR_13;
 u32 VAR_14, VAR_15, VAR_16;

 if (!VAR_8->enable)
  return;

 VAR_10 = (VAR_8->sharpen_level1 & 0x1FF) |
  ((VAR_8->sharpen_level2 & 0x1FF) << 16);

 VAR_11 = ((VAR_8->limit & 0xF) << 9) |
  ((VAR_8->prec_shift & 0x7) << 13) |
  ((VAR_8->clip & 0x7) << 16);

 VAR_12 = (VAR_8->thr_quiet & 0xFF) |
  ((VAR_8->thr_dieout & 0x3FF) << 16);

 VAR_13 = (VAR_8->thr_low & 0x3FF) |
  ((VAR_8->thr_high & 0x3FF) << 16);

 VAR_14 = (VAR_8->adjust_a[0] & 0x3FF) |
  ((VAR_8->adjust_a[1] & 0x3FF) << 10) |
  ((VAR_8->adjust_a[2] & 0x3FF) << 20);

 VAR_15 = (VAR_8->adjust_b[0] & 0x3FF) |
  ((VAR_8->adjust_b[1] & 0x3FF) << 10) |
  ((VAR_8->adjust_b[2] & 0x3FF) << 20);

 VAR_16 = (VAR_8->adjust_c[0] & 0x3FF) |
  ((VAR_8->adjust_c[1] & 0x3FF) << 10) |
  ((VAR_8->adjust_c[2] & 0x3FF) << 20);

 FUNC_0(VAR_7, VAR_4 + VAR_9, VAR_10);
 FUNC_0(VAR_7, VAR_5 + VAR_9, VAR_11);
 FUNC_0(VAR_7, VAR_3 + VAR_9, VAR_12);
 FUNC_0(VAR_7, VAR_6 + VAR_9, VAR_13);
 FUNC_0(VAR_7, VAR_0 + VAR_9, VAR_14);
 FUNC_0(VAR_7, VAR_1 + VAR_9, VAR_15);
 FUNC_0(VAR_7, VAR_2 + VAR_9, VAR_16);

}
