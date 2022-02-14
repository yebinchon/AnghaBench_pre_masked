
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct list_objects_filter_options {scalar_t__ choice; int sparse_oid_name; int tree_exclude_depth; int blob_limit_value; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,int *) ;
 int FUNC_3 (struct list_objects_filter_options*,int ,int) ;
 int FUNC_4 (struct list_objects_filter_options*,char const*,struct strbuf*) ;
 scalar_t__ FUNC_5 (char const*,char*,char const**) ;
 int FUNC_6 (struct strbuf*,int ,char const*) ;
 int FUNC_7 (struct strbuf*,int ) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(
 struct list_objects_filter_options *VAR_4,
 const char *VAR_5,
 struct strbuf *VAR_6)
{
 const char *VAR_7;

 if (!VAR_5)
  return 0;

 if (VAR_4->choice)
  FUNC_0("filter_options already populated");

 if (!FUNC_8(VAR_5, "blob:none")) {
  VAR_4->choice = VAR_1;
  return 0;

 } else if (FUNC_5(VAR_5, "blob:limit=", &VAR_7)) {
  if (FUNC_2(VAR_7, &VAR_4->blob_limit_value)) {
   VAR_4->choice = VAR_0;
   return 0;
  }

 } else if (FUNC_5(VAR_5, "tree:", &VAR_7)) {
  if (!FUNC_2(VAR_7, &VAR_4->tree_exclude_depth)) {
   FUNC_7(VAR_6, FUNC_1("expected 'tree:<depth>'"));
   return 1;
  }
  VAR_4->choice = VAR_3;
  return 0;

 } else if (FUNC_5(VAR_5, "sparse:oid=", &VAR_7)) {
  VAR_4->sparse_oid_name = FUNC_9(VAR_7);
  VAR_4->choice = VAR_2;
  return 0;

 } else if (FUNC_5(VAR_5, "sparse:path=", &VAR_7)) {
  if (VAR_6) {
   FUNC_7(
    VAR_6,
    FUNC_1("sparse:path filters support has been dropped"));
  }
  return 1;

 } else if (FUNC_5(VAR_5, "combine:", &VAR_7)) {
  return FUNC_4(VAR_4, VAR_7, VAR_6);

 }





 FUNC_6(VAR_6, FUNC_1("invalid filter-spec '%s'"), VAR_5);

 FUNC_3(VAR_4, 0, sizeof(*VAR_4));
 return 1;
}
