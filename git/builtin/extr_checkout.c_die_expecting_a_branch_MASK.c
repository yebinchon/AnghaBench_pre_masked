
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct branch_info {char const* name; scalar_t__ commit; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const*,int ,struct object_id*,char**) ;
 scalar_t__ FUNC_3 (char const*,char*,char const**) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(const struct branch_info *VAR_0)
{
 struct object_id VAR_1;
 char *VAR_2;

 if (FUNC_2(VAR_0->name, FUNC_4(VAR_0->name), &VAR_1, &VAR_2) == 1) {
  const char *VAR_3 = VAR_2;

  if (FUNC_3(VAR_3, "refs/tags/", &VAR_3))
   FUNC_1(FUNC_0("a branch is expected, got tag '%s'"), VAR_3);
  if (FUNC_3(VAR_3, "refs/remotes/", &VAR_3))
   FUNC_1(FUNC_0("a branch is expected, got remote branch '%s'"), VAR_3);
  FUNC_1(FUNC_0("a branch is expected, got '%s'"), VAR_3);
 }
 if (VAR_0->commit)
  FUNC_1(FUNC_0("a branch is expected, got commit '%s'"), VAR_0->name);




 FUNC_1(FUNC_0("a branch is expected, got '%s'"), VAR_0->name);
}
