
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_vbif {struct dpu_hw_blk_reg_map hw; } ;


 int FUNC_0 (struct dpu_hw_blk_reg_map*,int) ;
 int FUNC_1 (struct dpu_hw_blk_reg_map*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct dpu_hw_vbif *VAR_3,
  u32 VAR_4, u32 VAR_5)
{
 struct dpu_hw_blk_reg_map *VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;





 if (!VAR_3 || VAR_4 >= VAR_0 || VAR_4 >= 16)
  return;

 VAR_6 = &VAR_3->hw;

 if (VAR_4 >= 8) {
  VAR_4 -= 8;
  VAR_7 = VAR_2;
 } else {
  VAR_7 = VAR_1;
 }
 VAR_8 = (VAR_4 & 0x7) * 4;
 VAR_9 = FUNC_0(VAR_6, VAR_7);
 VAR_9 &= ~(0x7 << VAR_8);
 VAR_9 |= (VAR_5 & 0x7) << VAR_8;
 FUNC_1(VAR_6, VAR_7, VAR_9);
}
