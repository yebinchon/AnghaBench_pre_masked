
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_vbif {struct dpu_hw_blk_reg_map hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dpu_hw_blk_reg_map*,int ) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_2(struct dpu_hw_vbif *VAR_1,
  u32 VAR_2)
{
 struct dpu_hw_blk_reg_map *VAR_3 = &VAR_1->hw;
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0);

 return (VAR_4 & FUNC_0(VAR_2)) ? 1 : 0;
}
