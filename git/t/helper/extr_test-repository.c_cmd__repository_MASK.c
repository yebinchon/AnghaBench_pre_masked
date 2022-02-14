
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char const*,struct object_id*,char const**) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,char const*,struct object_id*) ;
 int FUNC_4 (char const*,char const*,struct object_id*) ;

int FUNC_5(int VAR_0, const char **VAR_1)
{
 if (VAR_0 < 2)
  FUNC_0("must have at least 2 arguments");
 if (!FUNC_2(VAR_1[1], "parse_commit_in_graph")) {
  struct object_id VAR_2;
  if (VAR_0 < 5)
   FUNC_0("not enough arguments");
  if (FUNC_1(VAR_1[4], &VAR_2, &VAR_1[4]))
   FUNC_0("cannot parse oid '%s'", VAR_1[4]);
  FUNC_4(VAR_1[2], VAR_1[3], &VAR_2);
 } else if (!FUNC_2(VAR_1[1], "get_commit_tree_in_graph")) {
  struct object_id VAR_3;
  if (VAR_0 < 5)
   FUNC_0("not enough arguments");
  if (FUNC_1(VAR_1[4], &VAR_3, &VAR_1[4]))
   FUNC_0("cannot parse oid '%s'", VAR_1[4]);
  FUNC_3(VAR_1[2], VAR_1[3], &VAR_3);
 } else {
  FUNC_0("unrecognized '%s'", VAR_1[1]);
 }
 return 0;
}
