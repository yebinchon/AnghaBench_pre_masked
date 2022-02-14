
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct split_pipe_cfg {int en; scalar_t__ mode; scalar_t__ intf; scalar_t__ split_flush_en; } ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_mdp {struct dpu_hw_blk_reg_map hw; } ;


 int FUNC_0 (struct dpu_hw_blk_reg_map*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_1(struct dpu_hw_mdp *VAR_9,
  struct split_pipe_cfg *VAR_10)
{
 struct dpu_hw_blk_reg_map *VAR_11;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;

 if (!VAR_9 || !VAR_10)
  return;

 VAR_11 = &VAR_9->hw;

 if (VAR_10->en) {
  if (VAR_10->mode == VAR_4) {
   VAR_13 = VAR_2;

   if (VAR_10->intf == VAR_3)
    VAR_13 |= VAR_0;
   else
    VAR_13 |= VAR_1;
   VAR_12 = VAR_13;
  } else {
   if (VAR_10->intf == VAR_3) {
    VAR_13 = VAR_0;
    VAR_12 = VAR_1;
   } else {
    VAR_13 = VAR_1;
    VAR_12 = VAR_0;
   }
  }
 }

 FUNC_0(VAR_11, VAR_8, VAR_10->split_flush_en ? 0x1 : 0x0);
 FUNC_0(VAR_11, VAR_6, VAR_13);
 FUNC_0(VAR_11, VAR_7, VAR_12);
 FUNC_0(VAR_11, VAR_5, VAR_10->en & 0x1);
}
