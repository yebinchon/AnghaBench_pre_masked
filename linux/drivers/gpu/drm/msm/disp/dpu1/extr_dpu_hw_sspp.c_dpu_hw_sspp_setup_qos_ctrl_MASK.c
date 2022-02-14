
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_pipe_qos_cfg {int creq_vblank; int danger_vblank; scalar_t__ danger_safe_en; scalar_t__ vblank_en; } ;
struct dpu_hw_pipe {int hw; } ;


 int FUNC_0 (int *,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct dpu_hw_pipe*,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct dpu_hw_pipe *VAR_8,
  struct dpu_hw_pipe_qos_cfg *VAR_9)
{
 u32 VAR_10;
 u32 VAR_11 = 0;

 if (FUNC_1(VAR_8, VAR_0, &VAR_10))
  return;

 if (VAR_9->vblank_en) {
  VAR_11 |= ((VAR_9->creq_vblank &
    VAR_2) <<
    VAR_3);
  VAR_11 |= ((VAR_9->danger_vblank &
    VAR_5) <<
    VAR_6);
  VAR_11 |= VAR_7;
 }

 if (VAR_9->danger_safe_en)
  VAR_11 |= VAR_4;

 FUNC_0(&VAR_8->hw, VAR_1 + VAR_10, VAR_11);
}
