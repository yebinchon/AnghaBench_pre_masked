
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int) ;
 int * VAR_4 ;
 int FUNC_1 (int,int,int) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_2 (int,int) ;
 int * VAR_7 ;

void FUNC_3 (int VAR_8, int VAR_9, int VAR_10, int VAR_11) {
  int VAR_12;
  int VAR_13 = FUNC_1 (VAR_9, VAR_10, VAR_11);
  if (VAR_13 > 0) {
    VAR_12 = VAR_13 % VAR_5;
  } else {
    VAR_12 = (-VAR_13) % VAR_5;
  }
  if (VAR_12 == 422) {
    VAR_7[VAR_9] ++;
    VAR_7[0] ++;
    if (VAR_10 > 0) {
      VAR_6[VAR_10 / VAR_5] ++;
    } else {
      VAR_6[(-VAR_10) / VAR_5] ++;
    }
  }
  VAR_7[1] ++;

  if (VAR_12 == 1) {
    FUNC_0 (VAR_8 / VAR_2 + VAR_1/2 < VAR_1 && VAR_8 / VAR_2 + VAR_1/2 >= 0);
    VAR_3[VAR_1/2 + VAR_8 / VAR_2] ++;
  }
  VAR_4[VAR_12]++;
  FUNC_2 (VAR_12, VAR_0 + VAR_9);
  FUNC_2 (VAR_12, VAR_8);
  FUNC_2 (VAR_12, VAR_10);
  FUNC_2 (VAR_12, VAR_11);
}
