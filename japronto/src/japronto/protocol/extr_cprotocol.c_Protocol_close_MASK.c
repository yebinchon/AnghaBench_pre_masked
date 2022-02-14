
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int transport; } ;
typedef int PyObject ;
typedef TYPE_1__ Protocol ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void*
FUNC_4(Protocol* VAR_0)
{
  void* VAR_1 = VAR_0;

  PyObject* VAR_2 = ((void*)0);
  VAR_2 = FUNC_1(VAR_0->transport, "close");
  if(!VAR_2)
    goto error;
  PyObject* VAR_3 = FUNC_0(VAR_2, ((void*)0));
  if(!VAR_3)
    goto error;
  FUNC_2(VAR_3);

  goto finally;

  error:
  VAR_1 = ((void*)0);

  finally:
  FUNC_3(VAR_2);
  return VAR_1;
}
