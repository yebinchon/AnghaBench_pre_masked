
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_ctl {int mixer_count; struct dpu_hw_blk_reg_map hw; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct dpu_hw_blk_reg_map*,int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_5(struct dpu_hw_ctl *VAR_1)
{
 struct dpu_hw_blk_reg_map *VAR_2 = &VAR_1->hw;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->mixer_count; VAR_3++) {
  FUNC_4(VAR_2, FUNC_0(VAR_0 + VAR_3), 0);
  FUNC_4(VAR_2, FUNC_1(VAR_0 + VAR_3), 0);
  FUNC_4(VAR_2, FUNC_2(VAR_0 + VAR_3), 0);
  FUNC_4(VAR_2, FUNC_3(VAR_0 + VAR_3), 0);
 }
}
