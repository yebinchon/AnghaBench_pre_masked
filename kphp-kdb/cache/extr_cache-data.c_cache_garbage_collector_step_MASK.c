
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_uri {int const last_access; int * data; struct cache_uri* hnext; scalar_t__ local_copy; } ;
struct TYPE_2__ {int cur_idx; } ;


 struct cache_uri** VAR_0 ;
 int FUNC_0 (struct cache_uri*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (int,char*,int,int const) ;

int FUNC_3 (int VAR_7) {
  const int VAR_8 = VAR_2 - VAR_5;
  FUNC_2 (3, "log_last_ts: %d, dead_time: %d\n", VAR_2, VAR_8);
  VAR_3 = 0;
  int VAR_9 = VAR_1.cur_idx, VAR_10 = 0, VAR_11 = 0;
  while (VAR_10 < VAR_7 && VAR_11 < VAR_7) {
    VAR_10++;
    struct cache_uri **VAR_12 = &(VAR_0[VAR_9]), *VAR_13;
    while ((VAR_13 = *VAR_12) != ((void*)0)) {
      VAR_10++;
      if (VAR_13->local_copy || VAR_13->last_access >= VAR_8) {
        VAR_12 = &(VAR_13->hnext);
      } else {
        *VAR_12 = VAR_13->hnext;
        FUNC_1 (&(VAR_13->data[VAR_6]));
        FUNC_0 (VAR_13);
        VAR_11++;
      }
    }
    if (++VAR_9 >= VAR_4) {
      VAR_9 -= VAR_4;
    }
  }
  VAR_1.cur_idx = VAR_9;
  return VAR_11;
}
