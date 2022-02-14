
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int closed; scalar_t__ none_cnt; scalar_t__ true_cnt; scalar_t__ false_cnt; int pipeline; int app; int parser; int feed_disconnect; } ;
typedef int PyObject ;
typedef TYPE_1__ Protocol ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_6 (int *) ;
 int * VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,size_t,size_t,size_t) ;

__attribute__((used)) static PyObject*
FUNC_11(Protocol* VAR_3, PyObject* VAR_4)
{
  VAR_3->closed = 1;

  PyObject* VAR_5 = ((void*)0);
  PyObject* VAR_6 = VAR_1;







  if(!FUNC_0(&VAR_3->parser))
    goto error;


  if(!(VAR_5 = FUNC_3(VAR_3->app, "_connections")))
    goto error;

  if(FUNC_4(VAR_5, (PyObject*)VAR_3) == -1)
    goto error;

  if(!FUNC_1(&VAR_3->pipeline))
    goto error;
  goto finally;

  error:
  VAR_6 = ((void*)0);

  finally:
  FUNC_7(VAR_5);
  FUNC_8(VAR_6);
  return VAR_6;
}
