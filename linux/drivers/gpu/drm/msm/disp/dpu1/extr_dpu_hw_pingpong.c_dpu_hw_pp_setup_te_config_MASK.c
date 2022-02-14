
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_hw_tear_check {int vsync_count; int sync_cfg_height; int vsync_init_val; int rd_ptr_irq; int start_pos; int sync_threshold_continue; int sync_threshold_start; scalar_t__ hw_vsync_mode; } ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_pingpong {struct dpu_hw_blk_reg_map hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dpu_hw_blk_reg_map*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct dpu_hw_pingpong *VAR_8,
  struct dpu_hw_tear_check *VAR_9)
{
 struct dpu_hw_blk_reg_map *VAR_10;
 int VAR_11;

 if (!VAR_8 || !VAR_9)
  return -VAR_0;
 VAR_10 = &VAR_8->hw;

 VAR_11 = FUNC_0(19);
 if (VAR_9->hw_vsync_mode)
  VAR_11 |= FUNC_0(20);

 VAR_11 |= VAR_9->vsync_count;

 FUNC_1(VAR_10, VAR_4, VAR_11);
 FUNC_1(VAR_10, VAR_3, VAR_9->sync_cfg_height);
 FUNC_1(VAR_10, VAR_7, VAR_9->vsync_init_val);
 FUNC_1(VAR_10, VAR_1, VAR_9->rd_ptr_irq);
 FUNC_1(VAR_10, VAR_2, VAR_9->start_pos);
 FUNC_1(VAR_10, VAR_5,
   ((VAR_9->sync_threshold_continue << 16) |
    VAR_9->sync_threshold_start));
 FUNC_1(VAR_10, VAR_6,
   (VAR_9->start_pos + VAR_9->sync_threshold_start + 1));

 return 0;
}
