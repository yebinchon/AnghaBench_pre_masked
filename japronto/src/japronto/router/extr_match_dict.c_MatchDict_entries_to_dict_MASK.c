
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value_length; int value; int key_length; int key; } ;
typedef int PyObject ;
typedef TYPE_1__ MatchDictEntry ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int *,int *) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

PyObject*
FUNC_4(MatchDictEntry* VAR_0, size_t VAR_1)
{
  PyObject* VAR_2 = ((void*)0);
  if(!(VAR_2 = FUNC_0()))
    goto error;

  for(MatchDictEntry* VAR_3 = VAR_0; VAR_3 < VAR_0 + VAR_1; VAR_3++) {
    PyObject* VAR_4 = ((void*)0);
    PyObject* VAR_5 = ((void*)0);

    if(!(VAR_4 = FUNC_2(VAR_3->key, VAR_3->key_length)))
      goto loop_error;

    if(!(VAR_5 = FUNC_2(VAR_3->value, VAR_3->value_length)))
      goto loop_error;

    if(FUNC_1(VAR_2, VAR_4, VAR_5) == -1)
      goto loop_error;

    goto loop_finally;

    loop_error:
    FUNC_3(VAR_2);
    VAR_2 = ((void*)0);

    loop_finally:
    FUNC_3(VAR_4);
    FUNC_3(VAR_5);
    if(!VAR_2)
      goto error;
  }

  goto finally;

  error:
  FUNC_3(VAR_2);
  VAR_2 = ((void*)0);

  finally:
  return VAR_2;
}
