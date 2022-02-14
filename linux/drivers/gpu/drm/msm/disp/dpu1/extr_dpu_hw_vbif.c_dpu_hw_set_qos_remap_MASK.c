
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_vbif {struct dpu_hw_blk_reg_map hw; } ;


 int FUNC_0 (struct dpu_hw_blk_reg_map*,scalar_t__) ;
 int FUNC_1 (struct dpu_hw_blk_reg_map*,scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(struct dpu_hw_vbif *VAR_2,
  u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct dpu_hw_blk_reg_map *VAR_6;
 u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 if (!VAR_2)
  return;

 VAR_6 = &VAR_2->hw;

 VAR_10 = ((VAR_3 & 0x8) >> 3) * 4 + (VAR_4 * 8);
 VAR_11 = (VAR_3 & 0x7) * 4;

 VAR_7 = FUNC_0(VAR_6, VAR_1 + VAR_10);
 VAR_8 = FUNC_0(VAR_6, VAR_0 + VAR_10);

 VAR_9 = 0x7 << VAR_11;

 VAR_7 &= ~VAR_9;
 VAR_7 |= (VAR_5 << VAR_11) & VAR_9;

 VAR_8 &= ~VAR_9;
 VAR_8 |= (VAR_5 << VAR_11) & VAR_9;

 FUNC_1(VAR_6, VAR_1 + VAR_10, VAR_7);
 FUNC_1(VAR_6, VAR_0 + VAR_10, VAR_8);
}
