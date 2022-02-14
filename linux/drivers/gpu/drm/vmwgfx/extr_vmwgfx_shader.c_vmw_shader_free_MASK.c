
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_shader {int dummy; } ;
struct vmw_resource {struct vmw_private* dev_priv; } ;
struct vmw_private {int dummy; } ;


 int FUNC_0 (struct vmw_shader*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct vmw_private*) ;
 struct vmw_shader* FUNC_3 (struct vmw_resource*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct vmw_resource *VAR_1)
{
 struct vmw_shader *VAR_2 = FUNC_3(VAR_1);
 struct vmw_private *VAR_3 = VAR_1->dev_priv;

 FUNC_0(VAR_2);
 FUNC_1(FUNC_2(VAR_3),
       VAR_0);
}
