
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* golomb ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;

int FUNC_3 (golomb VAR_1, int VAR_2, int VAR_3, int *VAR_4) {
  const char *VAR_5 = VAR_1 + VAR_3;

  int VAR_6 = -1, VAR_7 = 1;
  while (VAR_7 < VAR_2) {
    VAR_7 += VAR_7;
    VAR_6++;
  }

  int VAR_8 = ((int) *VAR_1++ << 24) + (1 << 23);

  int VAR_9 = 0;
  while (VAR_6 >= 0) {
    if (VAR_0) { VAR_9 += (1 << VAR_6); }
    FUNC_2 ();
    VAR_6--;
  }

  int VAR_10 = VAR_9 + 1;

  FUNC_0 (VAR_10 > 0 && VAR_3 > 0);

  int VAR_11 = VAR_2 + 1, VAR_12 = FUNC_1 (VAR_2, VAR_10);
  VAR_6 = 0, VAR_7 = 1;
  while (VAR_12 >= VAR_7) {
    VAR_7 <<= 1;
    VAR_6++;
  }
  VAR_7 -= VAR_12;

  while (VAR_10--) {
    int VAR_13 = 0, VAR_14;
    while (VAR_0) {
      VAR_11 -= VAR_12;
      FUNC_2();
    }
    FUNC_2();
    for (VAR_14 = VAR_6; VAR_14 > 1; VAR_14--) {
      VAR_13 <<= 1;
      if (VAR_0) {
        VAR_13++;
      }
      FUNC_2();
    }
    if (VAR_13 >= VAR_7) {
      VAR_13 <<= 1;
      if (VAR_0) {
        VAR_13++;
      }
      FUNC_2();
      VAR_13 -= VAR_7;
    }
    VAR_11 -= VAR_13 + 1;

    FUNC_0 (VAR_11 == *VAR_4);
    VAR_4++;
  }
  if (VAR_8 & (1 << 23)) { VAR_1--; }
  FUNC_0 (VAR_1 == VAR_5);

  return VAR_9 + 1;


}
