
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct dpu_hw_pipe {int hw; TYPE_1__* cap; } ;
struct TYPE_2__ {int features; } ;


 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct dpu_hw_pipe*,int ,scalar_t__*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct dpu_hw_pipe *VAR_3,
  u32 VAR_4, u8 VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;

 if (!FUNC_3(VAR_1, &VAR_3->cap->features) ||
  FUNC_2(VAR_3, VAR_1, &VAR_6) ||
  !FUNC_3(VAR_0, &VAR_3->cap->features))
  return;

 VAR_7 = FUNC_0(&VAR_3->hw, VAR_2 + VAR_6);

 if (VAR_5)
  VAR_7 |= VAR_4;
 else
  VAR_7 &= ~VAR_4;

 FUNC_1(&VAR_3->hw, VAR_2 + VAR_6, VAR_7);
}
