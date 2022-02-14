
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vmw_sw_context {int res_relocations; TYPE_2__* dx_ctx_node; } ;
struct vmw_private {int cman; } ;
struct vmw_cmdbuf_header {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ctx; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmw_sw_context*) ;
 int FUNC_1 (int ,int ,struct vmw_cmdbuf_header*,int) ;
 void* FUNC_2 (int ,int ,int ,int,struct vmw_cmdbuf_header*) ;
 int FUNC_3 (void*,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct vmw_private *VAR_1,
         struct vmw_cmdbuf_header *VAR_2,
         u32 VAR_3,
         struct vmw_sw_context *VAR_4)
{
 u32 VAR_5 = ((VAR_4->dx_ctx_node) ? VAR_4->dx_ctx_node->ctx->id :
    VAR_0);
 void *VAR_6 = FUNC_2(VAR_1->cman, VAR_3, VAR_5, 0,
           VAR_2);

 FUNC_0(VAR_4);
 FUNC_3(VAR_6, &VAR_4->res_relocations);
 FUNC_4(&VAR_4->res_relocations);
 FUNC_1(VAR_1->cman, VAR_3, VAR_2, 0);

 return 0;
}
