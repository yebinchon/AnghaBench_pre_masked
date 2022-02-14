
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

char *FUNC_1(char *VAR_0, char *VAR_1) {
 int VAR_2;

 while(*VAR_0) {
  for (VAR_2 = 0; VAR_1[VAR_2] && VAR_0[VAR_2]; VAR_2++) {
   if (FUNC_0(VAR_1[VAR_2]) != FUNC_0(VAR_0[VAR_2])) break;
  }
  if (!VAR_1[VAR_2]) return VAR_0;
  VAR_0++;
 }
 return ((void*)0);
}
