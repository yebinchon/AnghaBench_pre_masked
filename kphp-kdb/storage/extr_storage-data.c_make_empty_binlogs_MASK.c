
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_start {int extra_bytes; int split_mod; int split_min; int split_max; int * str; int schema_id; int type; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (struct lev_start*) ;
 scalar_t__ FUNC_3 (struct lev_start*,int,scalar_t__,int *) ;
 int FUNC_4 (char*,char*) ;
 struct lev_start* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,...) ;
 int FUNC_7 (char*,char*,...) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*) ;

int FUNC_10 (int VAR_3, char *VAR_4, int VAR_5, int VAR_6) {
  char VAR_7[32];
  char VAR_8[65536];
  FUNC_7 (VAR_7, "%d", VAR_3 - 1);
  FUNC_7 (VAR_7, "%%s%%0%dd", (int) FUNC_9 (VAR_7));
  int VAR_9;
  long long VAR_10 = VAR_6 * 1000;
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
    FUNC_7 (VAR_8, VAR_7, VAR_4, VAR_9);
    FUNC_8 (VAR_8, ".bin");
    struct lev_start *VAR_11 = FUNC_5 (VAR_1);
    VAR_11->type = VAR_0;
    VAR_11->schema_id = VAR_2;
    VAR_11->extra_bytes = 12;
    VAR_11->split_mod = VAR_3;
    VAR_11->split_min = VAR_9;
    VAR_11->split_max = VAR_9+1;
    FUNC_6 (VAR_11->str, &VAR_10, 8);
    FUNC_6 (&VAR_11->str[8], &VAR_5, 4);
    FILE *VAR_12 = FUNC_1 (VAR_8, "wb");
    if (VAR_12 == ((void*)0)) {
      FUNC_4 ("fopen (%s, \"wb\") failed\n", VAR_8);
      return -2;
    }
    if (FUNC_3 (VAR_11, 1, VAR_1, VAR_12) != VAR_1) {
      FUNC_4 ("writing to %s failed\n", VAR_8);
      return -3;
    }
    FUNC_2 (VAR_11);
    FUNC_0 (VAR_12);
    VAR_10++;
  }
  return 0;
}
