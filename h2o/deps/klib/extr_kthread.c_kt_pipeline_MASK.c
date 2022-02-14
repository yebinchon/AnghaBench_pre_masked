
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_4__ {scalar_t__ data; TYPE_2__* pl; scalar_t__ running; scalar_t__ step; } ;
typedef TYPE_1__ ktp_worker_t ;
struct TYPE_5__ {int n_workers; int n_steps; void* (* func ) (void*,int,void*) ;int cv; int mutex; TYPE_1__* workers; void* shared; } ;
typedef TYPE_2__ ktp_t ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(int VAR_1, void *(*VAR_2)(void*, int, void*), void *VAR_3, int VAR_4)
{
 ktp_t VAR_5;
 pthread_t *VAR_6;
 int VAR_7;

 if (VAR_1 < 1) VAR_1 = 1;
 VAR_5.n_workers = VAR_1;
 VAR_5.n_steps = VAR_4;
 VAR_5.func = VAR_2;
 VAR_5.shared = VAR_3;
 FUNC_6(&VAR_5.mutex, 0);
 FUNC_2(&VAR_5.cv, 0);

 VAR_5.workers = FUNC_0(VAR_1 * sizeof(ktp_worker_t));
 for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
  ktp_worker_t *VAR_8 = &VAR_5.workers[VAR_7];
  VAR_8->step = VAR_8->running = 0; VAR_8->pl = &VAR_5; VAR_8->data = 0;
 }

 VAR_6 = FUNC_0(VAR_1 * sizeof(pthread_t));
 for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) FUNC_3(&VAR_6[VAR_7], 0, VAR_0, &VAR_5.workers[VAR_7]);
 for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) FUNC_4(VAR_6[VAR_7], 0);

 FUNC_5(&VAR_5.mutex);
 FUNC_1(&VAR_5.cv);
}
