
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; scalar_t__ responses_end; } ;
struct TYPE_6__ {TYPE_1__ gather; int * app; void* request_logger; void* create_task; void* error_handler; void* matcher; int pipeline; int parser; void* feed_disconnect; void* feed; } ;
typedef int PyObject ;
typedef TYPE_2__ Protocol ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,int **) ;
 int * FUNC_3 (int ,int *,int *,int *,int *) ;
 void* FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int * VAR_2 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(Protocol* VAR_3, PyObject *VAR_4, PyObject *VAR_5)
{
  int VAR_6 = 0;
  PyObject* VAR_7 = ((void*)0);
  PyObject* VAR_8 = ((void*)0);
  if(FUNC_0(&VAR_3->parser, VAR_3) == -1)
    goto error;


  if(FUNC_1(&VAR_3->pipeline, VAR_1, (PyObject*)VAR_3) == -1)
    goto error;

  if(!FUNC_2(VAR_4, "O", &VAR_3->app))
    goto error;
  FUNC_5(VAR_3->app);

  VAR_3->matcher = FUNC_4(VAR_3->app, "_matcher");
  if(!VAR_3->matcher)
    goto error;

  VAR_3->error_handler = FUNC_4(VAR_3->app, "error_handler");
  if(!VAR_3->error_handler)
    goto error;

  VAR_7 = FUNC_4(VAR_3->app, "_loop");
  if(!VAR_7)
    goto error;

  VAR_3->create_task = FUNC_4(VAR_7, "create_task");
  if(!VAR_3->create_task)
    goto error;

  if(!(VAR_8 = FUNC_4(VAR_3->app, "_log_request")))
    goto error;

  if(VAR_8 == VAR_2) {
    if(!(VAR_3->request_logger = FUNC_4(VAR_3->app, "default_request_logger")))
      goto error;
  }

  VAR_3->gather.responses_end = 0;
  VAR_3->gather.len = 0;

  goto finally;

  error:
  VAR_6 = -1;
  finally:
  FUNC_6(VAR_8);
  FUNC_6(VAR_7);



  return VAR_6;
}
