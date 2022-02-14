
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
struct TYPE_6__ {TYPE_1__ u2; int type; } ;
struct TYPE_7__ {TYPE_2__ pseudo_array; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
typedef TYPE_4__ ecma_extended_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;

ecma_value_t
FUNC_3 (ecma_value_t VAR_2)
{
  ecma_object_t *VAR_3 = FUNC_1 (((void*)0),
                                                sizeof (ecma_extended_object_t),
                                                VAR_0);

  ecma_extended_object_t *VAR_4 = (ecma_extended_object_t *) VAR_3;
  VAR_4->u.pseudo_array.type = VAR_1;
  VAR_4->u.pseudo_array.u2.spread_value = FUNC_0 (VAR_2);

  return FUNC_2 (VAR_3);
}
