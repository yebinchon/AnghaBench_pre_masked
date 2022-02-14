
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ ResponseType; int * (* Response_render ) (TYPE_1__*,int) ;} ;
struct TYPE_16__ {size_t responses_end; scalar_t__ len; int ** responses; int enabled; } ;
struct TYPE_15__ {int * request_logger; int * write; TYPE_4__ gather; int error_handler; } ;
struct TYPE_14__ {int simple; int * done_callbacks; int exception; } ;
struct TYPE_13__ {scalar_t__ keep_alive; } ;
typedef TYPE_1__ Response ;
typedef TYPE_2__ Request ;
typedef scalar_t__ Py_ssize_t ;
typedef int PyObject ;
typedef TYPE_3__ Protocol ;
typedef TYPE_4__ Gather ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int * FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;
 int * FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *,int *,...) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 TYPE_6__* VAR_4 ;
 int * FUNC_11 (TYPE_1__*,int) ;

__attribute__((used)) static inline Protocol*
FUNC_12(Protocol* VAR_5, PyObject* VAR_6, Response* VAR_7)
{
    Protocol* VAR_8 = VAR_5;
    PyObject* VAR_9 = ((void*)0);
    PyObject* VAR_10 = ((void*)0);
    PyObject* VAR_11 = ((void*)0);

    if(VAR_7 && FUNC_9(VAR_7) != VAR_4->ResponseType)
    {
      FUNC_3(VAR_3, "View did not return Response instance");
      FUNC_1(VAR_6);
      VAR_7 = ((void*)0);
    }

    if(!VAR_7) {
      VAR_10 = FUNC_6(
        &VAR_5->error_handler, VAR_6, &((Request*)VAR_6)->exception, ((void*)0));
      if(!VAR_10)
        goto error;

      ((Request*)VAR_6)->simple = 0;
      if(!FUNC_12(VAR_5, VAR_6, (Response*)VAR_10))
        goto error;

      goto finally;
    }

    if(!(VAR_9 =
         VAR_4->Response_render(VAR_7, ((Request*)VAR_6)->simple)))
      goto error;

    PyObject* VAR_12;

    PyObject* VAR_13 = ((Request*)VAR_6)->done_callbacks;
    for(Py_ssize_t VAR_14 = 0; VAR_13 && VAR_14 < FUNC_5(VAR_13); VAR_14++) {
      PyObject* VAR_15 = FUNC_4(VAR_13, VAR_14);

      if(!(VAR_12 = FUNC_6(VAR_15, VAR_6, ((void*)0))))
        goto error;
      FUNC_7(VAR_12);
    }

    Gather* VAR_16 = &VAR_5->gather;

    if(!VAR_16->enabled)
      goto maybe_flush;

    if(VAR_16->responses_end == VAR_1)
      goto maybe_flush;

    if(VAR_16->len + FUNC_8(VAR_9) > VAR_0)
      goto maybe_flush;

    VAR_16->responses[VAR_16->responses_end] = VAR_9;
    VAR_16->responses_end++;
    VAR_16->len += FUNC_8(VAR_9);
    VAR_9 = ((void*)0);

    goto dont_flush;

    maybe_flush:
    if(!VAR_16->len)
      goto dont_flush;

    if(!(VAR_11 = FUNC_0(VAR_16)))
      goto error;

    if(!(VAR_12 = FUNC_6(VAR_5->write, VAR_11, ((void*)0))))
      goto error;
    FUNC_7(VAR_12);

    dont_flush:

    if(VAR_9) {
      if(!(VAR_12 = FUNC_6(VAR_5->write, VAR_9, ((void*)0))))
        goto error;
      FUNC_7(VAR_12);
    }

    if(VAR_5->request_logger) {
      if(!(VAR_12 = FUNC_6(VAR_5->request_logger, VAR_6, ((void*)0))))
        goto error;
      FUNC_7(VAR_12);
    }

    if(VAR_7->keep_alive == VAR_2) {
      if(!FUNC_2(VAR_5))
        goto error;
    }

    goto finally;

    error:
    VAR_8 = ((void*)0);

    finally:
    FUNC_10(VAR_11);
    FUNC_10(VAR_10);
    FUNC_10(VAR_9);
    return VAR_8;
}
