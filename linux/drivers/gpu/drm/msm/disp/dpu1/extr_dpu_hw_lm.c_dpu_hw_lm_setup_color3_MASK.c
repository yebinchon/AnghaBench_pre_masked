
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_mixer {struct dpu_hw_blk_reg_map hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dpu_hw_blk_reg_map*,int ) ;
 int FUNC_2 (struct dpu_hw_blk_reg_map*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct dpu_hw_mixer *VAR_1,
 uint32_t VAR_2)
{
 struct dpu_hw_blk_reg_map *VAR_3 = &VAR_1->hw;
 int VAR_4;


 VAR_4 = FUNC_1(VAR_3, VAR_0);

 VAR_4 = (VAR_4 & (FUNC_0(31) | FUNC_0(30))) | VAR_2;

 FUNC_2(VAR_3, VAR_0, VAR_4);
}
