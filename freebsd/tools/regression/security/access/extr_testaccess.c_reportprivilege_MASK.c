
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int gid_t ;


 int FUNC_0 (int*,int*,int*) ;
 int FUNC_1 (int*,int*,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;

int
FUNC_4(char *VAR_0)
{
 uid_t VAR_1, VAR_2, VAR_3;
 gid_t VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_2, &VAR_1, &VAR_3);
 if (VAR_7) {
  FUNC_2("getresuid");
  return (VAR_7);
 }

 VAR_7 = FUNC_0(&VAR_5, &VAR_4, &VAR_6);
 if (VAR_7) {
  FUNC_2("getresgid");
  return (VAR_7);
 }

 if (VAR_0)
  FUNC_3("%s: ", VAR_0);
 FUNC_3("ruid: %d, euid: %d, suid: %d,     ", VAR_2, VAR_1, VAR_3);
 FUNC_3("rgid: %d, egid: %d, sgid: %d\n", VAR_5, VAR_4, VAR_6);

 return (0);
}
