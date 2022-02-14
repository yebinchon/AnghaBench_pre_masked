
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int nstime_t ;
struct TYPE_4__ {int deadline; int interval; int jitter_state; int epoch; } ;
typedef TYPE_1__ arena_decay_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(arena_decay_t *VAR_0) {




 FUNC_2(&VAR_0->deadline, &VAR_0->epoch);
 FUNC_1(&VAR_0->deadline, &VAR_0->interval);
 if (FUNC_0(VAR_0) > 0) {
  nstime_t VAR_1;

  FUNC_3(&VAR_1, FUNC_5(&VAR_0->jitter_state,
      FUNC_4(&VAR_0->interval)));
  FUNC_1(&VAR_0->deadline, &VAR_1);
 }
}
