
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int closed; scalar_t__ last_read_ops; scalar_t__ read_ops; scalar_t__ idle_time; int * app; void* writelines; void* write; int * transport; void* false_cnt; void* true_cnt; void* none_cnt; } ;
typedef int PyObject ;
typedef TYPE_1__ Protocol ;


 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 void* FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,size_t,size_t,size_t) ;

__attribute__((used)) static PyObject*
FUNC_6(Protocol* VAR_4, PyObject* VAR_5)
{
  PyObject* VAR_6 = ((void*)0);
  VAR_4->transport = VAR_5;
  FUNC_2(VAR_4->transport);

  if(!(VAR_4->write = FUNC_0(VAR_5, "write")))
    goto error;

  if(!(VAR_4->writelines = FUNC_0(VAR_5, "writelines")))
    goto error;

  if(!(VAR_6 = FUNC_0(VAR_4->app, "_connections")))
    goto error;







  if(FUNC_1(VAR_6, (PyObject*)VAR_4) == -1)
    goto error;

  VAR_4->closed = 0;

  goto finally;

  error:
  return ((void*)0);

  finally:
  FUNC_4(VAR_6);
  VAR_2;
}
