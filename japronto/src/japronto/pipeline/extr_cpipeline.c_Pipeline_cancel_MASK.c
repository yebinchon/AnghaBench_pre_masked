
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int queue_start; int queue_end; int * queue; } ;
typedef int PyObject ;
typedef int PipelineEntry ;
typedef TYPE_1__ Pipeline ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void*
FUNC_6(Pipeline* VAR_0)
{
  void* VAR_1 = VAR_0;

  PipelineEntry *VAR_2;
  for(VAR_2 = VAR_0->queue + VAR_0->queue_start;
      VAR_2 < VAR_0->queue + VAR_0->queue_end; VAR_2++) {
    if(!FUNC_1(*VAR_2))
      continue;

    PyObject* VAR_3 = FUNC_0(*VAR_2);
    PyObject* VAR_4 = ((void*)0);

    if(!(VAR_4 = FUNC_3(VAR_3, "cancel")))
      goto loop_error;

    PyObject* VAR_5;
    if(!(VAR_5 = FUNC_2(VAR_4, ((void*)0))))
      goto loop_error;
    FUNC_4(VAR_5);

    goto loop_finally;

    loop_error:
    VAR_1 = ((void*)0);

    loop_finally:
    FUNC_5(VAR_4);

    if(!VAR_1)
      break;
  }

  return VAR_1;
}
