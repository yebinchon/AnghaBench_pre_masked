
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;
struct bL_thread {int wanted_cluster; int lock; int (* completer ) (void*) ;void* completer_cookie; int wq; int started; } ;
typedef int (* bL_switch_completion_handler ) (void*) ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int ,struct sched_param*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(void *VAR_2)
{
 struct bL_thread *VAR_3 = VAR_2;
 struct sched_param VAR_4 = { .sched_priority = 1 };
 int VAR_5;
 bL_switch_completion_handler VAR_6;
 void *VAR_7;

 FUNC_4(VAR_1, VAR_0, &VAR_4);
 FUNC_1(&VAR_3->started);

 do {
  if (FUNC_5(VAR_1))
   FUNC_2(VAR_1);
  FUNC_8(VAR_3->wq,
    VAR_3->wanted_cluster != -1 ||
    FUNC_3());

  FUNC_6(&VAR_3->lock);
  VAR_5 = VAR_3->wanted_cluster;
  VAR_6 = VAR_3->completer;
  VAR_7 = VAR_3->completer_cookie;
  VAR_3->wanted_cluster = -1;
  VAR_3->completer = ((void*)0);
  FUNC_7(&VAR_3->lock);

  if (VAR_5 != -1) {
   FUNC_0(VAR_5);

   if (VAR_6)
    VAR_6(VAR_7);
  }
 } while (!FUNC_3());

 return 0;
}
