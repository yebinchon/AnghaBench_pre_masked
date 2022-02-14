
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_mixer {struct dpu_hw_blk_reg_map hw; } ;


 int FUNC_0 (struct dpu_hw_blk_reg_map*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct dpu_hw_mixer*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct dpu_hw_mixer *VAR_3,
 u32 VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct dpu_hw_blk_reg_map *VAR_8 = &VAR_3->hw;
 int VAR_9;
 u32 VAR_10;

 if (VAR_4 == VAR_0)
  return;

 VAR_9 = FUNC_2(VAR_3, VAR_4);
 if (FUNC_1(VAR_9 < 0))
  return;

 VAR_10 = (VAR_6 & 0xFF) | ((VAR_5 & 0xFF) << 16);
 FUNC_0(VAR_8, VAR_1 + VAR_9, VAR_10);
 FUNC_0(VAR_8, VAR_2 + VAR_9, VAR_7);
}
