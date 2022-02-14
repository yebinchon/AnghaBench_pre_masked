
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int query_cid_valid; int dummy_query_bo_pinned; int * pinned_bo; int * dummy_query_bo; int query_cid; } ;
struct vmw_fence_obj {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *,struct vmw_private*,struct vmw_fence_obj**,int *) ;
 int FUNC_5 (struct vmw_private*) ;
 int FUNC_6 (struct vmw_fence_obj**) ;
 int FUNC_7 (struct vmw_private*,int ) ;
 int FUNC_8 (int *,int *,int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,struct vmw_fence_obj*) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;

void FUNC_13(struct vmw_private *VAR_1,
         struct vmw_fence_obj *VAR_2)
{
 int VAR_3 = 0;
 struct vmw_fence_obj *VAR_4 = ((void*)0);
 FUNC_1(VAR_0, ((void*)0), 0);

 if (VAR_1->pinned_bo == ((void*)0))
  goto out_unlock;

 VAR_3 = FUNC_8(&VAR_0, VAR_1->pinned_bo, 0,
        0);
 if (VAR_3)
  goto out_no_reserve;

 VAR_3 = FUNC_8(&VAR_0, VAR_1->dummy_query_bo, 0,
        0);
 if (VAR_3)
  goto out_no_reserve;

 VAR_3 = FUNC_11(&VAR_0, 0);
 if (VAR_3)
  goto out_no_reserve;

 if (VAR_1->query_cid_valid) {
  FUNC_0(VAR_2 != ((void*)0));
  VAR_3 = FUNC_7(VAR_1, VAR_1->query_cid);
  if (VAR_3)
   goto out_no_emit;
  VAR_1->query_cid_valid = 0;
 }

 FUNC_2(VAR_1->pinned_bo, 0);
 if (VAR_1->dummy_query_bo_pinned) {
  FUNC_2(VAR_1->dummy_query_bo, 0);
  VAR_1->dummy_query_bo_pinned = 0;
 }
 if (VAR_2 == ((void*)0)) {
  (void) FUNC_4(((void*)0), VAR_1, &VAR_4,
        ((void*)0));
  VAR_2 = VAR_4;
 }
 FUNC_10(&VAR_0, VAR_2);
 if (VAR_4 != ((void*)0))
  FUNC_6(&VAR_4);

 FUNC_12(&VAR_0);
 FUNC_3(&VAR_1->pinned_bo);

out_unlock:
 return;
out_no_emit:
 FUNC_9(&VAR_0);
out_no_reserve:
 FUNC_12(&VAR_0);
 FUNC_5(VAR_1);
 FUNC_3(&VAR_1->pinned_bo);
}
