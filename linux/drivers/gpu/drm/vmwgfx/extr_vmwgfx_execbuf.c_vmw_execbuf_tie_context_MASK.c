
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vmw_sw_context {int man; int dx_ctx_node; TYPE_1__* fp; int ctx; } ;
struct vmw_resource {int dummy; } ;
struct vmw_private {int dummy; } ;
struct TYPE_2__ {int tfile; } ;


 scalar_t__ FUNC_0 (struct vmw_resource*) ;
 int FUNC_1 (struct vmw_resource*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,unsigned int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (struct vmw_resource*) ;
 int FUNC_5 (struct vmw_sw_context*,struct vmw_resource*) ;
 int FUNC_6 (struct vmw_sw_context*,struct vmw_resource*,int ) ;
 unsigned int FUNC_7 (struct vmw_private*,int ) ;
 int VAR_3 ;
 struct vmw_resource* FUNC_8 (struct vmw_private*,int ,scalar_t__,int ) ;
 int FUNC_9 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct vmw_private *VAR_4,
       struct vmw_sw_context *VAR_5,
       uint32_t VAR_6)
{
 struct vmw_resource *VAR_7;
 int VAR_8;
 unsigned int VAR_9;

 if (VAR_6 == VAR_0)
  return 0;

 VAR_9 = FUNC_7(VAR_4, VAR_3);
 VAR_8 = FUNC_9(VAR_5->ctx, VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_8
  (VAR_4, VAR_5->fp->tfile, VAR_6,
   VAR_2);
 if (FUNC_0(VAR_7)) {
  FUNC_2("Could not find or user DX context 0x%08x.\n",
          (unsigned int) VAR_6);
  return FUNC_1(VAR_7);
 }

 VAR_8 = FUNC_6(VAR_5, VAR_7, VAR_1);
 if (FUNC_3(VAR_8 != 0))
  return VAR_8;

 VAR_5->dx_ctx_node = FUNC_5(VAR_5, VAR_7);
 VAR_5->man = FUNC_4(VAR_7);

 return 0;
}
