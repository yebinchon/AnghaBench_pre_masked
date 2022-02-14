
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (unsigned long long,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,int) ;
 char* FUNC_4 () ;
 char* FUNC_5 (unsigned long long,int) ;
 char* FUNC_6 (unsigned long long,int) ;
 char* FUNC_7 (unsigned long long) ;
 char* FUNC_8 (unsigned long long,int,unsigned int,unsigned int) ;
 char* FUNC_9 (unsigned long long,int,char*) ;
 char* FUNC_10 (unsigned long long,int,char*,unsigned int) ;
 char* FUNC_11 (unsigned long long,int) ;
 char* FUNC_12 (unsigned long long,int) ;
 char* FUNC_13 (unsigned long long,int) ;
 char* FUNC_14 () ;
 int FUNC_15 (char const*,char*,int) ;
 int FUNC_16 (struct connection*,char const*,char*,int) ;
 int FUNC_17 (char const*,char*,unsigned long long*,...) ;
 char* VAR_1 ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char const*,char*,int) ;

int FUNC_20 (struct connection *VAR_2, const char *VAR_3, int VAR_4) {
  VAR_0++;
  unsigned long long VAR_5 = 0, VAR_6 = 0;
  int VAR_7 = 0;
  char VAR_8[32];
  const int VAR_9 = FUNC_3 (VAR_3, VAR_4);
  VAR_3 += VAR_9;
  VAR_4 -= VAR_9;

  if (VAR_4 >= 5 && !FUNC_19 (VAR_3, "stats", 5)) {
    int VAR_10 = FUNC_0 (VAR_2);
    return FUNC_16 (VAR_2, VAR_3 - VAR_9, VAR_1, VAR_10);
  }

  if (VAR_4 >= 6 && !FUNC_15 (VAR_3, "rfreqs", 6)) {
    if (FUNC_17 (VAR_3 + 6, "%llu,%d", &VAR_5, &VAR_7) == 2) {
      char *VAR_11 = FUNC_11 (VAR_5, VAR_7);
      if (VAR_11) {
        FUNC_16 (VAR_2, VAR_3 - VAR_9, VAR_11, FUNC_18 (VAR_11));
        FUNC_2 (VAR_11);
        return 0;
      }
    }
  }

  if (VAR_4 >= 6 && !FUNC_15 (VAR_3, "sfreqs", 6)) {
    if (FUNC_17 (VAR_3 + 6, "%llu,%d", &VAR_5, &VAR_7) == 2) {
      char *VAR_12 = FUNC_12 (VAR_5, VAR_7);
      if (VAR_12) {
        FUNC_16 (VAR_2, VAR_3 - VAR_9, VAR_12, FUNC_18 (VAR_12));
        FUNC_2 (VAR_12);
        return 0;
      }
    }
  }

  if (VAR_4 >= 7 && !FUNC_15 (VAR_3, "srfreqs", 7)) {
    if (FUNC_17 (VAR_3 + 7, "%llu,%d", &VAR_5, &VAR_7) == 2) {
      char *VAR_13 = FUNC_13 (VAR_5, VAR_7);
      if (VAR_13) {
        FUNC_16 (VAR_2, VAR_3 - VAR_9, VAR_13, FUNC_18 (VAR_13));
        FUNC_2 (VAR_13);
        return 0;
      }
    }
  }

  if (VAR_4 >= 6 && !FUNC_15 (VAR_3, "rhosts", 6)) {
    unsigned VAR_14, VAR_15;
    if (FUNC_17 (VAR_3 + 5, "%llu,%d,%u,%u", &VAR_5, &VAR_7, &VAR_14, &VAR_15) == 4) {
      char *VAR_16 = FUNC_8 (VAR_5, VAR_7, VAR_14, VAR_15);
      if (VAR_16) {
        FUNC_16 (VAR_2, VAR_3 - VAR_9, VAR_16, FUNC_18 (VAR_16));
        FUNC_2 (VAR_16);
        return 0;
      }
    }
  }

  if (VAR_4 >= 6 && !FUNC_15 (VAR_3, "shosts", 6)) {
    if (FUNC_17 (VAR_3 + 6, "%llu,%d,%31[a-z_]", &VAR_5, &VAR_7, VAR_8) == 3) {
      char *VAR_17 = FUNC_9 (VAR_5, VAR_7, VAR_8);
      if (VAR_17) {
        FUNC_16 (VAR_2, VAR_3 - VAR_9, VAR_17, FUNC_18 (VAR_17));
        FUNC_2 (VAR_17);
        return 0;
      }
    }
  }

  if (VAR_4 >= 7 && !FUNC_15 (VAR_3, "srhosts", 7)) {
    unsigned VAR_18;
    if (FUNC_17 (VAR_3 + 7, "%llu,%d,%31[a-z_]:0x%x", &VAR_5, &VAR_7, VAR_8, &VAR_18)== 4) {
      char *VAR_19 = FUNC_10 (VAR_5, VAR_7, VAR_8, VAR_18);
      if (VAR_19) {
        FUNC_16 (VAR_2, VAR_3 - VAR_9, VAR_19, FUNC_18 (VAR_19));
        FUNC_2 (VAR_19);
        return 0;
      }
    }
  }

  if (VAR_4 == 7 && !FUNC_15 (VAR_3, "volumes", 7)) {
    char *VAR_20 = FUNC_14 ();
    if (VAR_20) {
      FUNC_16 (VAR_2, VAR_3 - VAR_9, VAR_20, FUNC_18 (VAR_20));
      FUNC_2 (VAR_20);
      return 0;
    }
  }

  if (VAR_4 >= 9 && !FUNC_15 (VAR_3, "deadhosts", 9)) {
    int VAR_21;
    if (FUNC_17 (VAR_3 + 9, "%llu,%d", &VAR_5, &VAR_21) == 2) {
      char *VAR_22 = FUNC_5 (VAR_5, VAR_21);
      if (VAR_22) {
        FUNC_16 (VAR_2, VAR_3 - VAR_9, VAR_22, FUNC_18 (VAR_22));
        FUNC_2 (VAR_22);
        return 0;
      }
    }
  }

  if (VAR_4 >= 14 && !FUNC_15 (VAR_3, "deadhosts_full", 14)) {
    int VAR_23;
    if (FUNC_17 (VAR_3 + 14, "%llu,%d", &VAR_5, &VAR_23) == 2) {
      char *VAR_24 = FUNC_6 (VAR_5, VAR_23);
      if (VAR_24) {
        FUNC_16 (VAR_2, VAR_3 - VAR_9, VAR_24, FUNC_18 (VAR_24));
        FUNC_2 (VAR_24);
        return 0;
      }
    }
  }

  if (VAR_4 == 10 && !FUNC_15 (VAR_3, "collisions", 10)){
    char *VAR_25 = FUNC_4 ();
    if (VAR_25) {
      FUNC_16 (VAR_2, VAR_3 - VAR_9, VAR_25, FUNC_18 (VAR_25));
      FUNC_2 (VAR_25);
      return 0;
    }
  }

  if (VAR_4 >= 6 && !FUNC_15 (VAR_3, "enable", 6) && FUNC_17 (VAR_3 + 6, "0x%llx", &VAR_6) == 1) {
    int VAR_26 = FUNC_1 (VAR_6, 1);
    return FUNC_16 (VAR_2, VAR_3 - VAR_9, (VAR_26 >= 0) ? "1" : "0", 1);
  }

  if (VAR_4 >= 7 && !FUNC_15 (VAR_3, "disable", 7) && FUNC_17 (VAR_3 + 7, "0x%llx", &VAR_6) == 1) {
    int VAR_27 = FUNC_1 (VAR_6, 0);
    return FUNC_16 (VAR_2, VAR_3 - VAR_9, (VAR_27 >= 0) ? "1" : "0", 1);
  }

  if (VAR_4 >= 13 && !FUNC_15 (VAR_3, "list_disabled", 13) && FUNC_17 (VAR_3 + 13, "%llu", &VAR_5) == 1) {
    char *VAR_28 = FUNC_7 (VAR_5);
    if (VAR_28 != ((void*)0)) {
      FUNC_16 (VAR_2, VAR_3 - VAR_9, VAR_28, FUNC_18 (VAR_28));
      FUNC_2 (VAR_28);
      return 0;
    }
  }

  return 0;
}
