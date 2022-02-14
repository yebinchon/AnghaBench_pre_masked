
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int FUNC_0 (char*,...) ;
 int* VAR_0 ;
 char** VAR_1 ;

__attribute__((used)) static void
FUNC_1(char *VAR_2, time_t VAR_3)
{
 int VAR_4;
 int VAR_5[3];

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  VAR_5[VAR_4] = (int)(VAR_3 % VAR_0[VAR_4]);
  VAR_3 /= VAR_0[VAR_4];
 }
 FUNC_0("%s", VAR_2);
 while (--VAR_4 >= 0)
  if (VAR_5[VAR_4] || (VAR_4 == 0 && VAR_5[1] == 0 && VAR_5[2] == 0))
   FUNC_0("%d %s%c ", VAR_5[VAR_4], VAR_1[VAR_4],
    VAR_5[VAR_4] == 1 ? '\0' : 's');
 FUNC_0("\r\n!\r\n");
}
