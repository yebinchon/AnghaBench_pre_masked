
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * route; } ;
typedef int PyObject ;
typedef TYPE_1__ MatcherEntry ;
typedef int Matcher ;
typedef int MatchDictEntry ;


 int * FUNC_0 (int *,size_t) ;
 TYPE_1__* FUNC_1 (int *,int *,int **,size_t*) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static PyObject*
FUNC_6(Matcher* VAR_1, PyObject* VAR_2)
{
  MatcherEntry* VAR_3;
  MatchDictEntry* VAR_4;
  PyObject* VAR_5 = ((void*)0);
  size_t VAR_6;
  PyObject* VAR_7 = ((void*)0);
  PyObject* VAR_8 = ((void*)0);

  if(!(VAR_3 = FUNC_1(
       VAR_1, VAR_2, &VAR_4, &VAR_6)))
    VAR_0;

  VAR_5 = VAR_3->route;

  if(!(VAR_7 = FUNC_0(VAR_4, VAR_6)))
    goto error;

  if(!(VAR_8 = FUNC_2(2)))
    goto error;

  FUNC_3(VAR_8, 0, VAR_5);
  FUNC_3(VAR_8, 1, VAR_7);

  goto finally;

  error:
  FUNC_5(VAR_7);
  VAR_5 = ((void*)0);

  finally:
  if(VAR_5)
    FUNC_4(VAR_5);
  return VAR_8;
}
