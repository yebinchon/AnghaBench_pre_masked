
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef int ecma_object_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static ecma_value_t
FUNC_10 (ecma_object_t *VAR_1)
{

  ecma_value_t VAR_2 = FUNC_8 (VAR_1, VAR_0);

  if (FUNC_1 (VAR_2))
  {
    return VAR_2;
  }


  if (!FUNC_7 (VAR_2))
  {
    FUNC_3 (VAR_2);
    return FUNC_9 (FUNC_0 ("'toString is missing or not a function.'"));
  }


  ecma_object_t *VAR_3 = FUNC_4 (VAR_2);
  ecma_value_t VAR_4 = FUNC_6 (VAR_3, FUNC_5 (VAR_1), ((void*)0), 0);

  FUNC_2 (VAR_3);

  return VAR_4;
}
