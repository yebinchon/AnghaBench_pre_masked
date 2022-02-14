
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_resource {int id; struct vmw_private* dev_priv; } ;
struct vmw_private {int binding_mutex; } ;
struct vmw_dx_shader {int id; int committed; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vmw_resource*) ;
 struct vmw_dx_shader* FUNC_4 (struct vmw_resource*) ;
 scalar_t__ FUNC_5 (struct vmw_resource*) ;

__attribute__((used)) static int FUNC_6(struct vmw_resource *VAR_0)
{
 struct vmw_private *VAR_1 = VAR_0->dev_priv;
 struct vmw_dx_shader *VAR_2 = FUNC_4(VAR_0);
 int VAR_3 = 0;

 FUNC_0(!VAR_2->committed);

 if (FUNC_5(VAR_0)) {
  FUNC_1(&VAR_1->binding_mutex);
  VAR_3 = FUNC_3(VAR_0);
  FUNC_2(&VAR_1->binding_mutex);
 }

 VAR_0->id = VAR_2->id;
 return VAR_3;
}
