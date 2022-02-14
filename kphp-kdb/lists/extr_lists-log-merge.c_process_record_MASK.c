
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int,int,scalar_t__,int,int) ;
 int FUNC_1 (int,scalar_t__,int) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (int,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int) ;

int FUNC_6 (void) {
  int VAR_10, VAR_11, VAR_12;
  static int VAR_13 = -1;

  FUNC_3();
  if (VAR_3 == VAR_2) {
    return -1;
  }
  VAR_10 = VAR_2 - VAR_3;
  if (VAR_10 < 4) {
    return -2;
  }

  VAR_11 = *((int *) VAR_3);
  VAR_12 = FUNC_1 (VAR_11, VAR_3, VAR_10);

  if (VAR_12 > VAR_10) {
    VAR_12 = -2;
  }

  if (VAR_12 < 0) {
    FUNC_0 (VAR_6, "error %d reading binlog at position %d, write position %ld, type %08x (prev type %08x)\n", VAR_12, VAR_0, VAR_8 + VAR_7, VAR_11, VAR_13);
    return VAR_12;
  }

  VAR_13 = VAR_11;

  VAR_12 = ((VAR_12 + 3) & -4);

  if (FUNC_4 (VAR_11, VAR_3)) {
    FUNC_2 (FUNC_5 (VAR_12), VAR_3, VAR_12);
    VAR_8 += VAR_12;
    VAR_9++;
  } else {
    VAR_4 += VAR_12;
    VAR_5++;
  }

  VAR_0 += VAR_12;
  VAR_1++;
  VAR_3 += VAR_12;

  return 0;
}
