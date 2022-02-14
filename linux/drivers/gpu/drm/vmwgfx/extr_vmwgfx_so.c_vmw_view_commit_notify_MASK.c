
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_view {int committed; int view_id; int srf_head; int cotable_head; int cotable; int srf; } ;
struct vmw_surface {int view_list; } ;
struct vmw_resource {int id; struct vmw_private* dev_priv; } ;
struct vmw_private {int binding_mutex; } ;
typedef enum vmw_cmdbuf_res_state { ____Placeholder_vmw_cmdbuf_res_state } vmw_cmdbuf_res_state ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 struct vmw_surface* FUNC_5 (int ) ;
 struct vmw_view* FUNC_6 (struct vmw_resource*) ;

__attribute__((used)) static void FUNC_7(struct vmw_resource *VAR_1,
       enum vmw_cmdbuf_res_state VAR_2)
{
 struct vmw_view *VAR_3 = FUNC_6(VAR_1);
 struct vmw_private *VAR_4 = VAR_1->dev_priv;

 FUNC_2(&VAR_4->binding_mutex);
 if (VAR_2 == VAR_0) {
  struct vmw_surface *VAR_5 = FUNC_5(VAR_3->srf);

  FUNC_0(&VAR_3->srf_head, &VAR_5->view_list);
  FUNC_4(VAR_3->cotable, &VAR_3->cotable_head);
  VAR_3->committed = 1;
  VAR_1->id = VAR_3->view_id;

 } else {
  FUNC_1(&VAR_3->cotable_head);
  FUNC_1(&VAR_3->srf_head);
  VAR_3->committed = 0;
  VAR_1->id = -1;
 }
 FUNC_3(&VAR_4->binding_mutex);
}
