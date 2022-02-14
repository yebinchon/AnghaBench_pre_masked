
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const) ;

__attribute__((used)) static void FUNC_1 (void) {
  const char *VAR_3 = VAR_1;
  while (*VAR_3) {
    int VAR_4 = FUNC_0 (*VAR_3);
    if (VAR_4 >= 0 && VAR_4 < VAR_0) {
      VAR_2 |= 1 << VAR_4;
    }
    VAR_3++;
  }
}
