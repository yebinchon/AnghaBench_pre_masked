
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char) ;

char *
FUNC_1(int VAR_5)
{
 static char VAR_6[20] = "-";
 char *VAR_7;



 VAR_7 = VAR_6 + 1;
 if (VAR_5 & VAR_3) *VAR_7++ = 'S';
 if (VAR_5 & VAR_2) *VAR_7++ = 'F';
 if (VAR_5 & VAR_0) *VAR_7++ = 'C';
 if (VAR_5 & VAR_1) *VAR_7++ = 'D';
 if (VAR_5 & VAR_4) *VAR_7++ = 'X';
 *VAR_7 = '\0';
 return (VAR_6);
}
