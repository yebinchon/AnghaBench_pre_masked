
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int *,int,int ) ;

void FUNC_2 (int *VAR_5, int VAR_6) {
  int VAR_7, VAR_8;
  int VAR_9 = (1 << 30) - 1;
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
    int VAR_10 = 1, VAR_11 = VAR_5[VAR_7], VAR_12;
    if (VAR_11 < 0) {
      VAR_11 = -VAR_11;
    }

    if (VAR_11 > (1 << 30)) {
      VAR_10 = 0;
      VAR_11 &= VAR_9;
    }

    if (VAR_11 % VAR_0 != VAR_2) {
      continue;
    }
    FUNC_0 (VAR_11 < VAR_3);

    for (VAR_8 = 0; VAR_8 < VAR_6 ; VAR_8++) {
      if (VAR_7 != VAR_8) {

        VAR_12 = VAR_5[VAR_8];
        if (VAR_12 < 0) {
          continue;
        }
        FUNC_0 (VAR_12 < VAR_3);


        VAR_12 &= VAR_9;

        FUNC_1 (&VAR_4[VAR_11 / VAR_0], 2 * VAR_12 + VAR_10, VAR_1);
      }
    }
  }
}
