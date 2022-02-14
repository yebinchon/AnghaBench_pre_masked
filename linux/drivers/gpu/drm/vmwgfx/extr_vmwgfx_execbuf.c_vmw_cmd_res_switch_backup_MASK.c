
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_sw_context {int ctx; } ;
struct vmw_resource {int dummy; } ;
struct vmw_private {int dummy; } ;
struct vmw_buffer_object {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (struct vmw_sw_context*,struct vmw_resource*) ;
 int FUNC_1 (struct vmw_private*,struct vmw_sw_context*,int *,struct vmw_buffer_object**) ;
 int FUNC_2 (int ,void*,struct vmw_buffer_object*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct vmw_private *VAR_1,
         struct vmw_sw_context *VAR_2,
         struct vmw_resource *VAR_3, uint32_t *VAR_4,
         unsigned long VAR_5)
{
 struct vmw_buffer_object *VAR_6;
 void *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_4, &VAR_6);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_2->ctx, VAR_7, VAR_6,
      VAR_5);
 return 0;
}
