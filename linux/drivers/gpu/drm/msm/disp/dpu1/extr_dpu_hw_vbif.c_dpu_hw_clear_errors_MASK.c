
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_vbif {struct dpu_hw_blk_reg_map hw; } ;


 int FUNC_0 (struct dpu_hw_blk_reg_map*,int ) ;
 int FUNC_1 (struct dpu_hw_blk_reg_map*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct dpu_hw_vbif *VAR_3,
  u32 *VAR_4, u32 *VAR_5)
{
 struct dpu_hw_blk_reg_map *VAR_6;
 u32 VAR_7, VAR_8;

 if (!VAR_3)
  return;
 VAR_6 = &VAR_3->hw;
 VAR_7 = FUNC_0(VAR_6, VAR_1);
 VAR_8 = FUNC_0(VAR_6, VAR_2);

 if (VAR_4)
  *VAR_4 = VAR_7;
 if (VAR_5)
  *VAR_5 = VAR_8;

 FUNC_1(VAR_6, VAR_0, VAR_7 | VAR_8);
}
