
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_resource {int id; struct vmw_private* dev_priv; } ;
struct vmw_private {int binding_mutex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vmw_resource*) ;

__attribute__((used)) static void FUNC_4(struct vmw_resource *VAR_0)
{
 struct vmw_private *VAR_1 = VAR_0->dev_priv;

 FUNC_1(&VAR_1->binding_mutex);
 FUNC_0(FUNC_3(VAR_0));
 VAR_0->id = -1;
 FUNC_2(&VAR_1->binding_mutex);
}
