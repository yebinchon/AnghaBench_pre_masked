
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ,int*) ;
 int FUNC_1 (char*,int,...) ;
 char* FUNC_2 (int) ;

void FUNC_3(int VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  VAR_3 = FUNC_0(VAR_1, VAR_0, &VAR_2);
  if (!VAR_3)
   FUNC_1("OK: claimed if %d\n", VAR_2);
  else
   FUNC_1("ERROR claiming if %d (%d - %s)\n",
          VAR_2, -VAR_3, FUNC_2(-VAR_3));
 }
}
