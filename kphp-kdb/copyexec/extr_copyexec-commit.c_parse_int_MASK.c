
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long long VAR_0 ;
 long long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,char const* const) ;
 int FUNC_2 (char*,char*,int) ;
 long long FUNC_3 (char*,char**,int) ;

char *FUNC_4 (char *VAR_3, int VAR_4, const char *const VAR_5, int *VAR_6) {
  VAR_2 = 0;
  long long VAR_7;
  if (!FUNC_2 (VAR_3, "0x", 2)) {
    VAR_7 = FUNC_3 (VAR_3, &VAR_3, 16);
  } else if (!FUNC_2 (VAR_3, "0", 1)) {
    VAR_7 = FUNC_3 (VAR_3, &VAR_3, 8);
  } else {
    VAR_7 = FUNC_3 (VAR_3, &VAR_3, 10);
  }
  if (VAR_2 != 0) {
    FUNC_1 ("strtoll failed during parsing int at line %d in %s.\n", VAR_4, VAR_5);
    FUNC_0 (1);
  }
  if (VAR_7 < VAR_1 || VAR_7 > VAR_0) {
    FUNC_1 ("signed 32 bit integer is out of range at line %d in %s.\n", VAR_4, VAR_5);
    FUNC_0 (1);
  }
  *VAR_6 = VAR_7;
  return VAR_3;
}
