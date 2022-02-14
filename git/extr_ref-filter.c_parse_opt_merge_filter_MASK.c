
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_filter {int merge_commit; scalar_t__ merge; } ;
struct option {int long_name; struct ref_filter* value; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (char const*,struct object_id*) ;
 int FUNC_5 (int ,struct object_id*,int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_2 ;

int FUNC_7(const struct option *VAR_3, const char *VAR_4, int VAR_5)
{
 struct ref_filter *VAR_6 = VAR_3->value;
 struct object_id VAR_7;
 int VAR_8 = FUNC_6(VAR_3->long_name, "no");

 FUNC_0(VAR_5);

 if (VAR_6->merge) {
  if (VAR_8) {
   return FUNC_3(FUNC_1("option `%s' is incompatible with --merged"),
         VAR_3->long_name);
  } else {
   return FUNC_3(FUNC_1("option `%s' is incompatible with --no-merged"),
         VAR_3->long_name);
  }
 }

 VAR_6->merge = VAR_8
  ? VAR_1
  : VAR_0;

 if (FUNC_4(VAR_4, &VAR_7))
  FUNC_2(FUNC_1("malformed object name %s"), VAR_4);

 VAR_6->merge_commit = FUNC_5(VAR_2,
         &VAR_7, 0);
 if (!VAR_6->merge_commit)
  return FUNC_3(FUNC_1("option `%s' must point to a commit"), VAR_3->long_name);

 return 0;
}
