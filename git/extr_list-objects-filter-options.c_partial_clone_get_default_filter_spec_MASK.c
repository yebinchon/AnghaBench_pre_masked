
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct promisor_remote {int partial_clone_filter; } ;
struct list_objects_filter_options {int filter_spec; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct list_objects_filter_options*,int ,struct strbuf*) ;
 struct promisor_remote* FUNC_1 (char const*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(
 struct list_objects_filter_options *VAR_1,
 const char *VAR_2)
{
 struct promisor_remote *VAR_3 = FUNC_1(VAR_2);
 struct strbuf VAR_4 = VAR_0;




 if (!VAR_3)
  return;

 FUNC_3(&VAR_1->filter_spec,
      VAR_3->partial_clone_filter);
 FUNC_0(VAR_1,
      VAR_3->partial_clone_filter,
      &VAR_4);
 FUNC_2(&VAR_4);
}
