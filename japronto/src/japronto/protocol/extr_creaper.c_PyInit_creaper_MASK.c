
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int * PyMODINIT_FUNC ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_6 (char*) ;
 int VAR_4 ;

PyMODINIT_FUNC
FUNC_7(void)
{
  PyObject* VAR_5 = ((void*)0);
  VAR_3 = ((void*)0);

  if (FUNC_3(&VAR_1) < 0)
    goto error;

  VAR_5 = FUNC_2(&VAR_2);
  if(!VAR_5)
    goto error;

  FUNC_4(&VAR_1);
  FUNC_1(VAR_5, "Reaper", (PyObject*)&VAR_1);

  if(!(VAR_3 = FUNC_0(VAR_0)))
    goto error;

  VAR_4 = FUNC_6("japronto.protocol.cprotocol");
  if(!VAR_4)
    goto error;

  goto finally;

  error:
  FUNC_5(VAR_3);
  VAR_5 = ((void*)0);

  finally:
  return VAR_5;
}
