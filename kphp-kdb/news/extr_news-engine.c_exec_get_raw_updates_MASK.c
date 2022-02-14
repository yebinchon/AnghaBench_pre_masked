
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct keep_mc_store {int user_id; int len; } ;
struct connection {TYPE_1__* Tmp; } ;
struct TYPE_3__ {scalar_t__ start; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int*,int,int,char const*,int) ;
 int FUNC_5 (int,int,int,int) ;
 int FUNC_6 (TYPE_1__*,int*,int) ;
 int FUNC_7 (struct connection*,char const*,int,int,int,scalar_t__,scalar_t__) ;
 int FUNC_8 (char const*,char*,int*,int*,...) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9 (struct connection *VAR_7, const char *VAR_8, int VAR_9, int VAR_10) {
  int VAR_11;
  int VAR_12 = -1, VAR_13 = 0, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
  struct keep_mc_store *VAR_17 = 0;

  if (VAR_6 >= 2) {
    FUNC_3 (VAR_5, "exec_get_raw_updates (%p, %s, %d, %d)\n", VAR_7, VAR_8, VAR_9, VAR_10);
  }

  if (VAR_7->Tmp) {
    VAR_17 = (struct keep_mc_store *) VAR_7->Tmp->start;
  }

  if (*VAR_8 == '%') {
    VAR_16 = 1;
  }

  if ((FUNC_8 (VAR_8+VAR_16, "raw_updates%d[%d,%d]:%n", &VAR_12, &VAR_13, &VAR_14, &VAR_15) >= 3 ||
       FUNC_8 (VAR_8+VAR_16, "raw_updates%n%d", &VAR_15, &VAR_11) >= 1) && VAR_15 > 0) {
    if (VAR_6 >= 3) {
      FUNC_3 (VAR_5, "mask = %d, st_time = %d, end_time = %d, x = %d, user_id = %d\n", VAR_12, VAR_13, VAR_14, VAR_15, VAR_11);
    }
    if (VAR_15 == 11) { VAR_12 = -1; }
    VAR_15 += VAR_16;
    VAR_2 = FUNC_4 (VAR_1, VAR_0, 1, VAR_8 + VAR_15, VAR_9 - VAR_15);
    if (VAR_6 >= 3) { FUNC_3 (VAR_5, "QL = %d\n", VAR_2); }
    if (VAR_2 == 1 && VAR_1[0] < 0 && VAR_17 && VAR_17->user_id == VAR_1[0] && VAR_17->len) {
      if (VAR_6 > 1) {
        FUNC_3 (VAR_5, "found userlist %d, %d entries\n", VAR_17->user_id, VAR_17->len);
      }
      FUNC_0 (VAR_7->Tmp, sizeof (struct keep_mc_store));
      VAR_2 = VAR_17->len;
      if (VAR_2 > VAR_0) { VAR_2 = VAR_0; }
      VAR_15 = FUNC_6 (VAR_7->Tmp, VAR_1, VAR_2*4);
      FUNC_1 (VAR_15 == VAR_2*4);
      if (VAR_6 > 1 && VAR_2 > 0) {
        FUNC_3 (VAR_5, "first entry: %d\n", VAR_1[0]);
      }
    }

    FUNC_2 ();

    int VAR_18, VAR_19 = -1;
    for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
      VAR_11 = VAR_1[VAR_18];
      int VAR_20 = FUNC_5 (VAR_11, VAR_12, VAR_13, VAR_14);
      if (VAR_6 > 1) {
        FUNC_3 (VAR_5, "prepare_raw_updates(%d) = %d\n", VAR_11, VAR_20);
      }
      if (VAR_20 > VAR_19) {
        VAR_19 = VAR_20;
      }
    }
    if (VAR_19 >= 0) {
      return FUNC_7 (VAR_7, VAR_8-VAR_10, VAR_10 + VAR_9, 0x7fffffff, -VAR_16, VAR_3, VAR_4 - VAR_3);
    }
  }
  return 0;
}
