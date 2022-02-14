
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct dpu_hw_pipe_qos_cfg {int creq_lut; } ;
struct dpu_hw_pipe {int hw; TYPE_1__* cap; } ;
struct TYPE_2__ {int features; } ;


 int FUNC_0 (int *,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct dpu_hw_pipe*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct dpu_hw_pipe *VAR_5,
  struct dpu_hw_pipe_qos_cfg *VAR_6)
{
 u32 VAR_7;

 if (FUNC_1(VAR_5, VAR_1, &VAR_7))
  return;

 if (VAR_5->cap && FUNC_2(VAR_0, &VAR_5->cap->features)) {
  FUNC_0(&VAR_5->hw, VAR_3 + VAR_7, VAR_6->creq_lut);
  FUNC_0(&VAR_5->hw, VAR_4 + VAR_7,
    VAR_6->creq_lut >> 32);
 } else {
  FUNC_0(&VAR_5->hw, VAR_2 + VAR_7, VAR_6->creq_lut);
 }
}
