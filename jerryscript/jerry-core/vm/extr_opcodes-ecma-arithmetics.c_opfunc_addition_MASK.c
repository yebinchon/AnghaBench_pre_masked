
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef int ecma_string_t ;
typedef int ecma_object_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int * FUNC_13 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

ecma_value_t
FUNC_14 (ecma_value_t VAR_5,
                 ecma_value_t VAR_6)
{
  bool VAR_7 = 0;
  bool VAR_8 = 0;

  if (FUNC_8 (VAR_5))
  {
    ecma_object_t *VAR_9 = FUNC_7 (VAR_5);
    VAR_5 = FUNC_12 (VAR_9, VAR_0);
    VAR_7 = 1;

    if (FUNC_0 (VAR_5))
    {
      return VAR_5;
    }
  }

  if (FUNC_8 (VAR_6))
  {
    ecma_object_t *VAR_10 = FUNC_7 (VAR_6);
    VAR_6 = FUNC_12 (VAR_10, VAR_0);
    VAR_8 = 1;

    if (FUNC_0 (VAR_6))
    {
      if (VAR_7)
      {
        FUNC_6 (VAR_5);
      }
      return VAR_6;
    }
  }

  ecma_value_t VAR_11 = VAR_1;

  if (FUNC_9 (VAR_5)
      || FUNC_9 (VAR_6))
  {
    ecma_string_t *VAR_12 = FUNC_13 (VAR_5);

    if (FUNC_3 (VAR_12 == ((void*)0)))
    {
      if (VAR_7)
      {
        FUNC_6 (VAR_5);
      }
      if (VAR_8)
      {
        FUNC_6 (VAR_6);
      }
      return VAR_2;
    }

    ecma_string_t *VAR_13 = FUNC_13 (VAR_6);

    if (FUNC_3 (VAR_13 == ((void*)0)))
    {
      if (VAR_8)
      {
        FUNC_6 (VAR_6);
      }
      if (VAR_7)
      {
        FUNC_6 (VAR_5);
      }
      FUNC_5 (VAR_12);
      return VAR_2;
    }

    VAR_12 = FUNC_4 (VAR_12, VAR_13);
    VAR_11 = FUNC_11 (VAR_12);

    FUNC_5 (VAR_13);
  }
  else
  {
    FUNC_2 (VAR_3, VAR_5, VAR_11);
    FUNC_2 (VAR_4, VAR_6, VAR_11);

    VAR_11 = FUNC_10 (VAR_3 + VAR_4);

    FUNC_1 (VAR_4);
    FUNC_1 (VAR_3);
  }

  if (VAR_7)
  {
    FUNC_6 (VAR_5);
  }

  if (VAR_8)
  {
    FUNC_6 (VAR_6);
  }

  return VAR_11;
}
