
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (long long*,int) ;
 int FUNC_2 (long long*,int) ;
 long long* VAR_1 ;
 char* FUNC_3 (char*,int ) ;

int FUNC_4 (char *VAR_2) {
  char *VAR_3 = FUNC_3 (VAR_2, 0);
  if (VAR_3 == ((void*)0)) {
    VAR_1[0] = 0;
    return 0;
  }

  int VAR_4;

  long long *VAR_5 = VAR_1;
  int VAR_6 = 0;

  for (VAR_4 = 0; VAR_3[VAR_4]; ) {
    long long VAR_7 = 3213211;

    while (VAR_3[VAR_4] && VAR_3[VAR_4] != '+') {
      VAR_7 = VAR_7 * 999983 + VAR_3[VAR_4];
      VAR_4++;
    }
    if (VAR_3[VAR_4]) {
      VAR_4++;
    }

    if (VAR_7 == 0) {
      VAR_7 = 1;
    }
    VAR_5[VAR_6++] = VAR_7;
  }

  FUNC_0 (VAR_6 < VAR_0);

  FUNC_1 (VAR_5, VAR_6);
  VAR_6 = FUNC_2 (VAR_5, VAR_6);

  return VAR_6;
}
