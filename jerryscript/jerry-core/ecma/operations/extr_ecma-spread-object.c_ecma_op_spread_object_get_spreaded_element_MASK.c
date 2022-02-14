
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ecma_value_t ;
typedef int ecma_object_t ;
struct TYPE_5__ {int spread_value; } ;
struct TYPE_6__ {TYPE_1__ u2; } ;
struct TYPE_7__ {TYPE_2__ pseudo_array; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
typedef TYPE_4__ ecma_extended_object_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

ecma_value_t
FUNC_4 (ecma_object_t *VAR_0)
{
  FUNC_0 (FUNC_3 (FUNC_2 (VAR_0)));

  ecma_extended_object_t *VAR_1 = (ecma_extended_object_t *) VAR_0;
  return FUNC_1 (VAR_1->u.pseudo_array.u2.spread_value);
}
