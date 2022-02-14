
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,char*,int*,int*,int*,int*,int*,int*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(char *VAR_1, u_char *VAR_2)
{
 int VAR_3, VAR_4[6];

 VAR_3 = FUNC_1(VAR_1, "%x:%x:%x:%x:%x:%x", &VAR_4[0], &VAR_4[1], &VAR_4[2],
     &VAR_4[3], &VAR_4[4], &VAR_4[5]);
 if (VAR_3 != 6) {
  FUNC_0(VAR_0, "ndp: invalid Ethernet address '%s'\n", VAR_1);
  return (1);
 }
 for (VAR_3 = 0; VAR_3 < 6; VAR_3++)
  VAR_2[VAR_3] = VAR_4[VAR_3];
 return (0);
}
