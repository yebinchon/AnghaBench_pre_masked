
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int len; } ;
struct TYPE_6__ {int write; TYPE_2__ gather; } ;
typedef int PyObject ;
typedef TYPE_1__ Protocol ;
typedef TYPE_2__ Gather ;


 int * FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

Protocol*
FUNC_4(Protocol* VAR_0)
{
  Gather* VAR_1 = &VAR_0->gather;
  PyObject* VAR_2 = ((void*)0);

  if(!VAR_1->len)
    goto finally;

  if(!(VAR_2 = FUNC_0(VAR_1)))
    goto error;

  PyObject* VAR_3;
  if(!(VAR_3 = FUNC_1(VAR_0->write, VAR_2, ((void*)0))))
    goto error;
  FUNC_2(VAR_3);

  goto finally;

  error:
  VAR_0 = ((void*)0);

  finally:
  FUNC_3(VAR_2);
  return VAR_0;
}
