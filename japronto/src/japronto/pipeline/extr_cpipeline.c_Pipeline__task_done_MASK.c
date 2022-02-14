
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int queue_start; int queue_end; int * protocol; int * queue; int (* ready ) (int ,int *) ;} ;
typedef int PyObject ;
typedef int PipelineEntry ;
typedef TYPE_1__ Pipeline ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int (*) (int ,int *),int ,...) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static PyObject*
FUNC_10(Pipeline* VAR_2, PyObject* VAR_3)
{
  PyObject* VAR_4 = VAR_1;

  PipelineEntry *VAR_5;
  for(VAR_5 = VAR_2->queue + VAR_2->queue_start;
      VAR_5 < VAR_2->queue + VAR_2->queue_end; VAR_5++) {
    PyObject* VAR_6 = ((void*)0);
    PyObject* VAR_7 = ((void*)0);
    VAR_4 = VAR_1;

    if(FUNC_3(*VAR_5)) {
      VAR_3 = FUNC_2(*VAR_5);

      if(!(VAR_6 = FUNC_5(VAR_3, "done")))
        goto loop_error;

      if(!(VAR_7 = FUNC_4(VAR_6, ((void*)0))))
        goto loop_error;

      if(VAR_7 == VAR_0) {
        VAR_4 = VAR_0;
        goto loop_finally;
      }
    }







    if(!VAR_2->ready(*VAR_5, VAR_2->protocol))
      goto loop_error;


    FUNC_1(*VAR_5);

    goto loop_finally;

    loop_error:
    VAR_4 = ((void*)0);

    loop_finally:
    FUNC_7(VAR_7);
    FUNC_7(VAR_6);
    if(!VAR_4)
      goto error;
    if(VAR_4 == VAR_0)
      break;
  }

  VAR_2->queue_start = VAR_5 - VAR_2->queue;


  if(FUNC_0(VAR_2))

    FUNC_6(VAR_2->protocol);


  goto finally;

  error:
  VAR_4 = ((void*)0);

  finally:
  FUNC_8(VAR_4);
  return VAR_4;
}
