
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vmw_sw_context {int dummy; } ;
struct vmw_private {int dummy; } ;
struct vmw_buffer_object {int dummy; } ;
struct TYPE_2__ {int ptr; } ;
typedef TYPE_1__ SVGAFifoCmdDefineGMRFB ;


 int FUNC_0 (struct vmw_private*,struct vmw_sw_context*,int *,struct vmw_buffer_object**) ;

__attribute__((used)) static int FUNC_1(struct vmw_private *VAR_0,
          struct vmw_sw_context *VAR_1,
          void *VAR_2)
{
 struct vmw_buffer_object *VAR_3;

 struct {
  uint32_t header;
  SVGAFifoCmdDefineGMRFB body;
 } *VAR_4 = VAR_2;

 return FUNC_0(VAR_0, VAR_1, &VAR_4->body.ptr,
           &VAR_3);
}
