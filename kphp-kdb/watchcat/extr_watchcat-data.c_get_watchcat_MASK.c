
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int phrases_cnt; TYPE_2__* phrases; } ;
typedef TYPE_1__ watchcat_query_t ;
struct TYPE_12__ {int words; int * H; scalar_t__ minus_flag; } ;
typedef TYPE_2__ watchcat_query_phrase_t ;
struct TYPE_13__ {long long id; scalar_t__ vn; int keys; TYPE_1__* query; } ;
typedef TYPE_3__ watchcat ;


 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,long long) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_3__* FUNC_4 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int *,long long*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_7 (int *) ;

inline watchcat *FUNC_8 (long long VAR_3, watchcat_query_t *VAR_4) {
  watchcat **VAR_5;
  VAR_5 = (watchcat **)FUNC_5 (&VAR_0, &VAR_3);
  if (*VAR_5 == (watchcat *)&VAR_3) {
    watchcat *VAR_6 = FUNC_0();
    VAR_6->id = VAR_3;
    VAR_6->query = VAR_4;

    FUNC_7 (&VAR_6->keys);

    if (VAR_1 > 1) {
      FUNC_2 (VAR_2, "watchcat_created id = %lld\n", VAR_3);
    }

    int VAR_7;
    watchcat *VAR_8 = ((void*)0);

    int VAR_9 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_4->phrases_cnt && !VAR_9; VAR_7++) {
      watchcat_query_phrase_t *VAR_10 = &VAR_4->phrases[VAR_7];
      if (VAR_10->minus_flag) {
        continue;
      }
      int VAR_11;
      for (VAR_11 = 0; VAR_11 < VAR_10->words && !VAR_9; VAR_11++) {
        watchcat *VAR_12 = FUNC_4 (VAR_10->H[VAR_11], 1);
        if (VAR_8 == ((void*)0) || VAR_8->vn > VAR_12->vn) {
          VAR_8 = VAR_12;
        }
        if (VAR_8->vn == 0) {
          VAR_9 = 1;
        }
      }
    }

    FUNC_1 (VAR_8 != ((void*)0));
    if (VAR_1 > 1) {
      FUNC_2 (VAR_2, "added to %lld queue\n", VAR_8->id);
    }
    FUNC_6 (VAR_8, VAR_6);

    *VAR_5 = VAR_6;
  } else {
    FUNC_3 (VAR_4);
  }
  return *VAR_5;
}
