
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 char* VAR_1 ;
 int FUNC_2 (char**,int,int,int ) ;
 int VAR_2 ;
 char** VAR_3 ;

char *FUNC_3 (char *VAR_4) {
  int VAR_5;
  for (VAR_5 = 0; VAR_4[VAR_5] == ' '; VAR_5++) {
  }

  int VAR_6 = 0;
  while (VAR_4[VAR_5]) {
    VAR_3[VAR_6++] = VAR_4 + VAR_5;
    while (VAR_4[VAR_5] && VAR_4[VAR_5] != ' ') {
      VAR_5++;
    }
    while (VAR_4[VAR_5] == ' ') {
      VAR_5++;
    }
  }
  VAR_4[VAR_5] = ' ';

  int VAR_7 = 0;
  FUNC_2 (VAR_3, VAR_6, sizeof (char *), VAR_2);

  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
    if (VAR_5 == 0 || !FUNC_1 (VAR_3[VAR_5 - 1], VAR_3[VAR_5])) {
      VAR_3[VAR_7++] = VAR_3[VAR_5];
    }
  }
  VAR_6 = VAR_7;

  char *VAR_8 = VAR_1;
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
    char *VAR_9 = VAR_3[VAR_5];
    while (*VAR_9 != ' ') {
      *VAR_8++ = *VAR_9++;
    }
    *VAR_8++ = '+';
  }
  *VAR_8++ = 0;

  FUNC_0 (VAR_8 - VAR_1 < VAR_0);
  return VAR_1;
}
