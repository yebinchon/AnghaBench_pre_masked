
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dpu_hw_pipe_qos_cfg {int safe_lut; int danger_lut; } ;
struct dpu_hw_pipe {int hw; } ;


 int FUNC_0 (int *,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct dpu_hw_pipe*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct dpu_hw_pipe *VAR_3,
  struct dpu_hw_pipe_qos_cfg *VAR_4)
{
 u32 VAR_5;

 if (FUNC_1(VAR_3, VAR_0, &VAR_5))
  return;

 FUNC_0(&VAR_3->hw, VAR_1 + VAR_5, VAR_4->danger_lut);
 FUNC_0(&VAR_3->hw, VAR_2 + VAR_5, VAR_4->safe_lut);
}
