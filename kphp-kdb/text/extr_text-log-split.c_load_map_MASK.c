
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*,...) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 long long FUNC_5 (long) ;
 char* VAR_6 ;
 long VAR_7 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int,long long,int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

int FUNC_8 (void) {
  int VAR_10 = FUNC_6 (VAR_6, VAR_2);
  if (VAR_10 < 0) {
    FUNC_3 (VAR_8, "cannot open user names file %s: %m\n", VAR_6);
    FUNC_2 (1);
  }
  VAR_7 = FUNC_4 (VAR_10, 0, VAR_3);
  FUNC_0 (VAR_7 >= 0 && VAR_7 == (long) VAR_7);
  FUNC_0 (VAR_7 >= VAR_0 * 4);
  VAR_1 = FUNC_5 (VAR_7);
  FUNC_0 (VAR_1);
  VAR_5 = (unsigned *) VAR_1;

  FUNC_0 (FUNC_4 (VAR_10, 0, VAR_4) == 0);
  long long VAR_11 = 0;
  while (VAR_11 < VAR_7) {
    int VAR_12 = VAR_7 - VAR_11 < (1 << 30) ? VAR_7 - VAR_11 : (1 << 30);
    FUNC_0 (FUNC_7 (VAR_10, VAR_1 + VAR_11, VAR_12) == VAR_12);
    VAR_11 += VAR_12;
  }
  FUNC_1 (VAR_10);

  int VAR_13;
  FUNC_0 (VAR_5[0] == VAR_0 * 4);
  for (VAR_13 = 1; VAR_13 < VAR_0; VAR_13++) {
    FUNC_0 (VAR_5[VAR_13-1] <= VAR_5[VAR_13]);
  }
  FUNC_0 (VAR_5[VAR_0-1] <= VAR_7);
  if (VAR_9 > 0) {
    FUNC_3 (VAR_8, "successfully loaded user names file %s, size %ld\n", VAR_6, VAR_7);
  }

  return 0;
}
