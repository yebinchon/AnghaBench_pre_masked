
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 double FUNC_3 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;
 double VAR_6 ;

int FUNC_5 (int VAR_7) {
  int VAR_8;
  int VAR_9 = 10000;
  if (VAR_3 || VAR_2) {
    VAR_4 = FUNC_4 (0);
    FUNC_3 ();
    do {
      FUNC_2 ();
      VAR_9 = FUNC_1 ();
    } while ((VAR_9 <= 0 || VAR_3) && !VAR_5);
  }
  if (VAR_5) {
    return 0;
  }

  double VAR_10 = FUNC_3 ();

  VAR_8 = FUNC_0 (VAR_7 < VAR_9 ? VAR_7 : VAR_9);

  double VAR_11 = FUNC_3 () - VAR_10;
  VAR_6 += VAR_11;
  VAR_1 += VAR_11;

  VAR_4 = FUNC_4 (0);
  static int VAR_12 = 0;
  if (VAR_4 > VAR_12 && VAR_4 < VAR_12 + 60) {
    while (VAR_12 < VAR_4) {
      VAR_1 *= 100.0 / 101;
      VAR_0 = VAR_0 * (100.0/101) + 1;
      VAR_12++;
    }
  } else {
    VAR_12 = VAR_4;
  }

  FUNC_1 ();
  return FUNC_2();
}
