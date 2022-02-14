
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_resource {struct vmw_private* dev_priv; } ;
struct vmw_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmw_resource*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct vmw_private*) ;

__attribute__((used)) static void FUNC_3(struct vmw_resource *VAR_1)
{
 struct vmw_private *VAR_2 = VAR_1->dev_priv;

 FUNC_0(VAR_1);
 FUNC_1(FUNC_2(VAR_2), VAR_0);
}
