
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
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int) ;

int FUNC_6 (void) {
  int VAR_8, VAR_9, VAR_10;
  static int VAR_11 = -1;

  FUNC_3();
  if (VAR_3 == VAR_2) {
    return -1;
  }
  VAR_8 = VAR_2 - VAR_3;
  if (VAR_8 < 4) {
    return -2;
  }

  VAR_9 = *((int *) VAR_3);
  VAR_10 = FUNC_1 (VAR_9, VAR_3, VAR_8);

  if (VAR_10 > VAR_8) {
    VAR_10 = -2;
  }

  if (VAR_10 < 0) {
    FUNC_0 (VAR_4, "error %d reading binlog at position %d, write position %ld, type %08x (prev type %08x)\n", VAR_10, VAR_0, VAR_6 + VAR_5, VAR_9, VAR_11);
    return VAR_10;
  }

  VAR_11 = VAR_9;

  VAR_10 = ((VAR_10 + 3) & -4);

  if (FUNC_4 (VAR_9)) {
    FUNC_2 (FUNC_5 (VAR_10), VAR_3, VAR_10);
    VAR_6 += VAR_10;
    VAR_7++;
  }

  VAR_0 += VAR_10;
  VAR_1++;
  VAR_3 += VAR_10;

  return 0;
}
