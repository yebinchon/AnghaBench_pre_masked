
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_sigframe_user_layout {int size; int limit; int end_offset; } ;
struct _aarch64_ctx {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rt_sigframe_user_layout*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct rt_sigframe_user_layout *VAR_1)
{
 int VAR_2;


 VAR_1->limit += VAR_0;

 VAR_2 = FUNC_0(VAR_1, &VAR_1->end_offset,
        sizeof(struct _aarch64_ctx));
 if (VAR_2)
  return VAR_2;


 VAR_1->limit = VAR_1->size;
 return 0;
}
