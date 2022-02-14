
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;



char *
FUNC_0(u_short VAR_0)
{
 static char VAR_1[100];

 VAR_1[0] = '-';
 VAR_1[1] = '-';
 VAR_1[2] = ((VAR_0 & 0400) ? 'r' : '-');
 VAR_1[3] = ((VAR_0 & 0200) ? 'w' : '-');
 VAR_1[4] = ((VAR_0 & 0100) ? 'a' : '-');
 VAR_1[5] = ((VAR_0 & 0040) ? 'r' : '-');
 VAR_1[6] = ((VAR_0 & 0020) ? 'w' : '-');
 VAR_1[7] = ((VAR_0 & 0010) ? 'a' : '-');
 VAR_1[8] = ((VAR_0 & 0004) ? 'r' : '-');
 VAR_1[9] = ((VAR_0 & 0002) ? 'w' : '-');
 VAR_1[10] = ((VAR_0 & 0001) ? 'a' : '-');
 VAR_1[11] = '\0';
 return (&VAR_1[0]);
}
