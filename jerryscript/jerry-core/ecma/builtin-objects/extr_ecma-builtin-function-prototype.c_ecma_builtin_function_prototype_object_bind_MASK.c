
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* ecma_value_t ;
typedef int ecma_object_t ;
typedef int ecma_length_t ;
typedef int ecma_integer_value_t ;
struct TYPE_4__ {void* args_len_or_this; int target_function; } ;
struct TYPE_5__ {TYPE_1__ bound_function; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
typedef TYPE_3__ ecma_extended_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 void* VAR_2 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int ) ;
 void* FUNC_3 (void* const) ;
 int * FUNC_4 (int *,size_t,int ) ;
 int FUNC_5 (void* const) ;
 void* FUNC_6 (int ) ;
 void* FUNC_7 (int *) ;

__attribute__((used)) static ecma_value_t
FUNC_8 (ecma_object_t *VAR_3 ,
                                             const ecma_value_t *VAR_4,
                                             ecma_length_t VAR_5)
{

  ecma_object_t *VAR_6 = FUNC_2 (VAR_0);

  ecma_object_t *VAR_7;
  ecma_extended_object_t *VAR_8;

  if (VAR_5 == 0
      || (VAR_5 == 1 && !FUNC_5 (VAR_4[0])))
  {
    VAR_7 = FUNC_4 (VAR_6,
                                     sizeof (ecma_extended_object_t),
                                     VAR_1);


    VAR_8 = (ecma_extended_object_t *) VAR_7;
    FUNC_0 (VAR_8->u.bound_function.target_function,
                                     VAR_3);

    VAR_8->u.bound_function.args_len_or_this = VAR_2;

    if (VAR_5 != 0)
    {
      VAR_8->u.bound_function.args_len_or_this = FUNC_3 (VAR_4[0]);
    }
  }
  else
  {
    FUNC_1 (VAR_5 > 0);

    size_t VAR_9 = sizeof (ecma_extended_object_t) + (VAR_5 * sizeof (ecma_value_t));

    VAR_7 = FUNC_4 (VAR_6,
                                     VAR_9,
                                     VAR_1);


    VAR_8 = (ecma_extended_object_t *) VAR_7;
    FUNC_0 (VAR_8->u.bound_function.target_function,
                                     VAR_3);



    VAR_8->u.bound_function.args_len_or_this = VAR_2;
    ecma_value_t *VAR_10 = (ecma_value_t *) (VAR_8 + 1);

    for (ecma_length_t VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
    {
      *VAR_10++ = FUNC_3 (VAR_4[VAR_11]);
    }

    ecma_value_t VAR_12 = FUNC_6 ((ecma_integer_value_t) VAR_5);
    VAR_8->u.bound_function.args_len_or_this = VAR_12;
  }
  return FUNC_7 (VAR_7);
}
