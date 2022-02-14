
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dpu_hw_pipe {int hw; TYPE_1__* cap; } ;
struct dpu_csc_cfg {int dummy; } ;
struct TYPE_2__ {int features; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dpu_hw_pipe*,int ,int *) ;
 int FUNC_1 (int *,int ,struct dpu_csc_cfg*,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct dpu_hw_pipe *VAR_3,
  struct dpu_csc_cfg *VAR_4)
{
 u32 VAR_5;
 bool VAR_6 = 0;

 if (FUNC_0(VAR_3, VAR_1, &VAR_5) || !VAR_4)
  return;

 if (FUNC_2(VAR_2, &VAR_3->cap->features)) {
  VAR_5 += VAR_0;
  VAR_6 = 1;
 }

 FUNC_1(&VAR_3->hw, VAR_5, VAR_4, VAR_6);
}
