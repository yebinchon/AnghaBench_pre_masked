
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dpu_mdss_color {int color_0; int color_1; int color_2; int color_3; } ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_mixer {struct dpu_hw_blk_reg_map hw; } ;


 int FUNC_0 (struct dpu_hw_blk_reg_map*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct dpu_hw_mixer *VAR_2,
  struct dpu_mdss_color *VAR_3,
  u8 VAR_4)
{
 struct dpu_hw_blk_reg_map *VAR_5 = &VAR_2->hw;

 if (VAR_4) {
  FUNC_0(VAR_5, VAR_0,
   (VAR_3->color_0 & 0xFFF) |
   ((VAR_3->color_1 & 0xFFF) << 0x10));
  FUNC_0(VAR_5, VAR_1,
   (VAR_3->color_2 & 0xFFF) |
   ((VAR_3->color_3 & 0xFFF) << 0x10));
 }
}
