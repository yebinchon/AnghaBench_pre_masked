
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,int,char**,int*) ;
 int FUNC_2 (int ,char*,char const*) ;
 int VAR_2 ;
 int FUNC_3 (char*,char*,int) ;
 int VAR_3 ;
 int FUNC_4 (struct connection*,char*,scalar_t__) ;
 int FUNC_5 (struct connection*,char*,char*,int) ;
 int FUNC_6 (char*,char*,long long*,int*,int*,int*) ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (long long,char*,int,int) ;
 int FUNC_9 () ;

int FUNC_10 (struct connection *VAR_6, const char *VAR_7, int VAR_8) {
  VAR_0;

  if (VAR_3 > 1) {
    FUNC_2 (VAR_5, "memcache_get: key='%s'\n", VAR_7);
  }

  char *VAR_9;
  int VAR_10;

  FUNC_1 (VAR_7, VAR_8, &VAR_9, &VAR_10);

  if (VAR_10 >= 5 && !FUNC_7 (VAR_9, "stats", 5)) {
    int VAR_11 = FUNC_9 ();
    int VAR_12 = FUNC_4 (VAR_6, VAR_4 + VAR_11, VAR_1 - VAR_11);
    FUNC_5 (VAR_6, VAR_9, VAR_4, VAR_11 + VAR_12 - 1);

    return 0;
  }

  if (VAR_10 >= 15 && !FUNC_7 (VAR_9, "create_watchcat", 15) ) {
    int VAR_13;
    long long VAR_14;
    int VAR_15, VAR_16;

    if (FUNC_6 (VAR_9 + 15, "%lld,%d,%d%n", &VAR_14, &VAR_15, &VAR_16, &VAR_13) == 3 && VAR_9[VAR_13 += 15] == '(' && VAR_9[VAR_10 - 1] == ')') {
      char *VAR_17 = VAR_4;
      int VAR_18 = VAR_10 - VAR_13 - 2;
      FUNC_3 (VAR_17, VAR_9 + VAR_13 + 1, VAR_18);
      VAR_17[VAR_18] = 0;

      FUNC_8 (VAR_14, VAR_17, VAR_16, VAR_15);
    }
  }

  FUNC_0(VAR_2, 0);
}
