
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vmw_sw_context {int res_relocations; TYPE_2__* dx_ctx_node; } ;
struct vmw_private {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ctx; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 void* FUNC_0 (struct vmw_private*,int ) ;
 void* FUNC_1 (struct vmw_private*,int ,int ) ;
 int FUNC_2 (void*,void*,int ) ;
 int FUNC_3 (struct vmw_sw_context*) ;
 int FUNC_4 (struct vmw_private*,int ) ;
 int FUNC_5 (void*,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct vmw_private *VAR_1,
       void *VAR_2, u32 VAR_3,
       struct vmw_sw_context *VAR_4)
{
 void *VAR_5;

 if (VAR_4->dx_ctx_node)
  VAR_5 = FUNC_1(VAR_1, VAR_3,
       VAR_4->dx_ctx_node->ctx->id);
 else
  VAR_5 = FUNC_0(VAR_1, VAR_3);

 if (!VAR_5)
  return -VAR_0;

 FUNC_3(VAR_4);
 FUNC_2(VAR_5, VAR_2, VAR_3);
 FUNC_5(VAR_5, &VAR_4->res_relocations);
 FUNC_6(&VAR_4->res_relocations);
 FUNC_4(VAR_1, VAR_3);

 return 0;
}
