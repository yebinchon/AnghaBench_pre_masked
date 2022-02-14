
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* (* start_routine ) (void*) ;scalar_t__ handle; void* arg; } ;
typedef TYPE_1__ pthread_t ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (int *,int ,int ,TYPE_1__*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(pthread_t *VAR_2, const void *VAR_3,
     void *(*VAR_4)(void*), void *VAR_5)
{
 VAR_2->arg = VAR_5;
 VAR_2->start_routine = VAR_4;
 VAR_2->handle = (HANDLE)
  FUNC_0(((void*)0), 0, VAR_1, VAR_2, 0, ((void*)0));

 if (!VAR_2->handle)
  return VAR_0;
 else
  return 0;
}
