
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_7__ {int * self_pipe; } ;
typedef TYPE_1__ WSServer ;
struct TYPE_9__ {int thread; int mutex; int * self_pipe; } ;
struct TYPE_8__ {int thread; int mutex; TYPE_1__* server; } ;
typedef TYPE_2__ GWSWriter ;
typedef TYPE_3__ GWSReader ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (TYPE_1__*) ;

void
FUNC_7 (GWSWriter * VAR_2, GWSReader * VAR_3)
{
  pthread_t VAR_4, VAR_5;
  WSServer *VAR_6 = ((void*)0);

  if (!VAR_3 || !VAR_2)
    return;
  if (!(VAR_6 = VAR_2->server))
    return;

  FUNC_2 (&VAR_3->mutex);
  if ((FUNC_5 (VAR_3->self_pipe[1], "x", 1)) == -1 && VAR_1 != VAR_0)
    FUNC_0 (("Unable to write to self pipe on pipeout.\n"));
  FUNC_3 (&VAR_3->mutex);

  FUNC_2 (&VAR_2->mutex);

  if ((FUNC_5 (VAR_6->self_pipe[1], "x", 1)) == -1 && VAR_1 != VAR_0)
    FUNC_6 (VAR_6);
  FUNC_3 (&VAR_2->mutex);

  VAR_5 = VAR_3->thread;
  if (FUNC_1 (VAR_5, ((void*)0)) != 0)
    FUNC_0 (("Unable to join thread: %d %s\n", VAR_5, FUNC_4 (VAR_1)));

  VAR_4 = VAR_2->thread;
  if (FUNC_1 (VAR_4, ((void*)0)) != 0)
    FUNC_0 (("Unable to join thread: %d %s\n", VAR_4, FUNC_4 (VAR_1)));
}
