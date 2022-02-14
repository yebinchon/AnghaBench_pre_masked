
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_intf {struct dpu_hw_blk_reg_map hw; } ;


 int FUNC_0 (struct dpu_hw_blk_reg_map*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(
  struct dpu_hw_intf *VAR_1,
  u8 VAR_2)
{
 struct dpu_hw_blk_reg_map *VAR_3 = &VAR_1->hw;

 FUNC_0(VAR_3, VAR_0, VAR_2 != 0);
}
