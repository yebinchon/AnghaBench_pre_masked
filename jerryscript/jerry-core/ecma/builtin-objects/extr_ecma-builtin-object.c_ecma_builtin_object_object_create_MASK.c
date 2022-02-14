
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef int ecma_object_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static ecma_value_t
FUNC_12 (ecma_value_t VAR_0,
                                   ecma_value_t VAR_1)
{

  if (!FUNC_7 (VAR_0) && !FUNC_6 (VAR_0))
  {
    return FUNC_11 (FUNC_0 ("Argument is not an object."));
  }

  ecma_object_t *VAR_2 = ((void*)0);

  if (!FUNC_6 (VAR_0))
  {
    VAR_2 = FUNC_5 (VAR_0);
  }

  ecma_object_t *VAR_3 = FUNC_10 (VAR_2);


  if (!FUNC_8 (VAR_1))
  {
    ecma_value_t VAR_4 = FUNC_2 (VAR_3, VAR_1);

    if (FUNC_1 (VAR_4))
    {
      FUNC_3 (VAR_3);
      return VAR_4;
    }

    FUNC_4 (VAR_4);
  }


  return FUNC_9 (VAR_3);
}
