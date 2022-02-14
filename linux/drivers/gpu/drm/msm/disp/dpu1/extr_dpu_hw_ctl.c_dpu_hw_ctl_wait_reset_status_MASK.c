
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_ctl {int idx; struct dpu_hw_blk_reg_map hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct dpu_hw_blk_reg_map*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct dpu_hw_ctl*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct dpu_hw_ctl *VAR_3)
{
 struct dpu_hw_blk_reg_map *VAR_4 = &VAR_3->hw;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_0);
 VAR_5 &= 0x01;
 if (!VAR_5)
  return 0;

 FUNC_2("hw ctl reset is set for ctl:%d\n", VAR_3->idx);
 if (FUNC_1(VAR_3, VAR_1)) {
  FUNC_3("hw recovery is not complete for ctl:%d\n", VAR_3->idx);
  return -VAR_2;
 }

 return 0;
}
