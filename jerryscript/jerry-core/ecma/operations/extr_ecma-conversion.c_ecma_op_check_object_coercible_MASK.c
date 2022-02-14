
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

ecma_value_t
FUNC_5 (ecma_value_t VAR_1)
{
  FUNC_1 (VAR_1);

  if (FUNC_3 (VAR_1)
      || FUNC_2 (VAR_1))
  {
    return FUNC_4 (FUNC_0 ("Argument cannot be converted to an object."));
  }
  else
  {
    return VAR_0;
  }
}
