
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char const*,int) ;
 int* VAR_2 ;

void FUNC_2 (const void *VAR_3, size_t VAR_4) {
  const char *VAR_5 = VAR_3;
  while (VAR_4 > 0) {
    int VAR_6 = VAR_1[2] + VAR_0 - VAR_2[2];
    if (VAR_6 > VAR_4) VAR_6 = VAR_4;
    FUNC_1 (VAR_2[2], VAR_5, VAR_6);
    VAR_5 += VAR_6;
    VAR_2[2] += VAR_6;
    VAR_4 -= VAR_6;
    if (VAR_4 > 0) FUNC_0();
  }
}
