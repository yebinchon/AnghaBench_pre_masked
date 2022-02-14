
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (int) ;

void FUNC_1(char *VAR_0, int VAR_1)
{
 static char VAR_2[] = "0123456789abcdef";


 VAR_0[0] = (VAR_2[(VAR_1 >> 12) & 15]);
 VAR_0[1] = (VAR_2[(VAR_1 >> 8) & 15]);
 VAR_0[2] = (VAR_2[(VAR_1 >> 4) & 15]);
 VAR_0[3] = (VAR_2[(VAR_1) & 15]);

}
