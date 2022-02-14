
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_stats_visitor64 {long long cnt_id; int user_id; } ;
struct lev_stats_visitor {int user_id; } ;
struct counter {int type; int unique_visitors; struct counter* commit_next; int views_uncommitted; int visitors; int deletes; int views; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (scalar_t__,int,long long) ;
 int FUNC_1 (int) ;
 struct counter* VAR_3 ;
 int FUNC_2 (int ,char*,...) ;
 struct counter* FUNC_3 (long long,int) ;
 int FUNC_4 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (struct counter*,int,int) ;
 int FUNC_6 (struct counter*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ,int) ;
 int VAR_11 ;

int FUNC_9 (long long VAR_12, int VAR_13, int VAR_14, int VAR_15, int VAR_16) {
  int VAR_17 = 0;
  if (VAR_11 >= 4) {
    FUNC_2 (VAR_7, "counter_incr (%lld, %d, %d, %d, %d)\n", VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
  }

  struct counter *VAR_18 = FUNC_3 (VAR_12, VAR_14 ? 3 : 1);
  if (VAR_11 >= 3) {
    FUNC_2 (VAR_7, "Got counter\n");
  }

  if (!VAR_18) { return -1; }
  FUNC_6 (VAR_18);


  if (VAR_11 >= 3) {
    FUNC_2 (VAR_7, "Counter type is %d\n", VAR_18->type);
  }


  if (-1 > VAR_16 || VAR_16 >= VAR_2) {
    if (VAR_11 >= 1) {
      FUNC_2 (VAR_7, "Unknown subcounter (%d). Skipping.\n", VAR_16);
    }
    VAR_16 = -1;
  }

  if (VAR_15 == 0) {
    VAR_10++;
  } else {
    VAR_9++;
  }

  if (VAR_16 == -1) {
    if (VAR_15 == 0) {
      VAR_18->views++;
    } else {
      VAR_18->deletes++;
    }
  } else {
    FUNC_1 (VAR_16 < VAR_2);

    if (VAR_11 >= 4) {
      FUNC_2 (VAR_7, "incrementing subcounter... ");
    }
    VAR_17 = FUNC_5(VAR_18, VAR_16, (VAR_15 == 0) ? 1 : (-1));

    if (VAR_11 >= 4) {
      FUNC_2 (VAR_7, "done\n");
    }
  }

  if (VAR_16 != -1 || !FUNC_8 (VAR_18->visitors, VAR_13)) {
    if (VAR_16 == -1) {
      if ((VAR_6 >= VAR_8 && !VAR_4) || VAR_5) {


        VAR_18->visitors = FUNC_7 (VAR_18->visitors, VAR_13, FUNC_4());
      }
      VAR_18->unique_visitors++;
    }

    if (!VAR_14) {
      if (VAR_11 >= 4) {
        FUNC_2 (VAR_7, "creating logevent\n");
      }
      if (VAR_12 == (int)VAR_12) {
        struct lev_stats_visitor *VAR_19 =
          FUNC_0 (VAR_0 + (VAR_15 << 7) + VAR_16 + 1, sizeof (struct lev_stats_visitor), VAR_12);
        VAR_19->user_id = VAR_13;
      } else {
        struct lev_stats_visitor64 *VAR_20 =
          FUNC_0 (VAR_1 + (VAR_15 << 7) + VAR_16 + 1, sizeof (struct lev_stats_visitor64), VAR_12);
        VAR_20->cnt_id = VAR_12;
        VAR_20->user_id = VAR_13;
      }
      if (VAR_11 >= 4) {
        FUNC_2 (VAR_7, "finished creating logevent\n");
      }
    }
  } else if (!VAR_14 && !VAR_18->views_uncommitted++) {
    VAR_18->commit_next = VAR_3;
    VAR_3 = VAR_18;
  }
  if (VAR_16 == -1) {
    return VAR_18->unique_visitors;
  } else {
    return VAR_17;
  }
}
