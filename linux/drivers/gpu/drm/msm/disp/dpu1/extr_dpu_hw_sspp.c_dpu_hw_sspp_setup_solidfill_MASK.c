
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dpu_hw_pipe {int hw; } ;
typedef enum dpu_sspp_multirect_index { ____Placeholder_dpu_sspp_multirect_index } dpu_sspp_multirect_index ;


 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct dpu_hw_pipe*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct dpu_hw_pipe *VAR_5, u32 VAR_6, enum
  dpu_sspp_multirect_index VAR_7)
{
 u32 VAR_8;

 if (FUNC_1(VAR_5, VAR_2, &VAR_8))
  return;

 if (VAR_7 == VAR_1 || VAR_7 == VAR_0)
  FUNC_0(&VAR_5->hw, VAR_3 + VAR_8, VAR_6);
 else
  FUNC_0(&VAR_5->hw, VAR_4 + VAR_8,
    VAR_6);
}
