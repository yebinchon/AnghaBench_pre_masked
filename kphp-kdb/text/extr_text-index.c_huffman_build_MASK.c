
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (long long*,int,int) ;

int FUNC_1 (long long *VAR_0, int VAR_1) {
  int VAR_2, VAR_3, VAR_4, VAR_5 = 0;

  VAR_0 += VAR_1-1;


  for (VAR_2 = 1 - VAR_1; VAR_2 <= 0; VAR_2++) {
    if (VAR_0[VAR_2] > 0) {
      VAR_3 = ++VAR_5;
      while (VAR_3 > 1) {
 VAR_4 = (VAR_3 >> 1);
 if (VAR_0[(long) VAR_0[VAR_4]] <= VAR_0[VAR_2]) { break; }
 VAR_0[VAR_3] = VAR_0[VAR_4];
 VAR_3 = VAR_4;
      }
      VAR_0[VAR_3] = VAR_2;
    }
  }

  if (VAR_5 < 2) {
    if (VAR_5) {
      VAR_0[(long) VAR_0[1]] = 1;
    }
    return VAR_5;
  }

  VAR_4 = VAR_5;


  while (VAR_5 >= 2) {
    long long VAR_6 = VAR_0[1], VAR_7 = VAR_0[VAR_5--];
    FUNC_0 (VAR_0, VAR_5, VAR_7);
    VAR_7 = VAR_0[1];
    VAR_0[VAR_5+1] = VAR_0[VAR_6] + VAR_0[VAR_7];
    VAR_0[VAR_6] = VAR_0[VAR_7] = VAR_5+1;
    FUNC_0 (VAR_0, VAR_5, VAR_5+1);
  }


  VAR_5 = VAR_4;
  VAR_0[2] = 0;
  for (VAR_2 = 3; VAR_2 <= VAR_5; VAR_2++) {
    VAR_0[VAR_2] = VAR_0[(long) VAR_0[VAR_2]] + 1;
  }

  for (VAR_2 = 1 - VAR_1; VAR_2 <= 0; VAR_2++) {
    if (VAR_0[VAR_2] > 0) {
      VAR_0[VAR_2] = VAR_0[(long) VAR_0[VAR_2]] + 1;
    }
  }

  return VAR_5;
}
