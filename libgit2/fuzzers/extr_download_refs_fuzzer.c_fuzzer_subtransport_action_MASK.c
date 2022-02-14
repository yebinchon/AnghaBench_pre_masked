
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuzzer_subtransport {int data; } ;
struct fuzzer_stream {int dummy; } ;
typedef int git_smart_subtransport_stream ;
typedef int git_smart_subtransport ;
typedef char const* git_smart_service_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (struct fuzzer_stream**,int *) ;

__attribute__((used)) static int FUNC_2(
 git_smart_subtransport_stream **VAR_0,
 git_smart_subtransport *VAR_1,
 const char *VAR_2,
 git_smart_service_t VAR_3)
{
 struct fuzzer_subtransport *VAR_4 = (struct fuzzer_subtransport *) VAR_1;

 FUNC_0(VAR_2);
 FUNC_0(VAR_3);

 return FUNC_1((struct fuzzer_stream **) VAR_0, &VAR_4->data);
}
