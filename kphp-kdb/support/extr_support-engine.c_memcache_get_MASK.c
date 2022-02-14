
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_5__ {int text; int len; } ;
typedef TYPE_1__ message ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct connection*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,int,char**,int*) ;
 int VAR_6 ;
 char* FUNC_4 (int,int,int ,int ,int,int) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (struct connection*,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct connection*,char const*,scalar_t__,int) ;
 int FUNC_10 (struct connection*,char const*,char*,int ,int) ;
 int FUNC_11 (char*,char*,int*,int*,...) ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 () ;

int FUNC_15 (struct connection *VAR_8, const char *VAR_9, int VAR_10) {
  FUNC_5 ("memcache_get: key='%s', key_len=%d\n", VAR_9, VAR_10);

  char *VAR_11;
  int VAR_12;
  FUNC_3 (VAR_9, VAR_10, &VAR_11, &VAR_12);

  if (VAR_12 >= 5 && !FUNC_13 (VAR_11, "stats", 5)) {
    int VAR_13 = FUNC_14 ();
    int VAR_14 = FUNC_8 (VAR_8, VAR_7 + VAR_13, VAR_4 - VAR_13);
    FUNC_9 (VAR_8, VAR_9, VAR_7, VAR_13 + VAR_14 - 1);

    return 0;
  }

  VAR_0;

  VAR_3;

  VAR_1;

  if (VAR_12 >= 6 && !FUNC_13 (VAR_11, "answer", 6)) {
    int VAR_15 = 6, VAR_16 = 0;
    if (!FUNC_13 (VAR_11 + 6, "_debug", 6)) {
      VAR_16 = 1;
      VAR_15 += 6;
    }
    int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21 = VAR_2;
    if (FUNC_11 (VAR_11 + VAR_15, "%d,%d,%d%n#%d%n", &VAR_17, &VAR_18, &VAR_19, &VAR_20, &VAR_21, &VAR_20) < 3 || VAR_11[VAR_15 + VAR_20]) {
      FUNC_1 (VAR_6, 0);
    }
    message *VAR_22 = FUNC_0 (VAR_8);

    if (FUNC_7 (VAR_22, VAR_19) < 0 || VAR_21 <= 0) {
      FUNC_6 (VAR_22);
      FUNC_1 (VAR_6, 0);
    }

    char *VAR_23 = FUNC_4 (VAR_17, VAR_18, VAR_22->len, VAR_22->text, VAR_21, VAR_16);

    if (VAR_23 != ((void*)0)) {
      FUNC_10 (VAR_8, VAR_9, VAR_23, FUNC_12 (VAR_23), 1);
    }

    FUNC_6 (VAR_22);
    FUNC_1 (VAR_6, 0);
  }

  if (VAR_12 >= 13 && !FUNC_13 (VAR_11, "delete_answer", 13)) {
    int VAR_24 = 13;
    int VAR_25, VAR_26;
    if (FUNC_11 (VAR_11 + VAR_24, "%d%n", &VAR_25, &VAR_26) < 1 || VAR_11[VAR_24 + VAR_26]) {
      FUNC_1 (VAR_5, 0);
    }

    int VAR_27 = FUNC_2 (VAR_25);

    if (VAR_27) {
      FUNC_10 (VAR_8, VAR_9, "DELETED", FUNC_12 ("DELETED"), 1);
    }

    FUNC_1 (VAR_5, 0);
  }

  FUNC_1 (VAR_5, 0);
}
