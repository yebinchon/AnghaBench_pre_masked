
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int ecma_value_t ;
typedef int ecma_string_t ;
typedef int ecma_property_t ;
typedef int ecma_object_t ;
struct TYPE_4__ {size_t item_count; int * buffer_p; } ;
typedef TYPE_1__ ecma_collection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int *,int *,int ) ;
 TYPE_1__* FUNC_8 (int *,int ) ;

__attribute__((used)) static ecma_value_t
FUNC_9 (ecma_object_t *VAR_7,
                                             int VAR_8)
{
  FUNC_1 (VAR_8 == VAR_1 || VAR_8 == VAR_2);


  if (FUNC_3 (VAR_7))
  {
    return VAR_5;
  }


  ecma_value_t VAR_9 = VAR_6;


  ecma_collection_t *VAR_10 = FUNC_8 (VAR_7, VAR_0);

  ecma_value_t *VAR_11 = VAR_10->buffer_p;

  for (uint32_t VAR_12 = 0; VAR_12 < VAR_10->item_count; VAR_12++)
  {
    ecma_string_t *VAR_13 = FUNC_4 (VAR_11[VAR_12]);


    ecma_property_t VAR_14 = FUNC_7 (VAR_7,
                                                                VAR_13,
                                                                ((void*)0),
                                                                VAR_3);


    if (VAR_8 == VAR_1
        && FUNC_0 (VAR_14) != VAR_4
        && FUNC_6 (VAR_14))
    {
      VAR_9 = VAR_5;
      break;
    }


    if (FUNC_5 (VAR_14))
    {
      VAR_9 = VAR_5;
      break;
    }
  }

  FUNC_2 (VAR_10);

  return VAR_9;
}
