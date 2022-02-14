
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_ctl {int idx; struct dpu_hw_blk_reg_map hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dpu_hw_blk_reg_map*,int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct dpu_hw_ctl*,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct dpu_hw_ctl *VAR_3)
{
 struct dpu_hw_blk_reg_map *VAR_4 = &VAR_3->hw;

 FUNC_2("issuing hw ctl reset for ctl:%d\n", VAR_3->idx);
 FUNC_0(VAR_4, VAR_0, 0x1);
 if (FUNC_1(VAR_3, VAR_1))
  return -VAR_2;

 return 0;
}
