
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_resource {int id; struct vmw_private* dev_priv; } ;
struct vmw_private {int binding_mutex; } ;
struct vmw_dx_shader {int committed; int id; int cotable_head; int cotable; } ;
typedef enum vmw_cmdbuf_res_state { ____Placeholder_vmw_cmdbuf_res_state } vmw_cmdbuf_res_state ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 struct vmw_dx_shader* FUNC_4 (struct vmw_resource*) ;

__attribute__((used)) static void FUNC_5(struct vmw_resource *VAR_1,
     enum vmw_cmdbuf_res_state VAR_2)
{
 struct vmw_dx_shader *VAR_3 = FUNC_4(VAR_1);
 struct vmw_private *VAR_4 = VAR_1->dev_priv;

 if (VAR_2 == VAR_0) {
  FUNC_1(&VAR_4->binding_mutex);
  FUNC_3(VAR_3->cotable,
      &VAR_3->cotable_head);
  VAR_3->committed = 1;
  VAR_1->id = VAR_3->id;
  FUNC_2(&VAR_4->binding_mutex);
 } else {
  FUNC_1(&VAR_4->binding_mutex);
  FUNC_0(&VAR_3->cotable_head);
  VAR_3->committed = 0;
  VAR_1->id = -1;
  FUNC_2(&VAR_4->binding_mutex);
 }
}
