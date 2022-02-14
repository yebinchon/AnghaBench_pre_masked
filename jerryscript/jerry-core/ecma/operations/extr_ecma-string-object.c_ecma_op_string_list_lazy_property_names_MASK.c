
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ecma_string_t ;
typedef int ecma_object_t ;
typedef scalar_t__ ecma_length_t ;
struct TYPE_5__ {int value; } ;
struct TYPE_6__ {scalar_t__ class_id; TYPE_1__ u; } ;
struct TYPE_7__ {TYPE_2__ class_prop; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
typedef TYPE_4__ ecma_extended_object_t ;
typedef int ecma_collection_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;

void
FUNC_8 (ecma_object_t *VAR_3,
                                         bool VAR_4,






                                         ecma_collection_t *VAR_5,
                                         ecma_collection_t *VAR_6)


{
  FUNC_0 (FUNC_2 (VAR_3) == VAR_0);

  ecma_collection_t *VAR_7 = VAR_5;

  ecma_collection_t *VAR_8 = VAR_4 ? VAR_6 : VAR_5;

  ecma_extended_object_t *VAR_9 = (ecma_extended_object_t *) VAR_3;
  FUNC_0 (VAR_9->u.class_prop.class_id == VAR_2);

  ecma_string_t *VAR_10 = FUNC_3 (VAR_9->u.class_prop.u.value);

  ecma_length_t VAR_11 = FUNC_7 (VAR_10);

  for (ecma_length_t VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  {
    ecma_string_t *VAR_13 = FUNC_6 (VAR_12);


    FUNC_1 (VAR_7, FUNC_5 (VAR_13));
  }

  FUNC_1 (VAR_8, FUNC_4 (VAR_1));
}
