
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;

__attribute__((used)) static inline void FUNC_0 (void) {
  while (*VAR_0 && (VAR_0[0] != '^' || VAR_0[1] != '*' || VAR_0[2] != '^')
        && (VAR_0[0] != '%' || VAR_0[1] != '*' || VAR_0[2] != '%')) {
    if ((unsigned char) *VAR_0 < ' ') { *VAR_0 = ' '; }
    VAR_0++;
  }
  *VAR_0 = 0;
}
