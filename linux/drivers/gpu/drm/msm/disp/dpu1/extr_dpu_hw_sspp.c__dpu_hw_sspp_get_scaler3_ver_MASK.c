
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_hw_pipe {int hw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dpu_hw_pipe*,int ,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static u32 FUNC_2(struct dpu_hw_pipe *VAR_1)
{
 u32 VAR_2;

 if (!VAR_1 || FUNC_0(VAR_1, VAR_0, &VAR_2))
  return 0;

 return FUNC_1(&VAR_1->hw, VAR_2);
}
