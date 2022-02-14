
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_mdp {struct dpu_hw_blk_reg_map hw; } ;
struct dpu_danger_safe_status {int mdp; int* sspp; } ;


 int FUNC_0 (struct dpu_hw_blk_reg_map*,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;

__attribute__((used)) static void FUNC_1(struct dpu_hw_mdp *VAR_15,
  struct dpu_danger_safe_status *VAR_16)
{
 struct dpu_hw_blk_reg_map *VAR_17;
 u32 VAR_18;

 if (!VAR_15 || !VAR_16)
  return;

 VAR_17 = &VAR_15->hw;

 VAR_18 = FUNC_0(VAR_17, VAR_0);
 VAR_16->mdp = (VAR_18 >> 0) & 0x1;
 VAR_16->sspp[VAR_11] = (VAR_18 >> 4) & 0x1;
 VAR_16->sspp[VAR_12] = (VAR_18 >> 6) & 0x1;
 VAR_16->sspp[VAR_13] = (VAR_18 >> 8) & 0x1;
 VAR_16->sspp[VAR_14] = (VAR_18 >> 10) & 0x1;
 VAR_16->sspp[VAR_7] = (VAR_18 >> 12) & 0x1;
 VAR_16->sspp[VAR_8] = (VAR_18 >> 14) & 0x1;
 VAR_16->sspp[VAR_9] = (VAR_18 >> 16) & 0x1;
 VAR_16->sspp[VAR_10] = (VAR_18 >> 18) & 0x1;
 VAR_16->sspp[VAR_3] = (VAR_18 >> 20) & 0x1;
 VAR_16->sspp[VAR_4] = (VAR_18 >> 22) & 0x1;
 VAR_16->sspp[VAR_5] = (VAR_18 >> 28) & 0x1;
 VAR_16->sspp[VAR_6] = (VAR_18 >> 30) & 0x1;
 VAR_16->sspp[VAR_1] = (VAR_18 >> 24) & 0x1;
 VAR_16->sspp[VAR_2] = (VAR_18 >> 26) & 0x1;
}
