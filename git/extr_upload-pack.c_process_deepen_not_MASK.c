
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,char const*,int ,struct object_id*,char**) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*,char const**) ;
 int FUNC_4 (struct string_list*,char*) ;
 int FUNC_5 (char const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(const char *VAR_1, struct string_list *VAR_2, int *VAR_3)
{
 const char *VAR_4;
 if (FUNC_3(VAR_1, "deepen-not ", &VAR_4)) {
  char *VAR_5 = ((void*)0);
  struct object_id VAR_6;
  if (FUNC_1(VAR_0, VAR_4, FUNC_5(VAR_4), &VAR_6, &VAR_5) != 1)
   FUNC_0("git upload-pack: ambiguous deepen-not: %s", VAR_1);
  FUNC_4(VAR_2, VAR_5);
  FUNC_2(VAR_5);
  *VAR_3 = 1;
  return 1;
 }
 return 0;
}
