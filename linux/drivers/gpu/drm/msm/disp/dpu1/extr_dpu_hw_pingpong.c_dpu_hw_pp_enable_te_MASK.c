
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_pingpong {struct dpu_hw_blk_reg_map hw; } ;


 int FUNC_0 (struct dpu_hw_blk_reg_map*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct dpu_hw_pingpong *VAR_2, bool VAR_3)
{
 struct dpu_hw_blk_reg_map *VAR_4;

 if (!VAR_2)
  return -VAR_0;
 VAR_4 = &VAR_2->hw;

 FUNC_0(VAR_4, VAR_1, VAR_3);
 return 0;
}
