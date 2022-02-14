
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * golomb ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;

int FUNC_1 (golomb VAR_2, int VAR_3, int VAR_4) {
  if (VAR_2 == ((void*)0)) {
    return 0;
  }

  int VAR_5 = -1, VAR_6 = 1;
  while (VAR_6 < VAR_3) {
    VAR_6 += VAR_6;
    VAR_5++;
  }
  VAR_5 = VAR_0;
  VAR_6 = 1 << (VAR_0 + 1);

  int VAR_7 = ((int) *VAR_2++ << 24) + (1 << 23);

  int VAR_8 = 0;
  while (VAR_5 >= 0) {
    if (VAR_1) { VAR_8 += (1 << VAR_5); }
    FUNC_0 ();
    VAR_5--;
  }

  return VAR_8;
}
