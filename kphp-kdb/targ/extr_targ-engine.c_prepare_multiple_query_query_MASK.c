
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char**) ;
 int FUNC_2 (struct connection*,int) ;
 scalar_t__ FUNC_3 (struct connection*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*,int) ;
 int FUNC_7 (struct connection*,char const*,int ,int ) ;
 int FUNC_8 (int ,char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_9 (char*,char**,int) ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;

int FUNC_10 (struct connection *VAR_3, const char *VAR_4, const char *VAR_5, int VAR_6) {
  char *VAR_7 = (char *) FUNC_4 (VAR_4), *VAR_8, *VAR_9 = VAR_7 + 1;
  if (*VAR_7 != '(') {
    return -1;
  }
  FUNC_6 (VAR_5, VAR_6);
  FUNC_0 ();
  char *VAR_10 = 0;
  if (FUNC_3 (VAR_3) > 0 && VAR_7[1] >= '0' && VAR_7[1] <= '9' && FUNC_9 (VAR_7 + 1, &VAR_9, 10) == VAR_1) {
    VAR_8 = VAR_2;
    if (FUNC_1 (&VAR_8)) {
      while (*VAR_8 == ';' || *VAR_8 == '\n') {
        VAR_8++;
        if (!FUNC_1 (&VAR_8)) {
          VAR_10 = VAR_8;
          break;
        }
      }
    }
    if (!VAR_10) {
      if (*VAR_8) {
        VAR_10 = VAR_8;
      } else if (*VAR_9++ != ';') {
        VAR_10 = VAR_9 - 1;
      }
    }
  }
  VAR_8 = VAR_9;
  if (!VAR_10 && FUNC_1 (&VAR_8)) {
    while (*VAR_8 == ';') {
      VAR_8++;
      if (!FUNC_1 (&VAR_8)) {
        VAR_10 = VAR_8;
        break;
      }
    }
  }
  FUNC_4 (VAR_4);
  if (!VAR_10 && !FUNC_5 (VAR_8)) {
    VAR_10 = VAR_8;
  }
  if (VAR_10) {
    FUNC_2 (VAR_3, -1);
    FUNC_7 (VAR_3, VAR_5, VAR_0, FUNC_8 (VAR_0, "ERROR near '%.256s'\n", VAR_10));
    return 0;
  } else {
    return 1;
  }
}
