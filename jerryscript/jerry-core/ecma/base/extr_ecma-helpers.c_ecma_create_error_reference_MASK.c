
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ecma_value_t ;
struct TYPE_3__ {int refs_and_flags; int value; } ;
typedef TYPE_1__ ecma_error_reference_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;

ecma_value_t
FUNC_2 (ecma_value_t VAR_2,
                             bool VAR_3)
{
  ecma_error_reference_t *VAR_4 = (ecma_error_reference_t *) FUNC_1 (sizeof (ecma_error_reference_t));

  VAR_4->refs_and_flags = VAR_1 | (VAR_3 ? 0 : VAR_0);
  VAR_4->value = VAR_2;
  return FUNC_0 (VAR_4);
}
