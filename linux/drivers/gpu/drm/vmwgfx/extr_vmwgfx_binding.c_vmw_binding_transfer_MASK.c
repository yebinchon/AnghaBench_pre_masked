
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmw_ctx_binding_state {int list; } ;
struct vmw_ctx_bindinfo {size_t bt; TYPE_1__* res; int res_list; int ctx_list; int scrubbed; int * ctx; } ;
struct TYPE_4__ {int size; } ;
struct TYPE_3__ {int binding_head; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct vmw_ctx_bindinfo*,struct vmw_ctx_bindinfo const*,int ) ;
 int FUNC_3 (struct vmw_ctx_bindinfo*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_4(struct vmw_ctx_binding_state *VAR_1,
     const struct vmw_ctx_binding_state *VAR_2,
     const struct vmw_ctx_bindinfo *VAR_3)
{
 size_t VAR_4 = (unsigned long)VAR_3 - (unsigned long)VAR_2;
 struct vmw_ctx_bindinfo *VAR_5 = (struct vmw_ctx_bindinfo *)
  ((unsigned long) VAR_1 + VAR_4);

 if (VAR_5->ctx != ((void*)0)) {
  FUNC_0(VAR_3->scrubbed);

  FUNC_3(VAR_5);
 }

 if (VAR_3->res != ((void*)0)) {
  FUNC_2(VAR_5, VAR_3, VAR_0[VAR_3->bt].size);
  FUNC_1(&VAR_5->ctx_list, &VAR_1->list);
  FUNC_1(&VAR_5->res_list, &VAR_5->res->binding_head);
 }
}
