
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_cmdbuf_context {scalar_t__ num_hw_submitted; int preempted; int submitted; int hw_submitted; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vmw_cmdbuf_context *VAR_0)
{
 FUNC_0(&VAR_0->hw_submitted);
 FUNC_0(&VAR_0->submitted);
 FUNC_0(&VAR_0->preempted);
 VAR_0->num_hw_submitted = 0;
}
