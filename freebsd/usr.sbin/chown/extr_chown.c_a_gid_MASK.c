
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int gr_gid; } ;


 struct group* FUNC_0 (char const*) ;
 int VAR_0 ;
 char const* VAR_1 ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_2)
{
 struct group *VAR_3;

 if (*VAR_2 == '\0')
  return;
 VAR_1 = VAR_2;
 VAR_0 = ((VAR_3 = FUNC_0(VAR_2)) != ((void*)0)) ? VAR_3->gr_gid : FUNC_1(VAR_2, "group");
}
