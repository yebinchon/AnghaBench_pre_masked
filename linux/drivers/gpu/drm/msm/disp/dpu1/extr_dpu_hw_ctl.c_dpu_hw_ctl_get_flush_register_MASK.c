
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_ctl {struct dpu_hw_blk_reg_map hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct dpu_hw_blk_reg_map*,int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct dpu_hw_ctl *VAR_1)
{
 struct dpu_hw_blk_reg_map *VAR_2 = &VAR_1->hw;

 return FUNC_0(VAR_2, VAR_0);
}
