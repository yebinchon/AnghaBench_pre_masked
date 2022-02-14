
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmw_ctx_binding_state {int list; } ;
struct vmw_ctx_bindinfo {size_t bt; int scrubbed; int res_list; int ctx_list; int * ctx; } ;
struct vmw_binding_info {int size; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct vmw_ctx_bindinfo*,struct vmw_ctx_bindinfo const*,int ) ;
 int FUNC_3 (struct vmw_ctx_bindinfo*) ;
 struct vmw_binding_info* VAR_0 ;
 struct vmw_ctx_bindinfo* FUNC_4 (struct vmw_ctx_binding_state*,size_t,int ,int ) ;

void FUNC_5(struct vmw_ctx_binding_state *VAR_1,
      const struct vmw_ctx_bindinfo *VAR_2,
      u32 VAR_3, u32 VAR_4)
{
 struct vmw_ctx_bindinfo *VAR_5 =
  FUNC_4(VAR_1, VAR_2->bt, VAR_3, VAR_4);
 const struct vmw_binding_info *VAR_6 = &VAR_0[VAR_2->bt];

 if (VAR_5->ctx != ((void*)0))
  FUNC_3(VAR_5);

 FUNC_2(VAR_5, VAR_2, VAR_6->size);
 VAR_5->scrubbed = 0;
 FUNC_1(&VAR_5->ctx_list, &VAR_1->list);
 FUNC_0(&VAR_5->res_list);
}
