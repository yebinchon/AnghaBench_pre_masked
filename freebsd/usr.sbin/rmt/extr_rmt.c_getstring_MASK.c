
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;

void
FUNC_2(char *VAR_2)
{
 int VAR_3;
 char *VAR_4 = VAR_2;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_1(VAR_1, VAR_4+VAR_3, 1) != 1)
   FUNC_0(0);
  if (VAR_4[VAR_3] == '\n')
   break;
 }
 VAR_4[VAR_3] = '\0';
}
