
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int FUNC_0 (long long,char**) ;
 int FUNC_1 (struct connection*,char const*,char*,int ) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char const*,char*,int*,int*,...) ;

__attribute__((used)) static int FUNC_4 (struct connection *VAR_0, const char *VAR_1, int VAR_2, int VAR_3) {
  int VAR_4, VAR_5, VAR_6 = 0, VAR_7 = -1;
  char VAR_8 = 0;
  long long VAR_9;
  static char VAR_10[32];
  char *VAR_11;

  if (FUNC_3 (VAR_1 + 9, "%d_%d%n%c", &VAR_4, &VAR_5, &VAR_7, &VAR_8) >= 3 && VAR_8 == '(') {
    if (VAR_4 && VAR_5 > 0 && VAR_7 >= 0) {
      VAR_9 = (((long long) VAR_5) << 32) + (unsigned) VAR_4;
      VAR_11 = (char *) (VAR_1 + 9 + VAR_7);
      VAR_6 = 1;
    }
  }

  VAR_7 = -1;
  VAR_8 = 0;
  if (!VAR_6 && FUNC_3 (VAR_1 + 9, "%d%n%c", &VAR_5, &VAR_7, &VAR_8) >= 2 && VAR_8 == '(') {
    if (VAR_5 > 0) {
      VAR_9 = VAR_5;
      VAR_11 = (char *) (VAR_1 + 9 + VAR_7);
      VAR_6 = 1;
    }
  }

  if (VAR_6) {
    int VAR_12 = FUNC_0 (VAR_9, &VAR_11);
    if (VAR_12 >= 0) {
      return FUNC_1 (VAR_0, VAR_1 - VAR_3, VAR_10, FUNC_2 (VAR_10, "%d", VAR_12));
    } else {
      return FUNC_1 (VAR_0, VAR_1 - VAR_3, VAR_10, FUNC_2 (VAR_10, "ERROR near '%.256s'\n", VAR_11));
    }
  }
  return 0;
}
