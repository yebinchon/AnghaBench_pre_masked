
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char const,int ) ;
 int VAR_0 ;

void FUNC_2 (const char *VAR_1, int VAR_2) {
  int VAR_3;
  if (VAR_2 < 0) { FUNC_0 (VAR_0, "[len = %d]", VAR_2); }
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) FUNC_1 (VAR_1[VAR_3], VAR_0);
  FUNC_1 ('\n', VAR_0);
}
