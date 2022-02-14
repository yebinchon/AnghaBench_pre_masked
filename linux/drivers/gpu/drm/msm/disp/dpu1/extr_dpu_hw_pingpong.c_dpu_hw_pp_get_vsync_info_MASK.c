
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_pp_vsync_info {int rd_ptr_init_val; int rd_ptr_frame_count; int rd_ptr_line_count; int wr_ptr_line_count; } ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_pingpong {struct dpu_hw_blk_reg_map hw; } ;


 int FUNC_0 (struct dpu_hw_blk_reg_map*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct dpu_hw_pingpong *VAR_4,
  struct dpu_hw_pp_vsync_info *VAR_5)
{
 struct dpu_hw_blk_reg_map *VAR_6;
 u32 VAR_7;

 if (!VAR_4 || !VAR_5)
  return -VAR_0;
 VAR_6 = &VAR_4->hw;

 VAR_7 = FUNC_0(VAR_6, VAR_3);
 VAR_5->rd_ptr_init_val = VAR_7 & 0xffff;

 VAR_7 = FUNC_0(VAR_6, VAR_1);
 VAR_5->rd_ptr_frame_count = (VAR_7 & 0xffff0000) >> 16;
 VAR_5->rd_ptr_line_count = VAR_7 & 0xffff;

 VAR_7 = FUNC_0(VAR_6, VAR_2);
 VAR_5->wr_ptr_line_count = VAR_7 & 0xffff;

 return 0;
}
