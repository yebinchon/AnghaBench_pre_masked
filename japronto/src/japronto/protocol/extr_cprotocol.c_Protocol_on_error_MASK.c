
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * write; int app; } ;
typedef int PyObject ;
typedef TYPE_1__ Protocol ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int *,int *,int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

Protocol*
FUNC_5(Protocol* VAR_0, PyObject* VAR_1)
{
  PyObject* VAR_2 = ((void*)0);
  PyObject* VAR_3 = ((void*)0);

  if(!(VAR_2 =
       FUNC_2(VAR_0->app, "protocol_error_handler")))
    goto error;

  if(!(VAR_3 =
       FUNC_1(VAR_2, VAR_1, ((void*)0))))
    goto error;

  PyObject* VAR_4;
  if(!(VAR_4 = FUNC_1(VAR_0->write, VAR_3, ((void*)0))))
    goto error;
  FUNC_3(VAR_4);

  if(!FUNC_0(VAR_0))
    goto error;

  goto finally;

  error:
  VAR_0 = ((void*)0);

  finally:
  FUNC_4(VAR_3);
  FUNC_4(VAR_2);
  return VAR_0;
}
