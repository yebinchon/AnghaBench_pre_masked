
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char,int*) ;

__attribute__((used)) static inline void FUNC_1 (char *VAR_0, char *VAR_1, int VAR_2) {
  int VAR_3 = 5;

  char *VAR_4 = VAR_1 + VAR_2;

  while (VAR_1 < VAR_4) {
    FUNC_0 (*VAR_1, &VAR_3);
    if (!*VAR_1 || (VAR_3 == 2 && (unsigned char) *VAR_1 < ' ' && *VAR_1 != 9)) {
      *VAR_0++ = ' ';
    } else {
      *VAR_0++ = *VAR_1;
    }
    VAR_1++;
  }

  *VAR_0 = 0;
}
