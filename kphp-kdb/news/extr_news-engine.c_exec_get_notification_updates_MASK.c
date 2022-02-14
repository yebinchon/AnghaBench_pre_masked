
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int value_buff ;
struct connection {int dummy; } ;
struct TYPE_4__ {int random_tag; int type; int owner; int place; int user; int item; int date; } ;
struct TYPE_3__ {int pos; int num; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,struct connection*,char const*,int,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int,int,int,int,int,int,int,int*,int*) ;
 int FUNC_3 (struct connection*,char const*,char*,int) ;
 int FUNC_4 (char*,int,char*,...) ;
 int FUNC_5 (char const*,char*,int*,int*,int*,int*,int*,...) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6 (struct connection *VAR_4, const char *VAR_5, int VAR_6, int VAR_7) {
  int VAR_8;
  int VAR_9 = -1, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;

  static char VAR_16[10000000];
  char *VAR_17 = VAR_16;
  char *VAR_18 = VAR_16 + sizeof (VAR_16);

  if (VAR_3 >= 2) {
    FUNC_1 (VAR_2, "exec_get_notifications (%p, %s, %d, %d)\n", VAR_4, VAR_5, VAR_6, VAR_7);
  }

  if (*VAR_5 == '%') {
    VAR_12 = 1;
  }

  if (FUNC_5 (VAR_5+VAR_12, "notification_updates%d_%d,%d_%d>%d#%d:%d", &VAR_9, &VAR_13, &VAR_11, &VAR_14, &VAR_10, &VAR_15, &VAR_8) == 7 ||
      FUNC_5 (VAR_5+VAR_12, "notification_updates%d_%d,%d_%d>%d:%d", &VAR_9, &VAR_13, &VAR_11, &VAR_14, &VAR_10, &VAR_8) == 6 ||
      FUNC_5 (VAR_5+VAR_12, "notification_updates%d_%d,%d_%d#%d:%d", &VAR_9, &VAR_13, &VAR_11, &VAR_14, &VAR_15, &VAR_8) == 6 ||
      FUNC_5 (VAR_5+VAR_12, "notification_updates%d_%d,%d_%d:%d", &VAR_9, &VAR_13, &VAR_11, &VAR_14, &VAR_8) == 5) {
  } else {
    return 0;
  }

  int VAR_19, VAR_20;
  int VAR_21 = FUNC_2 (VAR_8, VAR_9, VAR_13, VAR_11, VAR_14, VAR_10, VAR_15, &VAR_19, &VAR_20);
  if (VAR_21 < 0) {
    return 0;
  }

  int VAR_22;
  VAR_17 += FUNC_4 (VAR_17, VAR_18 - VAR_17, "a:%d:{", VAR_21);

  for (VAR_22 = 0; VAR_22 < VAR_20; VAR_22++) {
    char VAR_23[100];
    int VAR_24 = VAR_1[VAR_22].pos;
    int VAR_25 = (VAR_1[VAR_22].num > VAR_14) ? VAR_24 + VAR_14 : VAR_24 + VAR_1[VAR_22].num;
    FUNC_0 (VAR_25 <= VAR_19);
    if (VAR_0[VAR_24].random_tag < 0 && !VAR_14) {
      continue;
    }

    VAR_17 += FUNC_4 (VAR_17, VAR_18 - VAR_17, "i:%d;a:%d:{", VAR_22, 5);
    VAR_17 += FUNC_4 (VAR_17, VAR_18 - VAR_17, "i:0;i:%d;i:1;i:%d;i:2;i:%d;", VAR_0[VAR_24].type, VAR_0[VAR_24].owner, VAR_0[VAR_24].place);
    if (!VAR_14) {
      int VAR_26 = FUNC_4 (VAR_23, 100, "%d_%d", VAR_0[VAR_24].user, VAR_0[VAR_24].item);
      VAR_17 += FUNC_4 (VAR_17, VAR_18 - VAR_17, "i:3;s:%d:\"%s\";i:4;i:%d;", VAR_26, VAR_23, VAR_0[VAR_24].date);
    } else {
      int VAR_27;
      int VAR_28 = VAR_1[VAR_22].num;
      if (VAR_0[VAR_24].random_tag <= 0) {
        VAR_28 = -VAR_0[VAR_24].random_tag;
        if (VAR_25 < VAR_24 + VAR_1[VAR_22].num) {
          VAR_25 ++;
        }
        VAR_24 ++;
      }
      for (VAR_27 = 3; VAR_27 < 5; VAR_27++) {
        VAR_17 += FUNC_4 (VAR_17, VAR_18 - VAR_17, "i:%d;a:%d:{i:0;i:%d;", VAR_27, VAR_25 - VAR_24 + 1, VAR_28);
        int VAR_29;
        for (VAR_29 = VAR_24; VAR_29 < VAR_25; VAR_29++) {
          if (VAR_27 == 3) {
            int VAR_30 = FUNC_4 (VAR_23, 100, "%d_%d", VAR_0[VAR_29].user, VAR_0[VAR_29].item);
            VAR_17 += FUNC_4 (VAR_17, VAR_17 - VAR_18, "i:%d;s:%d:\"%s\";", VAR_29 - VAR_24 + 1, VAR_30, VAR_23);
          } else {
            VAR_17 += FUNC_4 (VAR_17, VAR_17 - VAR_18, "i:%d;i:%d;", VAR_29 - VAR_24 + 1, VAR_0[VAR_29].date);
          }
        }
        VAR_17 += FUNC_4 (VAR_17, VAR_18 - VAR_17, "}");
      }
    }
    VAR_17 += FUNC_4 (VAR_17, VAR_18 - VAR_17, "}");
  }

  VAR_17 += FUNC_4 (VAR_17, VAR_18 - VAR_17, "}");
  if (VAR_18 > VAR_17) {
    return FUNC_3 (VAR_4, VAR_5-VAR_7, VAR_16, VAR_17 - VAR_16);
  }
  return 0;
}
