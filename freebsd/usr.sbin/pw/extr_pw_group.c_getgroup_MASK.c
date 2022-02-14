
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int dummy; } ;
typedef scalar_t__ intmax_t ;


 int VAR_0 ;
 struct group* FUNC_0 (scalar_t__) ;
 struct group* FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static struct group *
FUNC_3(char *VAR_1, intmax_t VAR_2, bool VAR_3)
{
 struct group *VAR_4;

 if (VAR_2 < 0 && VAR_1 == ((void*)0))
  FUNC_2(VAR_0, "groupname or id required");
 VAR_4 = (VAR_1 != ((void*)0)) ? FUNC_1(VAR_1) : FUNC_0(VAR_2);
 if (VAR_4 == ((void*)0)) {
  if (!VAR_3)
   return (((void*)0));
  if (VAR_1 == ((void*)0))
   FUNC_2(VAR_0, "unknown gid `%ju'", VAR_2);
  FUNC_2(VAR_0, "unknown group `%s'", VAR_1);
 }
 return (VAR_4);
}
