
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 char* VAR_1 ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_5(int VAR_4, char VAR_5[]) {
 int VAR_6;
 char *VAR_7;

 FUNC_0(VAR_5);
 for (VAR_6 = 0; VAR_3 != VAR_0 && VAR_3 != VAR_4; VAR_3 = FUNC_3()) {
  for (VAR_7 = VAR_5; *VAR_7 && VAR_1[VAR_3] != *VAR_7; VAR_7++)
   ;
  if (VAR_1[VAR_3] == *VAR_7)
   break;
  if (VAR_6++ == 0)
   FUNC_1("skipping");
  if (VAR_6 <= 8)
   FUNC_4();
  else if (VAR_6 == 9)
   FUNC_2(VAR_2, " ...");
 }
 if (VAR_6 > 8) {
  FUNC_2(VAR_2, " up to");
  FUNC_4();
 }
 if (VAR_6 > 0)
  FUNC_2(VAR_2, "\n");
}
