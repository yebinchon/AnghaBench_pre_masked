
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ecma_value_t ;
typedef int ecma_string_t ;
typedef int ecma_object_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

ecma_string_t *
FUNC_15 (ecma_object_t *VAR_2,
                                                   uint32_t VAR_3)
{
  ecma_value_t VAR_4 = FUNC_11 (VAR_2, VAR_3);

  if (FUNC_1 (VAR_4))
  {
    return ((void*)0);
  }

  if (FUNC_7 (VAR_4) || FUNC_6 (VAR_4))
  {
    return FUNC_4 (VAR_1);
  }

  ecma_value_t VAR_5 = FUNC_12 (VAR_4);


  if (FUNC_1 (VAR_5))
  {
    FUNC_3 (VAR_4);
    return ((void*)0);
  }

  ecma_string_t *VAR_6 = ((void*)0);
  ecma_object_t *VAR_7 = FUNC_5 (VAR_5);
  ecma_value_t VAR_8 = FUNC_10 (VAR_7, VAR_0);

  if (FUNC_1 (VAR_8))
  {
    goto cleanup;
  }

  if (!FUNC_9 (VAR_8))
  {
    FUNC_3 (VAR_8);
    FUNC_14 (FUNC_0 ("'toLocaleString' is missing or not a function."));
    goto cleanup;
  }

  ecma_object_t *VAR_9 = FUNC_5 (VAR_8);
  ecma_value_t VAR_10 = FUNC_8 (VAR_9,
                                                   VAR_5,
                                                   ((void*)0),
                                                   0);
  FUNC_2 (VAR_9);

  if (FUNC_1 (VAR_10))
  {
    goto cleanup;
  }

  VAR_6 = FUNC_13 (VAR_10);
  FUNC_3 (VAR_10);

cleanup:
  FUNC_2 (VAR_7);
  FUNC_3 (VAR_4);

  return VAR_6;
}
