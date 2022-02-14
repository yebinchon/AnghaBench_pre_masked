
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_list {int dummy; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int FUNC_4 (struct commit_list*) ;

__attribute__((used)) static void FUNC_5(struct commit_list *VAR_1, const char *VAR_2)
{
 if (VAR_2)
  FUNC_1("%s", VAR_2);
 FUNC_3(VAR_0,
  "%s", FUNC_0("Not committing merge; use 'git commit' to complete the merge.\n"));
 FUNC_4(VAR_1);
 FUNC_2(1);
}
