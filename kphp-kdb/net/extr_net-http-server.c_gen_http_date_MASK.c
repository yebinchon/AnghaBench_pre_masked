
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (char*,char*,char*,int,char*,int,int,int,int) ;

void FUNC_2 (char VAR_3[29], int VAR_4) {
  int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
  if (VAR_4 < 0) VAR_4 = 0;
  VAR_10 = VAR_4 % 60;
  VAR_4 /= 60;
  VAR_9 = VAR_4 % 60;
  VAR_4 /= 60;
  VAR_8 = VAR_4 % 24;
  VAR_4 /= 24;
  VAR_13 = (VAR_4 + 4) % 7;
  VAR_11 = VAR_4 % (365 * 3 + 366);
  VAR_4 /= (365 * 3 + 366);
  VAR_7 = VAR_4 * 4 + 1970;
  if (VAR_11 >= 365) {
    VAR_7++;
    VAR_11 -= 365;
    if (VAR_11 >= 365) {
      VAR_7++;
      VAR_11 -= 365;
      if (VAR_11 >= 366) {
        VAR_7++;
        VAR_11 -= 366;
      }
    }
  }
  if (VAR_7 & 3) {
    VAR_0[1] = 28;
  } else {
    VAR_0[1] = 29;
  }

  for (VAR_12 = 0; VAR_12 < 12; VAR_12++) {
    if (VAR_11 < VAR_0[VAR_12]) {
      break;
    }
    VAR_11 -= VAR_0[VAR_12];
  }

  VAR_5 = VAR_11 + 1;
  VAR_6 = VAR_12;
  FUNC_0 (VAR_5 >= 1 && VAR_5 <= 31 && VAR_6 >=0 && VAR_6 <= 11 &&
      VAR_7 >= 1970 && VAR_7 <= 2039);

  FUNC_1 (VAR_3, "%.3s, %.2d %.3s %d %.2d:%.2d:%.2d GM",
      VAR_1 + VAR_13 * 3, VAR_5, VAR_2 + VAR_6 * 3, VAR_7,
      VAR_8, VAR_9, VAR_10);
  VAR_3[28] = 'T';
}
