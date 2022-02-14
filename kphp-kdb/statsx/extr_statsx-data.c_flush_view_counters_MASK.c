
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_stats_views_ext64 {int views; int cnt_id; } ;
struct lev_stats_views_ext {int views; } ;
struct counter {int views_uncommitted; int counter_id; struct counter* commit_next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int) ;
 struct counter* VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_3 (void) {
  struct counter *VAR_7 = VAR_4, *VAR_8;
  int VAR_9 = 0;
  if (VAR_6 > 1) {
    FUNC_2 (VAR_5, "flush_view_counters()\n");
  }
  VAR_4 = 0;
  while (VAR_7) {
    FUNC_1 (++VAR_9 <= 1000000);
    VAR_8 = VAR_7->commit_next;
    VAR_7->commit_next = 0;
    FUNC_1 (VAR_7->views_uncommitted > 0);
    if (VAR_7->counter_id == (int)VAR_7->counter_id) {
      struct lev_stats_views_ext *VAR_10;
      if (VAR_7->views_uncommitted < 256) {
        VAR_10 = FUNC_0 (VAR_0 + VAR_7->views_uncommitted, 8, VAR_7->counter_id);
      } else {
        VAR_10 = FUNC_0 (VAR_2, 12, VAR_7->counter_id);
        VAR_10->views = VAR_7->views_uncommitted;
      }
    } else {
      struct lev_stats_views_ext64 *VAR_11;
      if (VAR_7->views_uncommitted < 256) {
        VAR_11 = FUNC_0 (VAR_1 + VAR_7->views_uncommitted, 12, VAR_7->counter_id);
      } else {
        VAR_11 = FUNC_0 (VAR_3, 16, VAR_7->counter_id);
        VAR_11->views = VAR_7->views_uncommitted;
      }
      VAR_11->cnt_id = VAR_7->counter_id;
    }
    VAR_7->views_uncommitted = 0;
    VAR_7 = VAR_8;
  }
  return VAR_9;
}
