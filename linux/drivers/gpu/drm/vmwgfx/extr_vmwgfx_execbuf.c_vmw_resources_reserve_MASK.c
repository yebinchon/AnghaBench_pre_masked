
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_sw_context {struct vmw_buffer_object* dx_query_mob; int dx_query_ctx; int ctx; } ;
struct vmw_buffer_object {int dummy; } ;


 int VAR_0 ;
 struct vmw_buffer_object* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct vmw_sw_context *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->ctx, 1);
 if (VAR_2)
  return VAR_2;

 if (VAR_1->dx_query_mob) {
  struct vmw_buffer_object *VAR_3;

  VAR_3 =
   FUNC_0(VAR_1->dx_query_ctx);
  if (VAR_3 &&
      VAR_3 != VAR_1->dx_query_mob) {
   VAR_2 = -VAR_0;
  }
 }

 return VAR_2;
}
