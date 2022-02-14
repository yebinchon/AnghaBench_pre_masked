
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ step; int running; scalar_t__ data; TYPE_2__* pl; } ;
typedef TYPE_1__ ktp_worker_t ;
struct TYPE_4__ {scalar_t__ n_steps; int n_workers; int mutex; int cv; int shared; scalar_t__ (* func ) (int ,scalar_t__,scalar_t__) ;TYPE_1__* workers; } ;
typedef TYPE_2__ ktp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void *FUNC_6(void *VAR_0)
{
 ktp_worker_t *VAR_1 = (ktp_worker_t*)VAR_0;
 ktp_t *VAR_2 = VAR_1->pl;
 while (VAR_1->step < VAR_2->n_steps) {

  FUNC_3(&VAR_2->mutex);
  for (;;) {
   int VAR_3;

   for (VAR_3 = 0; VAR_3 < VAR_2->n_workers; ++VAR_3) {
    if (VAR_1 == &VAR_2->workers[VAR_3]) continue;
    if (VAR_2->workers[VAR_3].running && VAR_2->workers[VAR_3].step == VAR_1->step)
     break;
   }
   if (VAR_3 == VAR_2->n_workers) break;
   FUNC_1(&VAR_2->cv, &VAR_2->mutex);
  }
  VAR_1->running = 1;
  FUNC_4(&VAR_2->mutex);


  VAR_1->data = VAR_2->func(VAR_2->shared, VAR_1->step, VAR_1->step? VAR_1->data : 0);


  FUNC_3(&VAR_2->mutex);
  VAR_1->step = VAR_1->step == VAR_2->n_steps - 1 || VAR_1->data? (VAR_1->step + 1) % VAR_2->n_steps : VAR_2->n_steps;
  VAR_1->running = 0;
  FUNC_0(&VAR_2->cv);
  FUNC_4(&VAR_2->mutex);
 }
 FUNC_2(0);
}
