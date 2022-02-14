
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct dpu_hw_pipe {int hw; } ;


 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct dpu_hw_pipe*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct dpu_hw_pipe *VAR_2,
  u32 VAR_3, u8 VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;

 if (FUNC_2(VAR_2, VAR_0, &VAR_5))
  return;

 VAR_6 = FUNC_0(&VAR_2->hw, VAR_1 + VAR_5);
 if (VAR_4)
  VAR_6 |= VAR_3;
 else
  VAR_6 &= ~VAR_3;

 FUNC_1(&VAR_2->hw, VAR_1 + VAR_5, VAR_6);
}
