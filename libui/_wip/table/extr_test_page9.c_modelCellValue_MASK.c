
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiTableModel ;
typedef int intmax_t ;


 void* FUNC_0 (int) ;
 void* FUNC_1 (char*) ;

void *FUNC_2(uiTableModel *VAR_0, void *VAR_1, intmax_t VAR_2, intmax_t VAR_3)
{
 char VAR_4[20];

 VAR_4[0] = 'R';
 VAR_4[1] = 'o';
 VAR_4[2] = 'w';
 VAR_4[3] = ' ';
 VAR_4[4] = VAR_2 + '0';
 VAR_4[5] = '\0';
 switch (VAR_3) {
 case 0:
 case 1:
  return FUNC_1(VAR_4);
 case 2:
  return FUNC_0(VAR_2 % 2 == 0);
 case 3:
  return FUNC_0(VAR_2 % 3 == 0);
 }

 return ((void*)0);
}
