
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vmw_sw_context {void* buf_start; } ;
struct vmw_private {int dummy; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct vmw_private*,struct vmw_sw_context*,void*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct vmw_private *VAR_1,
        struct vmw_sw_context *VAR_2, void *VAR_3,
        uint32_t VAR_4)
{
 int32_t VAR_5 = VAR_4;
 int VAR_6;

 VAR_2->buf_start = VAR_3;

 while (VAR_5 > 0) {
  VAR_4 = VAR_5;
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_4);
  if (FUNC_1(VAR_6 != 0))
   return VAR_6;
  VAR_3 = (void *)((unsigned long) VAR_3 + VAR_4);
  VAR_5 -= VAR_4;
 }

 if (FUNC_1(VAR_5 != 0)) {
  FUNC_0("Command verifier out of sync.\n");
  return -VAR_0;
 }

 return 0;
}
