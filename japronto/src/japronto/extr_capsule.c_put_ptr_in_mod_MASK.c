
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int * FUNC_0 (void*,char const*,int *) ;
 int FUNC_1 (int *,char const*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

PyObject* FUNC_4(PyObject* VAR_0, void* VAR_1, const char* VAR_2,
                         const char* VAR_3)
{
  PyObject* VAR_4 = ((void*)0);

  VAR_4 = FUNC_0(VAR_1, VAR_3, ((void*)0));
  if(!VAR_4)
    goto error;

  if(FUNC_1(VAR_0, VAR_2, VAR_4) == -1)
    goto error;

  FUNC_2(VAR_4);
  goto finally;

  error:
  FUNC_3(VAR_4);
  VAR_4 = ((void*)0);

  finally:
  return VAR_4;
}
