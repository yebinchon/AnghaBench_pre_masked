
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_context {int flags; int stop_wq; int state_mutex; } ;
struct TYPE_2__ {int runq_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct spu_context*) ;
 int FUNC_4 (struct spu_context*) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_13(struct spu_context *VAR_6)
{
 FUNC_1(VAR_5);






 FUNC_0(!(VAR_6->flags & VAR_0));

 FUNC_11(&VAR_4->runq_lock);
 FUNC_7(&VAR_6->stop_wq, &VAR_5, VAR_1);
 if (!FUNC_10(VAR_3)) {
  FUNC_3(VAR_6);
  FUNC_12(&VAR_4->runq_lock);
  FUNC_6(&VAR_6->state_mutex);
  FUNC_9();
  FUNC_5(&VAR_6->state_mutex);
  FUNC_11(&VAR_4->runq_lock);
  FUNC_4(VAR_6);
 }
 FUNC_12(&VAR_4->runq_lock);
 FUNC_2(VAR_2);
 FUNC_8(&VAR_6->stop_wq, &VAR_5);
}
