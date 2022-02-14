
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ ecma_value_t ;
typedef int ecma_string_t ;
typedef int ecma_object_t ;
struct TYPE_5__ {scalar_t__ length; } ;
struct TYPE_6__ {TYPE_1__ u1; } ;
struct TYPE_7__ {TYPE_2__ pseudo_array; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
typedef TYPE_4__ ecma_extended_object_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int *,int *,int) ;
 scalar_t__ FUNC_7 (int *) ;

ecma_value_t
FUNC_8 (ecma_object_t *VAR_3,
                                 ecma_string_t *VAR_4,
                                 bool VAR_5)
{

  ecma_value_t VAR_6 = FUNC_6 (VAR_3, VAR_4, VAR_5);

  if (FUNC_0 (VAR_6))
  {
    return VAR_6;
  }

  FUNC_1 (FUNC_4 (VAR_6));

  if (FUNC_5 (VAR_6))
  {
    uint32_t VAR_7 = FUNC_7 (VAR_4);

    if (VAR_7 != VAR_0)
    {
      ecma_extended_object_t *VAR_8 = (ecma_extended_object_t *) VAR_3;

      if (VAR_7 < VAR_8->u.pseudo_array.u1.length)
      {
        ecma_value_t *VAR_9 = (ecma_value_t *) (VAR_8 + 1);

        if (VAR_9[VAR_7] != VAR_1)
        {
          ecma_string_t *VAR_10 = FUNC_3 (VAR_9[VAR_7]);
          FUNC_2 (VAR_10);
          VAR_9[VAR_7] = VAR_1;
        }
      }
    }

    VAR_6 = VAR_2;
  }

  return VAR_6;
}
