
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 void* FUNC_0 (int *,char const*) ;
 int * FUNC_1 (char const*) ;
 int * FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *) ;

void* FUNC_4(const char* VAR_0, const char* VAR_1,
                       const char* VAR_2)
{
  void* VAR_3;
  PyObject* VAR_4 = ((void*)0);
  PyObject* VAR_5 = ((void*)0);

  VAR_4 = FUNC_1(VAR_0);
  if(!VAR_4)
    goto error;

  VAR_5 = FUNC_2(VAR_4, VAR_1);
  if(!VAR_5)
    goto error;

  VAR_3 = FUNC_0(VAR_5, VAR_2);
  if(!VAR_3)
    goto error;

  goto finally;

  error:
  VAR_3 = ((void*)0);

  finally:
  FUNC_3(VAR_5);
  FUNC_3(VAR_4);
  return VAR_3;
}
