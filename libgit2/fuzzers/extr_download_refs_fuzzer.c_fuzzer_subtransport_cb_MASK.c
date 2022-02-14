
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuzzer_subtransport {int base; } ;
struct fuzzer_buffer {int dummy; } ;
typedef int git_transport ;
typedef int git_smart_subtransport ;


 scalar_t__ FUNC_0 (struct fuzzer_subtransport**,int *,struct fuzzer_buffer*) ;

int FUNC_1(
 git_smart_subtransport **VAR_0,
 git_transport *VAR_1,
 void *VAR_2)
{
 struct fuzzer_buffer *VAR_3 = (struct fuzzer_buffer *) VAR_2;
 struct fuzzer_subtransport *VAR_4;

 if (FUNC_0(&VAR_4, VAR_1, VAR_3) < 0)
  return -1;

 *VAR_0 = &VAR_4->base;
 return 0;
}
