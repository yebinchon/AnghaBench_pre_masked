
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_4__ {char* text; int len; } ;
typedef TYPE_1__ message ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct connection*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 double FUNC_2 () ;
 char* FUNC_3 (char*,int) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int,long long,int,int,int) ;
 int FUNC_7 (char const*,int,char**,int*) ;
 int FUNC_8 (int ,char*,char const*,double) ;
 int VAR_8 ;
 int FUNC_9 (int,long long) ;
 int FUNC_10 () ;
 char* FUNC_11 (int) ;
 char* FUNC_12 () ;
 int VAR_9 ;
 char** VAR_10 ;
 int FUNC_13 (char*) ;
 int VAR_11 ;
 int FUNC_14 () ;
 char* FUNC_15 (char*,int) ;
 int FUNC_16 (char*,char const*,int) ;
 scalar_t__ FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (struct connection*,char*,int) ;
 int FUNC_19 (struct connection*,char const*,char*,int) ;
 int VAR_12 ;
 int FUNC_20 (char*,char*,int*,...) ;
 char* VAR_13 ;
 int VAR_14 ;
 int FUNC_21 (char*,char*) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (char*,char*,int) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

int FUNC_24 (struct connection *VAR_18, const char *VAR_19, int VAR_20) {
  if (VAR_16 > 1) {
    FUNC_8 (VAR_14, "memcache_get: key='%s', key_len=%f\n", VAR_19, VAR_20);
  }

  char *VAR_21;
  int VAR_22;

  FUNC_7 (VAR_19, VAR_20, &VAR_21, &VAR_22);

  if (VAR_22 >= 5 && !FUNC_23 (VAR_21, "stats", 5)) {
    int VAR_23 = FUNC_14();
    int VAR_24 = FUNC_18 (VAR_18, VAR_13 + VAR_23, VAR_6 - VAR_23);
    FUNC_19 (VAR_18, VAR_19, VAR_13, VAR_23 + VAR_24 - 1);

    return 0;
  }

  VAR_1;

  VAR_5;

  VAR_2;

  if (!VAR_17 && VAR_22 >= 6 && !FUNC_23 (VAR_21, "SELECT", 6) && VAR_22 + 1 < VAR_6) {
    FUNC_16 (VAR_13, VAR_21, VAR_22);
    VAR_13[VAR_22] = 0;
    int VAR_25;
    for (VAR_25 = 0; VAR_25 < VAR_22; VAR_25++) {
      if (VAR_13[VAR_25] == (char)0xa0) {
        VAR_13[VAR_25] = ' ';
      }
    }

    double VAR_26 = 0.0;
    if (VAR_15) {
      VAR_26 = -FUNC_2();
    }

    FUNC_13 (VAR_13);

    char *VAR_27 = FUNC_15 (VAR_13, VAR_22);

    FUNC_19 (VAR_18, VAR_19, VAR_27, FUNC_22 (VAR_27));

    if (VAR_15) {
      VAR_26 += FUNC_2();
      if (VAR_26 >= 0.01) {
        FUNC_8 (VAR_14, "query %s total time : %.6lf\n\n", VAR_10[(VAR_11 + VAR_3 - 1) % VAR_3], VAR_26);
      }
    }

    FUNC_1(VAR_8, 0);
  }

  if (!VAR_17 && VAR_22 >= 6 && !FUNC_23 (VAR_21, "select", 6)) {
    int VAR_28;
    if (FUNC_20 (VAR_21, "select%d", &VAR_28) != 1) {
      FUNC_1(VAR_8, 0);
    }
    message *VAR_29 = FUNC_0(VAR_18);

    if (FUNC_17 (VAR_29, VAR_28) < 0) {
      FUNC_1(VAR_8, 0);
    }

    double VAR_30 = 0.0;
    if (VAR_15) {
      VAR_30 = -FUNC_2();
    }

    FUNC_13 (VAR_29->text);

    FUNC_16 (VAR_7, VAR_29->text, VAR_29->len + 1);

    char *VAR_31 = FUNC_15 (VAR_7, VAR_29->len);

    FUNC_19 (VAR_18, VAR_19, VAR_31, FUNC_22 (VAR_31));

    if (VAR_15) {
      VAR_30 += FUNC_2();
      if (VAR_30 >= 0.01) {
        FUNC_8 (VAR_14, "query %s total time : %.6lf\n\n", VAR_13, VAR_30);
      }
    }

    FUNC_1(VAR_8, 0);
  }

  if (VAR_22 >= 11 && !FUNC_23 (VAR_21, "create_type", 11)) {
    const char *VAR_32 = VAR_21 + 11;
    int VAR_33 = VAR_22 - 11;
    if (VAR_33 >= 2 && VAR_32[0] == '(' && VAR_32[VAR_33 - 1] == ')') {
      FUNC_16 (VAR_7, VAR_32 + 1, VAR_33 - 2);
      VAR_7[VAR_33 - 2] = 0;

      char *VAR_34 = FUNC_5 (VAR_7);
      FUNC_19 (VAR_18, VAR_19, VAR_34, FUNC_22 (VAR_34));
    }

    FUNC_1(VAR_12, 0);
  }

  if (VAR_22 >= 9 && !FUNC_23 (VAR_21, "add_field", 9)) {
    const char *VAR_35 = VAR_21 + 9;
    int VAR_36 = VAR_22 - 9;
    if (VAR_36 >= 2 && VAR_35[0] == '(' && VAR_35[VAR_36 - 1] == ')') {
      FUNC_16 (VAR_7, VAR_35 + 1, VAR_36 - 2);
      VAR_7[VAR_36 - 2] = 0;

      char *VAR_37 = FUNC_4 (VAR_7);
      FUNC_19 (VAR_18, VAR_19, VAR_37, FUNC_22 (VAR_37));
    }

    FUNC_1(VAR_12, 0);
  }

  if (!VAR_17 && VAR_22 >= 9 && !FUNC_23 (VAR_21, "type_size", 9)) {
    int VAR_38;
    if (FUNC_20 (VAR_21 + 9, "%d", &VAR_38) != 1) {
      VAR_38 = -1;
    } else if (VAR_38 == -1) {
      FUNC_19 (VAR_18, VAR_19, "", 0);
      return 0;
    }

    char *VAR_39 = FUNC_11 (VAR_38);

    FUNC_19 (VAR_18, VAR_19, VAR_39, FUNC_22 (VAR_39));
    return 0;
  }

  if (!VAR_17 && VAR_22 >= 5 && !FUNC_23 (VAR_21, "color", 5)) {
    int VAR_40;
    long long VAR_41;
    int VAR_42;
    if (FUNC_20 (VAR_21 + 5, "%d,%lld%n", &VAR_40, &VAR_41, &VAR_42) != 2 || VAR_40 < 0 || VAR_40 >= VAR_0 || VAR_42 + 5 != VAR_22) {
      return 0;
    }

    char *VAR_43 = FUNC_3 ("%d", FUNC_9 (VAR_40, VAR_41));

    FUNC_19 (VAR_18, VAR_19, VAR_43, FUNC_22 (VAR_43));
    return 0;
  }

  if (VAR_22 >= 12 && !FUNC_23 (VAR_21, "change_color", 12)) {
    int VAR_44;
    long long VAR_45;
    int VAR_46;
    int VAR_47;
    int VAR_48 = 1;
    int VAR_49;

    if (FUNC_20 (VAR_21 + 12, "%d,%lld,%d,%d%n#%d%n", &VAR_44, &VAR_45, &VAR_46, &VAR_47, &VAR_49, &VAR_48, &VAR_49) < 4 || VAR_44 < 0 || VAR_44 >= VAR_0 || VAR_49 + 12 != VAR_22) {
      return 0;
    }

    char *VAR_50 = FUNC_6 (VAR_44, VAR_45, VAR_48, VAR_46, VAR_47) ? "OK" : "NOK";

    FUNC_19 (VAR_18, VAR_19, VAR_50, FUNC_22 (VAR_50));
    return 0;
  }

  if (!VAR_17 && VAR_22 == 5 && !FUNC_21 (VAR_21, "types")) {
    char *VAR_51 = FUNC_12();

    FUNC_19 (VAR_18, VAR_19, VAR_51, FUNC_22 (VAR_51));
    return 0;
  }

  if (!VAR_17 && VAR_22 == 4 && !FUNC_21 (VAR_21, "time")) {
    int VAR_52 = FUNC_10();
    char *VAR_53 = FUNC_3 ("%d", VAR_52);

    FUNC_19 (VAR_18, VAR_19, VAR_53, FUNC_22 (VAR_53));
    return 0;
  }

  if (!VAR_17 && VAR_22 >= 7 && !FUNC_23 (VAR_21, "history", 7)) {
    int VAR_54;
    if (FUNC_20 (VAR_21 + 7, "%d", &VAR_54) != 1) {
      VAR_54 = VAR_3;
    }

    char *VAR_55 = VAR_7;
    int VAR_56 = VAR_11;

    while (VAR_54-- && VAR_56 != VAR_9) {
      VAR_56--;
      if (VAR_56 == -1) {
        VAR_56 += VAR_3 + 1;
      }
      int VAR_57 = FUNC_22 (VAR_10[VAR_56]);
      if (VAR_55 - VAR_7 + VAR_57 + 2 >= VAR_4) {
        break;
      }
      FUNC_16 (VAR_55, VAR_10[VAR_56], VAR_57);
      VAR_55 += VAR_57;
      *VAR_55++ = '\n';
    }
    *VAR_55++ = 0;

    FUNC_19 (VAR_18, VAR_19, VAR_7, FUNC_22 (VAR_7));
    return 0;
  }

  return 0;
}
