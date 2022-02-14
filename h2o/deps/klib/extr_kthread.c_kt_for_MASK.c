
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_4__ {int i; TYPE_2__* t; } ;
typedef TYPE_1__ ktf_worker_t ;
struct TYPE_5__ {void (* func ) (void*,long,int) ;int n_threads; long n; TYPE_1__* w; void* data; } ;
typedef TYPE_2__ kt_for_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(int VAR_1, void (*VAR_2)(void*,long,int), void *VAR_3, long VAR_4)
{
 int VAR_5;
 kt_for_t VAR_6;
 pthread_t *VAR_7;
 VAR_6.func = VAR_2, VAR_6.data = VAR_3, VAR_6.n_threads = VAR_1, VAR_6.n = VAR_4;
 VAR_6.w = (ktf_worker_t*)FUNC_0(VAR_1 * sizeof(ktf_worker_t));
 VAR_7 = (pthread_t*)FUNC_0(VAR_1 * sizeof(pthread_t));
 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
  VAR_6.w[VAR_5].t = &VAR_6, VAR_6.w[VAR_5].i = VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) FUNC_1(&VAR_7[VAR_5], 0, VAR_0, &VAR_6.w[VAR_5]);
 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) FUNC_2(VAR_7[VAR_5], 0);
}
