
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_vbif {struct dpu_hw_blk_reg_map hw; } ;


 int FUNC_0 (struct dpu_hw_blk_reg_map*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_1(struct dpu_hw_vbif *VAR_2,
  u32 VAR_3, bool VAR_4)
{
 struct dpu_hw_blk_reg_map *VAR_5 = &VAR_2->hw;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 if (VAR_4)
  VAR_7 = VAR_0;
 else
  VAR_7 = VAR_1;

 VAR_7 += (VAR_3 / 4) * 4;
 VAR_8 = (VAR_3 % 4) * 8;
 VAR_6 = FUNC_0(VAR_5, VAR_7);
 VAR_9 = (VAR_6 >> VAR_8) & 0xFF;

 return VAR_9;
}
