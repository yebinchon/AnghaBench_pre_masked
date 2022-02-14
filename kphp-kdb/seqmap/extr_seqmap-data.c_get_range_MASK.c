
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Z ;


 int* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int VAR_11 ;
 int FUNC_1 (int,int const*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int,int const*,int,int*) ;
 int FUNC_3 (int,int const*,int,int*,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int*,int,int,int ) ;
 int FUNC_7 (int ,int,int const*,int,int*,int*) ;
 int VAR_14 ;

int FUNC_8 (int VAR_15, const int *VAR_16, int VAR_17, int *VAR_18, int VAR_19, int *VAR_20, int VAR_21, int *VAR_22, int *VAR_23) {
  if (VAR_15 && VAR_17 && FUNC_2 (VAR_15, VAR_16, VAR_17, VAR_18) > 0) {
    *VAR_22 = *VAR_23 = 0;
    return 0;
  }
  if (VAR_19 > VAR_4) {
    VAR_19 = VAR_4;
  }
  int VAR_24 = VAR_15 ? 0 : FUNC_1 (VAR_15, VAR_16);
  int VAR_25 = VAR_17 ? VAR_12 : FUNC_1 (VAR_17, VAR_18);
  if (VAR_24 == -2 || VAR_25 == -2) {
    return -2;
  }
  int VAR_26[3];
  FUNC_5 (VAR_26, 0, sizeof (VAR_26));
  FUNC_7 (VAR_13, VAR_15, VAR_16, VAR_17, VAR_18, VAR_26);
  FUNC_0 (!VAR_26[1] && !VAR_26[2]);
  int VAR_27 = VAR_26[0] + (VAR_25 - VAR_24);
  if (VAR_27 > VAR_19) {
    VAR_5 = VAR_19;
  } else {
    VAR_5 = VAR_27;
  }
  *VAR_23 = VAR_27;
  int VAR_28;
  for (VAR_28 = 0; VAR_28 < VAR_27; VAR_28++) {
    if (VAR_28 < VAR_5) {
      VAR_3[VAR_28] = VAR_28;
    } else {
      int VAR_29 = FUNC_4 () % (VAR_28 + 1);
      if (VAR_29 < VAR_5) {
        VAR_3[VAR_29] = VAR_28;
      }
    }
  }
  if (VAR_27 > VAR_5) {
    FUNC_6 (VAR_3, VAR_5, 4, VAR_11);
  }
  VAR_8 = VAR_10;
  VAR_9 = VAR_14;
  VAR_0 = VAR_20;
  VAR_1 = 0;
  VAR_2 = VAR_21;
  VAR_6 = 0;
  VAR_7 = 0;
  int VAR_30 = FUNC_3 (VAR_15, VAR_16, VAR_17, VAR_18, VAR_24, VAR_25);
  if (VAR_30 == -2) { return VAR_30; }
  *VAR_22 = VAR_5;
  return (VAR_21 - VAR_2);
}
