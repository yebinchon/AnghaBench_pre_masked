
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct commit {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char const*,struct commit*,struct commit*) ;
 int FUNC_2 (int ,char const*,...) ;
 struct commit* FUNC_3 (int ,struct object_id const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, const char *VAR_2,
          const struct object_id *VAR_3, struct commit *VAR_4,
          int VAR_5, int VAR_6)
{
 struct commit *VAR_7 = FUNC_3(VAR_0, VAR_3);
 if (!VAR_7) {
  FUNC_2(FUNC_0("Couldn't look up commit object for '%s'"), VAR_2);
  return -1;
 }
 if (!VAR_6 && !FUNC_1(VAR_5, VAR_1, VAR_7, VAR_4)) {
  FUNC_2(FUNC_0("The branch '%s' is not fully merged.\n"
        "If you are sure you want to delete it, "
        "run 'git branch -D %s'."), VAR_1, VAR_1);
  return -1;
 }
 return 0;
}
