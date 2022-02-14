
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int gr_gid; } ;
typedef int id_t ;


 struct group* FUNC_0 (char const*) ;
 int FUNC_1 (char const) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char**) ;
 int FUNC_4 (char*,char const*,...) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_0, id_t *VAR_1, const char *VAR_2)
{
 char *VAR_3;
 struct group *VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 if (VAR_4 != ((void*)0)) {
  *VAR_1 = VAR_4->gr_gid;
  return (0);
 }

 if (!FUNC_1(VAR_0[0])) {
  FUNC_4("malformed rule '%s': unknown group '%s'",
      VAR_2, VAR_0);
  return (1);
 }

 *VAR_1 = FUNC_3(VAR_0, &VAR_3);
 if ((size_t)(VAR_3 - VAR_0) != FUNC_2(VAR_0)) {
  FUNC_4("malformed rule '%s': trailing characters "
      "after numerical id", VAR_2);
  return (1);
 }

 return (0);
}
