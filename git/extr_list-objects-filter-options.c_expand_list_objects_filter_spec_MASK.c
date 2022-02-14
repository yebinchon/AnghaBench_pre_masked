
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct list_objects_filter_options {scalar_t__ choice; int filter_spec; int blob_limit_value; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 char const* FUNC_0 (struct list_objects_filter_options*) ;
 int FUNC_1 (struct strbuf*,char*,int ) ;
 int FUNC_2 (struct strbuf*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

const char *FUNC_5(
 struct list_objects_filter_options *VAR_2)
{
 if (VAR_2->choice == VAR_0) {
  struct strbuf VAR_3 = VAR_1;
  FUNC_1(&VAR_3, "blob:limit=%lu",
       VAR_2->blob_limit_value);
  FUNC_4(&VAR_2->filter_spec, 0);
  FUNC_3(
   &VAR_2->filter_spec,
   FUNC_2(&VAR_3, ((void*)0)));
 }

 return FUNC_0(VAR_2);
}
