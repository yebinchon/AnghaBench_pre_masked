
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_4__ {char* name; int ref_cnt; int ev_first; int keys_cnt; int subscr_cnt; } ;
typedef TYPE_1__ queue ;
typedef int qkey ;
typedef int ll ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int,char*,...) ;
 int FUNC_2 (char const*,int,char**,int*) ;
 int FUNC_3 (int ,char*,char const*,int) ;
 int VAR_8 ;
 char* FUNC_4 (int *) ;
 char* FUNC_5 (int,long long,int,int) ;
 TYPE_1__* FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int*) ;
 TYPE_1__* FUNC_8 (int) ;
 int FUNC_9 (int,int*) ;
 char* FUNC_10 (char*,int,long long,int,int *,int ) ;
 char* FUNC_11 (char*,int,long long,int) ;
 int FUNC_12 (char*,char*,int) ;
 double FUNC_13 () ;
 int FUNC_14 (struct connection*,char*,int) ;
 int VAR_9 ;
 int FUNC_15 () ;
 int FUNC_16 (struct connection*,char const*,char*,int) ;
 int FUNC_17 (char*,char*,...) ;
 int FUNC_18 (char*,char*,int*,...) ;
 char* VAR_10 ;
 int VAR_11 ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,char*,int) ;
 int FUNC_21 (int) ;
 int * FUNC_22 (char*,int,long long,int,int ,char*) ;
 int VAR_12 ;

