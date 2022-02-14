
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 char* FUNC_0 (struct object_id const*) ;
 int FUNC_1 (char*,char const*,char const*,char const*) ;

__attribute__((used)) static void FUNC_2(const struct object_id *VAR_0,
     const char *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = "WORKTREE";
 if (VAR_0)
  VAR_3 = FUNC_0(VAR_0);
 FUNC_1("%s:.gitmodules, multiple configurations found for "
   "'submodule.%s.%s'. Skipping second one!",
   VAR_3, VAR_1, VAR_2);
}
