
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* golomb ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;

int FUNC_3 (golomb VAR_2, int VAR_3, int VAR_4, int *VAR_5) {
  const char *VAR_6 = VAR_2 + VAR_4;

  int VAR_7 = VAR_0, VAR_8 = 1 << (VAR_0 + 1);

  int VAR_9 = ((int) *VAR_2++ << 24) + (1 << 23);

  int VAR_10 = 0;
  while (VAR_7 >= 0) {
    if (VAR_1) { VAR_10 += (1 << VAR_7); }
    FUNC_2 ();
    VAR_7--;
  }

  int VAR_11 = VAR_10;




  int VAR_12 = VAR_3 + VAR_11 + 1, VAR_13 = FUNC_1 (VAR_3 + VAR_11, VAR_11);
  VAR_7 = 0, VAR_8 = 1;
  while (VAR_13 >= VAR_8) {
    VAR_8 <<= 1;
    VAR_7++;
  }
  VAR_8 -= VAR_13;

  while (VAR_11--) {
    int VAR_14 = 0, VAR_15;
    while (VAR_1) {
      VAR_12 -= VAR_13;
      FUNC_2();
    }
    FUNC_2();
    for (VAR_15 = VAR_7; VAR_15 > 1; VAR_15--) {
      VAR_14 <<= 1;
      if (VAR_1) {
        VAR_14++;
      }
      FUNC_2();
    }
    if (VAR_14 >= VAR_8) {
      VAR_14 <<= 1;
      if (VAR_1) {
        VAR_14++;
      }
      FUNC_2();
      VAR_14 -= VAR_8;
    }
    VAR_12 -= VAR_14;

    FUNC_0 (VAR_12 == *VAR_5);
    VAR_5++;
  }
  if (VAR_9 & (1 << 23)) { VAR_2--; }
  FUNC_0 (VAR_2 == VAR_6);

  return VAR_10;


}
