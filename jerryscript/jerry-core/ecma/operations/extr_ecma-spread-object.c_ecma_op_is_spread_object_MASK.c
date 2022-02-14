
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ecma_value_t ;
typedef int ecma_object_t ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_1__ pseudo_array; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
typedef TYPE_3__ ecma_extended_object_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

bool
FUNC_3 (ecma_value_t VAR_2)
{
  if (FUNC_2 (VAR_2))
  {
    ecma_object_t *VAR_3 = FUNC_0 (VAR_2);

    if (FUNC_1 (VAR_3) == VAR_0)
    {
      ecma_extended_object_t *VAR_4 = (ecma_extended_object_t *) VAR_3;
      return VAR_4->u.pseudo_array.type == VAR_1;
    }
  }

  return 0;
}
