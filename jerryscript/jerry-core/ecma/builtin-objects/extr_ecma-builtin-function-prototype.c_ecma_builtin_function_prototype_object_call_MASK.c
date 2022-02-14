
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef int ecma_object_t ;
typedef unsigned int ecma_length_t ;


 int const VAR_0 ;
 int FUNC_0 (int *,int const,int const*,unsigned int) ;

__attribute__((used)) static ecma_value_t
FUNC_1 (ecma_object_t *VAR_1 ,
                                             const ecma_value_t *VAR_2,
                                             ecma_length_t VAR_3)
{
  if (VAR_3 == 0)
  {

    return FUNC_0 (VAR_1,
                                  VAR_0,
                                  ((void*)0),
                                  0);
  }

  return FUNC_0 (VAR_1,
                                VAR_2[0],
                                VAR_2 + 1,
                                (ecma_length_t) (VAR_3 - 1u));
}
