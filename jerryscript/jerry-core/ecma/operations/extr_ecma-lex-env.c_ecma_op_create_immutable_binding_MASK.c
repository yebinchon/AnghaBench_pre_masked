
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ecma_value_t ;
typedef int ecma_string_t ;
struct TYPE_3__ {int value; } ;
typedef TYPE_1__ ecma_property_value_t ;
typedef int ecma_object_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

void
FUNC_5 (ecma_object_t *VAR_2,
                                  ecma_string_t *VAR_3,
                                  ecma_value_t VAR_4)
{
  FUNC_0 (VAR_2 != ((void*)0)
                && FUNC_4 (VAR_2));
  FUNC_0 (FUNC_3 (VAR_2) == VAR_0);





  ecma_property_value_t *VAR_5 = FUNC_2 (VAR_2,
                                                                         VAR_3,
                                                                         VAR_1,
                                                                         ((void*)0));

  VAR_5->value = FUNC_1 (VAR_4);
}
