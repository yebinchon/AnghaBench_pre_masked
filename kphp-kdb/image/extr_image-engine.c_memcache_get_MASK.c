
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct forth_request {int res; int size; int * prog; } ;
struct connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (struct forth_request*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct forth_request* FUNC_1 (long long) ;
 int FUNC_2 (struct connection*) ;
 int FUNC_3 (struct connection*,char const*,int) ;
 int FUNC_4 (char const*,char*,int) ;
 int VAR_5 ;
 int FUNC_5 (struct connection*,char const*,int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (char const*,char*,...) ;
 int FUNC_7 (struct connection*,char const*,int *) ;
 int * VAR_12 ;
 int FUNC_8 (char const*,char*,int) ;
 int FUNC_9 (int,char*,...) ;

int FUNC_10 (struct connection *VAR_13, const char *VAR_14, int VAR_15) {
  FUNC_9 (3, "memcache_get_process: key='%s'\n", VAR_14);
  VAR_2++;
  long long VAR_16;
  int VAR_17 = -1;


  if (VAR_15 >= 8 && !FUNC_4 (VAR_14, "request", 7) && FUNC_6 (VAR_14 + 7, "%lld", &VAR_16) == 1) {
    struct forth_request *VAR_18 = FUNC_1 (VAR_16);
    if (VAR_18 != ((void*)0)) {
      VAR_17 = VAR_18->res;
    }
    return FUNC_3 (VAR_13, VAR_14, VAR_17);
  }

  if (VAR_15 >= 7 && !FUNC_4 (VAR_14, "output", 6) && FUNC_6 (VAR_14 + 6, "%lld", &VAR_16) == 1) {
    struct forth_request *VAR_19 = FUNC_1 (VAR_16);
    if (VAR_19 != ((void*)0)) {
      VAR_17 = VAR_19->res;
    }
    if ((VAR_17 == VAR_1 || VAR_17 == VAR_0) && VAR_19->prog != ((void*)0)) {
      VAR_3++;
      FUNC_5 (VAR_13, VAR_14, VAR_19->prog, VAR_19->size);
      if (VAR_19->size >= 1024) {
        FUNC_0 (VAR_19);
      }
      return 0;
    }
  }

  int VAR_20;
  if (VAR_15 >= 18 && !FUNC_4 (VAR_14, "last_failure_prog", 17) && FUNC_6 (VAR_14 + 17, "%d", &VAR_20) == 1) {
    FUNC_9 (4, "get(\"error\", signo: %d)\n", VAR_20);
    switch (VAR_20) {
      case 0: return FUNC_7 (VAR_13, VAR_14, &VAR_5);
      case 132: return FUNC_7 (VAR_13, VAR_14, &VAR_6);
      case 131: return FUNC_7 (VAR_13, VAR_14, &VAR_7);
      case 130: return FUNC_7 (VAR_13, VAR_14, &VAR_9);
      case 129: return FUNC_7 (VAR_13, VAR_14, &VAR_10);
      case 128: return FUNC_7 (VAR_13, VAR_14, &VAR_11);
      default: return FUNC_7 (VAR_13, VAR_14, &VAR_8);
    }
  }

  if (VAR_15 >= 5 && !FUNC_8 (VAR_14, "stats", 5)) {
    int VAR_21 = FUNC_2 (VAR_13);
    FUNC_5 (VAR_13, VAR_14, VAR_12, VAR_21);
    return 0;
  }
  VAR_4++;
  return 0;
}
