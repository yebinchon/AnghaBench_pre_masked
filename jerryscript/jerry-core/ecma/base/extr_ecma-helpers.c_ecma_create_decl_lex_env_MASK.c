
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {int outer_reference_cp; } ;
struct TYPE_9__ {int property_list_cp; } ;
struct TYPE_11__ {int type_flags_refs; TYPE_2__ u2; TYPE_1__ u1; } ;
typedef TYPE_3__ ecma_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (TYPE_3__*) ;

ecma_object_t *
FUNC_3 (ecma_object_t *VAR_3)
{
  ecma_object_t *VAR_4 = FUNC_1 ();

  uint16_t VAR_5 = VAR_1 | VAR_0;
  VAR_4->type_flags_refs = VAR_5;

  FUNC_2 (VAR_4);

  VAR_4->u1.property_list_cp = VAR_2;

  FUNC_0 (VAR_4->u2.outer_reference_cp, VAR_3);

  return VAR_4;
}
