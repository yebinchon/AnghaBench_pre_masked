
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_resource {struct vmw_private* dev_priv; } ;
struct vmw_private {int dummy; } ;
struct vmw_dx_shader {int cotable; } ;


 int FUNC_0 (struct vmw_dx_shader*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct vmw_private*) ;
 struct vmw_dx_shader* FUNC_3 (struct vmw_resource*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct vmw_resource *VAR_1)
{
 struct vmw_private *VAR_2 = VAR_1->dev_priv;
 struct vmw_dx_shader *VAR_3 = FUNC_3(VAR_1);

 FUNC_4(&VAR_3->cotable);
 FUNC_0(VAR_3);
 FUNC_1(FUNC_2(VAR_2), VAR_0);
}