int FUNC_23 (struct connection *VAR_13, const char *VAR_14, int VAR_15) {
  if (VAR_12 > 1) {
    FUNC_3 (VAR_11, "memcache_get: key='%s', key_len=%d\n", VAR_14, VAR_15);
  }
  FUNC_1 (VAR_2, 1, "memcache_get: key='%s', key_len=%d\n", VAR_14, VAR_15);
  FUNC_17 (VAR_9, "key='%s', key_len=%d", VAR_14, VAR_15);

  char *VAR_16;
  int VAR_17;

  FUNC_2 (VAR_14, VAR_15, &VAR_16, &VAR_17);

  if (VAR_17 >= 5 && !FUNC_20 (VAR_16, "stats", 5)) {
    int VAR_18 = FUNC_15();
    int VAR_19 = FUNC_14 (VAR_13, VAR_10 + VAR_18, VAR_5 - VAR_18);

    FUNC_16 (VAR_13, VAR_14, VAR_10, VAR_18 + VAR_19 - 1);
    return 0;
  }

  VAR_0;

  VAR_4;

  double VAR_20 = -FUNC_13();
  VAR_7++;

  if (VAR_17 >= 13 && !FUNC_20 (VAR_16, "timestamp_key", 13)) {
    int VAR_21, VAR_22, VAR_23;
    long long VAR_24;
    if (FUNC_18 (VAR_16, "timestamp_key%d,%lld,%d%n", &VAR_21, &VAR_24, &VAR_22, &VAR_23) == 3 && VAR_16[VAR_23] == '(' && VAR_16[VAR_17 - 1] == ')' && VAR_17 - VAR_23 - 2 < VAR_5) {
      char *VAR_25 = VAR_10;
      int VAR_26 = VAR_17 - VAR_23 - 2;
      FUNC_12 (VAR_25, VAR_16 + VAR_23 + 1, VAR_26);
      VAR_25[VAR_26] = 0;
      FUNC_1 (VAR_2, 1, "GET KEY (%s) id = %d, ip = %lld\n", VAR_25, VAR_21, VAR_24);
      VAR_25 = FUNC_10 (VAR_25, VAR_21, VAR_24, VAR_22, ((void*)0), VAR_3);
      FUNC_16 (VAR_13, VAR_14, VAR_25, FUNC_19 (VAR_25));
    }

    FUNC_0(VAR_8, 0);
  }

  if (VAR_17 >= 5 && !FUNC_20 (VAR_16, "alias", 5)) {
    int VAR_27 = 5, VAR_28 = 0;
    if (VAR_17 >= 10 && !FUNC_20 (VAR_16 + 5, "_news", 5)) {
      VAR_27 += 5;
      VAR_28 = 1;
    }
    if (VAR_16[VAR_27] == '(' && VAR_16[VAR_17 - 1] == ')' && VAR_17 - VAR_27 - 2 < VAR_5) {
      char *VAR_29 = VAR_10;
      int VAR_30 = VAR_17 - VAR_27 - 2;
      FUNC_12 (VAR_29, VAR_16 + VAR_27 + 1, VAR_30);
      VAR_29[VAR_30] = 0;
      FUNC_1 (VAR_2, 1, "GET ALIAS (%s)\n", VAR_29);

      ll VAR_31;
      if (VAR_28) {
        ll VAR_32;
        if (FUNC_18 (VAR_29, "%lld", &VAR_32) != 1 || !FUNC_9 (VAR_32, &VAR_31)) {
          FUNC_0(VAR_8, 0);
        }
      } else {
        if (!VAR_28 && !FUNC_7 (VAR_29, &VAR_31)) {
          FUNC_0(VAR_8, 0);
        }
      }

      FUNC_17 (VAR_29, "%lld", VAR_31);

      FUNC_16 (VAR_13, VAR_14, VAR_29, FUNC_19 (VAR_29));
    }

    FUNC_0(VAR_8, 0);
  }

  if (VAR_17 >= 14 && !FUNC_20 (VAR_16, "qname_by_alias", 14)) {
    ll VAR_33;
    int VAR_34;
    if (FUNC_18 (VAR_16, "qname_by_alias%lld%n", &VAR_33, &VAR_34) == 1 && VAR_16[VAR_34] == 0) {
      queue *VAR_35 = FUNC_8 (VAR_33);
      if (VAR_35 != ((void*)0)) {
        FUNC_17 (VAR_6, "%s : ref_cnt = %d, ev_first = %p, keys_cnt = %d, subscr_cnt = %d", VAR_35->name, VAR_35->ref_cnt, VAR_35->ev_first, VAR_35->keys_cnt, VAR_35->subscr_cnt);
        FUNC_16 (VAR_13, VAR_14, VAR_6, FUNC_19 (VAR_6));
      }
    }

    FUNC_0(VAR_8, 0);
  }

  if (VAR_17 >= 10 && !FUNC_20 (VAR_16, "queue_info", 10)) {
    if (VAR_16[10] == '(' && VAR_16[VAR_17 - 1] == ')') {
      VAR_16[VAR_17 - 1] = 0;
      char *VAR_36 = VAR_16 + 11;
      queue *VAR_37 = FUNC_6 (VAR_36, 0);
      if (VAR_37 != ((void*)0)) {
        FUNC_17 (VAR_6,
          "name\t%s\n"
          "ref_cnt\t%d\n"
          "key_cnt\t%d\n"
          "subscr_cnt\t%d\n"
          "ev_frist\t%p\n"
          , VAR_37->name, VAR_37->ref_cnt, VAR_37->keys_cnt, VAR_37->subscr_cnt, VAR_37->ev_first);
        FUNC_16 (VAR_13, VAR_14, VAR_6, FUNC_19 (VAR_6));
      }
    }
    FUNC_0 (VAR_8, 0);
  }

  if (VAR_17 >= 12 && !FUNC_20 (VAR_16, "watchcat_key", 12)) {
    int VAR_38, VAR_39, VAR_40;
    long long VAR_41;
    if (FUNC_18 (VAR_16, "watchcat_key%d,%lld,%d%n", &VAR_38, &VAR_41, &VAR_39, &VAR_40) == 3 && VAR_16[VAR_40] == '(' && VAR_16[VAR_17 - 1] == ')' && VAR_17 - VAR_40 - 2 < VAR_5) {
      char *VAR_42 = VAR_10;
      int VAR_43 = VAR_17 - VAR_40 - 2;
      FUNC_12 (VAR_42, VAR_16 + VAR_40 + 1, VAR_43);
      VAR_42[VAR_43] = 0;

      char *VAR_44 = VAR_42;
      while (*VAR_44) {
        if (*VAR_44 == '?') {
          *VAR_44 = 0x1f;
        }
        VAR_44++;
      }

      VAR_42 = FUNC_11 (VAR_42, VAR_38, VAR_41, VAR_39);
      if (VAR_42 != ((void*)0)) {
        FUNC_16 (VAR_13, VAR_14, VAR_42, FUNC_19 (VAR_42));
      }
    }

    FUNC_0(VAR_8, 0);
  }

  if (VAR_17 >= 8 && !FUNC_20 (VAR_16, "news_key", 8)) {
    int VAR_45, VAR_46;
    long long VAR_47;
    ll VAR_48;
    if (FUNC_18 (VAR_16, "news_key%d,%lld,%d(%lld)", &VAR_45, &VAR_47, &VAR_46, &VAR_48) == 4) {
      char *VAR_49;
      FUNC_1 (VAR_2, 1, "GET NEWS KEY (%lld) id = %d, ip = %lld\n", VAR_48, VAR_45, VAR_47);
      VAR_49 = FUNC_5 (VAR_45, VAR_47, VAR_46, VAR_48);
      if (VAR_49 != ((void*)0)) {
        FUNC_16 (VAR_13, VAR_14, VAR_49, FUNC_19 (VAR_49));
      }
    }

    FUNC_0(VAR_8, 0);
  }

  if (VAR_17 >= 5 && !FUNC_20 (VAR_16, "queue", 5)) {
    int VAR_50, VAR_51, VAR_52;
    long long VAR_53;
    if (FUNC_18 (VAR_16, "queue%d,%lld,%d%n", &VAR_50, &VAR_53, &VAR_51, &VAR_52) == 3 && VAR_16[VAR_52] == '(' && VAR_16[VAR_17 - 1] == ')' && VAR_17 - VAR_52 - 2 < VAR_5) {
      char *VAR_54 = VAR_10, *VAR_55 = "{\"failed\":2}";
      int VAR_56 = VAR_17 - VAR_52 - 2;

      if (VAR_56 == VAR_1) {
        FUNC_12 (VAR_54, VAR_16 + VAR_52 + 1, VAR_56);
        VAR_54[VAR_56] = 0;

        qkey *VAR_57;



        char VAR_58;
        if ((VAR_57 = FUNC_22 (VAR_54, VAR_50, VAR_53, VAR_51, 0, &VAR_58)) != ((void*)0)) {
          VAR_55 = FUNC_4 (VAR_57);
        }
      }

      FUNC_16 (VAR_13, VAR_14, VAR_55, FUNC_19 (VAR_55));
    }

    FUNC_0(VAR_8, 0);
  }

  if (VAR_17 >= 10 && !FUNC_20 (VAR_16, "upd_secret", 10)) {
    int VAR_59;
    if (FUNC_18 (VAR_16, "upd_secret%d", &VAR_59) == 1) {
      FUNC_21 (VAR_59);
    }
    FUNC_16 (VAR_13, VAR_14, "OK", 2);

    FUNC_0(VAR_8, 0);
  }


  FUNC_0(VAR_8, 0);
}
