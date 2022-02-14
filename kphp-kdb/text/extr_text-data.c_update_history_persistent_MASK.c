
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ first_pq; struct incore_persistent_history* persistent_history; } ;
typedef TYPE_1__ user_t ;
struct incore_persistent_history {int alloc_events; int cur_events; int* history; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct incore_persistent_history* FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 struct incore_persistent_history* FUNC_4 (struct incore_persistent_history*,int) ;

__attribute__((used)) static void FUNC_5 (user_t *VAR_5, int VAR_6, int VAR_7, int VAR_8) {
  FUNC_1 (VAR_5 && VAR_6 > 0 && (unsigned) VAR_8 <= 5);
  if (!VAR_4) {
    return;
  }
  struct incore_persistent_history *VAR_9 = VAR_5->persistent_history;
  if (!VAR_9) {
    VAR_9 = VAR_5->persistent_history = FUNC_2 (sizeof (struct incore_persistent_history) + 8 * VAR_0);
    VAR_9->alloc_events = VAR_0;
    VAR_9->cur_events = 0;
    VAR_1 += sizeof (struct incore_persistent_history) + VAR_9->alloc_events * 8;
    VAR_3++;
  } else if (VAR_9->cur_events == VAR_9->alloc_events) {
    VAR_9 = VAR_5->persistent_history = FUNC_4 (VAR_9, sizeof (struct incore_persistent_history) + 16 * VAR_9->alloc_events);
    VAR_1 += VAR_9->alloc_events * 8;
    VAR_9->alloc_events *= 2;
  }
  int *VAR_10 = VAR_9->history + VAR_9->cur_events++ * 2;
  VAR_10[0] = VAR_6;
  VAR_10[1] = (VAR_7 & 0xffff) | (VAR_8 << 24);
  VAR_2++;

  if (VAR_5->first_pq != FUNC_0 (VAR_5)) {
    FUNC_3 (VAR_5);
  }
}
