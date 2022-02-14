
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 long FUNC_2 () ;
 int FUNC_3 (char const*,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int,scalar_t__,int) ;
 int FUNC_5 (long) ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_6 (const char *VAR_11) {
  int VAR_12 = FUNC_3 ("/dev/random", VAR_4 | VAR_3);
  int VAR_13 = 0;

  if (VAR_12 >= 0) {
    VAR_13 = FUNC_4 (VAR_12, VAR_8, 16);
    if (VAR_13 > 0 && VAR_10 > 1) {
      FUNC_1 (VAR_9, "added %d bytes of real entropy to the AES security key\n", VAR_13);
    }
    FUNC_0 (VAR_12);
  }

  if (VAR_13 < 16) {
    VAR_12 = FUNC_3 ("/dev/urandom", VAR_4);
    if (VAR_12 < 0) {
      VAR_7 = 0;
      return -1;
    }
    int VAR_14 = FUNC_4 (VAR_12, VAR_8 + VAR_13, 16 - VAR_13);
    if (VAR_13 + VAR_14 != 16) {
      VAR_7 = 0;
      return -1;
    }
    FUNC_0 (VAR_12);
  }

  *(long *) VAR_8 ^= FUNC_2();

  FUNC_5 (*(long *)VAR_8);

  VAR_12 = FUNC_3 (VAR_11 ? VAR_11 : VAR_0, VAR_4);
  if (VAR_12 < 0) {
    return -1;
  }

  VAR_13 = FUNC_4 (VAR_12, VAR_6, VAR_1 + 1);

  FUNC_0 (VAR_12);

  if (VAR_13 < VAR_2 || VAR_13 > VAR_1) {
    return -1;
  }

  VAR_7 = VAR_13;

  if (VAR_10 > 0) {
    FUNC_1 (VAR_9, "loaded password file %s\n", VAR_11 ? VAR_11 : VAR_0);
  }

  VAR_5 = 1;

  return 1;
}
