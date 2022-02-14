
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_cmdbuf_res_manager {int resources; } ;
struct vmw_cmdbuf_res {int res; int hash; int head; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct vmw_cmdbuf_res*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct vmw_cmdbuf_res_manager *VAR_0,
    struct vmw_cmdbuf_res *VAR_1)
{
 FUNC_3(&VAR_1->head);
 FUNC_0(FUNC_1(&VAR_0->resources, &VAR_1->hash));
 FUNC_4(&VAR_1->res);
 FUNC_2(VAR_1);
}
