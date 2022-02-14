
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intf_status {void* frame_count; void* line_count; void* is_en; } ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_intf {struct dpu_hw_blk_reg_map hw; } ;


 void* FUNC_0 (struct dpu_hw_blk_reg_map*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(
  struct dpu_hw_intf *VAR_3,
  struct intf_status *VAR_4)
{
 struct dpu_hw_blk_reg_map *VAR_5 = &VAR_3->hw;

 VAR_4->is_en = FUNC_0(VAR_5, VAR_2);
 if (VAR_4->is_en) {
  VAR_4->frame_count = FUNC_0(VAR_5, VAR_0);
  VAR_4->line_count = FUNC_0(VAR_5, VAR_1);
 } else {
  VAR_4->line_count = 0;
  VAR_4->frame_count = 0;
 }
}
