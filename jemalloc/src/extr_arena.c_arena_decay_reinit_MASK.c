
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_5__ {int jitter_state; int backlog; scalar_t__ nunpurged; int epoch; int interval; } ;
typedef TYPE_1__ arena_decay_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(arena_decay_t *VAR_1, ssize_t VAR_2) {
 FUNC_2(VAR_1, VAR_2);
 if (VAR_2 > 0) {
  FUNC_5(&VAR_1->interval, (uint64_t)VAR_2 *
      FUNC_0(1000000));
  FUNC_4(&VAR_1->interval, VAR_0);
 }

 FUNC_5(&VAR_1->epoch, 0);
 FUNC_6(&VAR_1->epoch);
 VAR_1->jitter_state = (uint64_t)(uintptr_t)VAR_1;
 FUNC_1(VAR_1);
 VAR_1->nunpurged = 0;
 FUNC_3(VAR_1->backlog, 0, VAR_0 * sizeof(size_t));
}
