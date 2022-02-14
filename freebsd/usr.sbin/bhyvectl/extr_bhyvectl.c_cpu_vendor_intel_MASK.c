
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static bool
FUNC_4(void)
{
 u_int VAR_1[4];
 char VAR_2[13];

 FUNC_0(0, VAR_1);
 ((u_int *)&VAR_2)[0] = VAR_1[1];
 ((u_int *)&VAR_2)[1] = VAR_1[3];
 ((u_int *)&VAR_2)[2] = VAR_1[2];
 VAR_2[12] = '\0';

 if (FUNC_3(VAR_2, "AuthenticAMD") == 0) {
  return (0);
 } else if (FUNC_3(VAR_2, "GenuineIntel") == 0) {
  return (1);
 } else {
  FUNC_2(VAR_0, "Unknown cpu vendor \"%s\"\n", VAR_2);
  FUNC_1(1);
 }
}
