
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int ecma_object_type_t ;
struct TYPE_10__ {int prototype_cp; } ;
struct TYPE_9__ {int property_list_cp; } ;
struct TYPE_11__ {TYPE_2__ u2; TYPE_1__ u1; scalar_t__ type_flags_refs; } ;
typedef TYPE_3__ ecma_object_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (size_t) ;
 TYPE_3__* FUNC_2 () ;
 int FUNC_3 (TYPE_3__*) ;

ecma_object_t *
FUNC_4 (ecma_object_t *VAR_2,
                    size_t VAR_3,
                    ecma_object_type_t VAR_4)
{
  ecma_object_t *VAR_5;

  if (VAR_3 > 0)
  {
    VAR_5 = (ecma_object_t *) FUNC_1 (VAR_3);
  }
  else
  {
    VAR_5 = FUNC_2 ();
  }

  VAR_5->type_flags_refs = (uint16_t) (VAR_4 | VAR_0);

  FUNC_3 (VAR_5);

  VAR_5->u1.property_list_cp = VAR_1;

  FUNC_0 (VAR_5->u2.prototype_cp, VAR_2);

  return VAR_5;
}
