
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int dummy; } ;
struct vmw_ctx_binding_state {struct vmw_private* dev_priv; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct vmw_ctx_binding_state*) ;
 int FUNC_2 (struct vmw_private*) ;

void FUNC_3(struct vmw_ctx_binding_state *VAR_0)
{
 struct vmw_private *VAR_1 = VAR_0->dev_priv;

 FUNC_1(VAR_0);
 FUNC_0(FUNC_2(VAR_1), sizeof(*VAR_0));
}
