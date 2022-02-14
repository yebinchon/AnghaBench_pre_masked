
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* check_idle; void* connections; void* call_later; int idle_timeout; int * check_interval; } ;
typedef TYPE_1__ Reaper ;
typedef int PyObject ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*,char**,int **,int **,int **) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int ) ;
 int * VAR_1 ;

__attribute__((used)) static int
FUNC_8(Reaper* VAR_2, PyObject* VAR_3, PyObject* VAR_4)
{
  PyObject* VAR_5 = ((void*)0);
  int VAR_6 = 0;

  PyObject* VAR_7 = ((void*)0);
  PyObject* VAR_8 = ((void*)0);

  static char* VAR_9[] = {"app", "check_interval", "idle_timeout", ((void*)0)};

  if (!FUNC_0(
      VAR_3, VAR_4, "|OOO", VAR_9, &VAR_7, &VAR_2->check_interval, &VAR_8))
      goto error;

  FUNC_6(*VAR_7);

  if(!VAR_2->check_interval)
    VAR_2->check_interval = VAR_1;
  FUNC_3(VAR_2->check_interval);

  FUNC_6(FUNC_1(VAR_2->check_interval) >= 0);

  if(!VAR_8)
    VAR_2->idle_timeout = VAR_0;
  else
    VAR_2->idle_timeout = FUNC_1(VAR_8);

  FUNC_6(VAR_2->idle_timeout >= 0);

  FUNC_7("check_interval %ld", FUNC_1(VAR_2->check_interval));
  FUNC_7("idle_timeout %ld", VAR_2->idle_timeout);

  if(!(VAR_5 = FUNC_2(VAR_7, "_loop")))
    goto error;

  if(!(VAR_2->call_later = FUNC_2(VAR_5, "call_later")))
    goto error;

  if(!(VAR_2->connections = FUNC_2(VAR_7, "_connections")))
    goto error;
  goto finally;

  error:
  VAR_6 = -1;

  finally:
  FUNC_4(VAR_5);
  return VAR_6;
}
