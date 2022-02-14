
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char*,char*) ;

int
FUNC_3(void)
{
 int VAR_3;
 u_int VAR_4[4];
 char VAR_5[13];

 FUNC_0(0, VAR_4);
 ((u_int *)&VAR_5)[0] = VAR_4[1];
 ((u_int *)&VAR_5)[1] = VAR_4[3];
 ((u_int *)&VAR_5)[2] = VAR_4[2];
 VAR_5[12] = '\0';

 VAR_3 = 0;
 if (FUNC_2(VAR_5, "AuthenticAMD") == 0) {
  VAR_0 = 1;
 } else if (FUNC_2(VAR_5, "GenuineIntel") == 0) {
  VAR_1 = 1;
 } else {
  FUNC_1(VAR_2, "Unknown cpu vendor \"%s\"\n", VAR_5);
  VAR_3 = -1;
 }
 return (VAR_3);
}
