
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
typedef int ecma_value_t ;
typedef int ecma_string_t ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_1__ ecma_property_descriptor_t ;
typedef int ecma_object_t ;
struct TYPE_9__ {size_t item_count; int * buffer_p; } ;
typedef TYPE_2__ ecma_collection_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,TYPE_1__*) ;
 int FUNC_7 (int *,int *,TYPE_1__*) ;
 TYPE_2__* FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static ecma_value_t
FUNC_11 (ecma_object_t *VAR_3)
{
  ecma_collection_t *VAR_4 = FUNC_8 (VAR_3, VAR_0);

  ecma_value_t *VAR_5 = VAR_4->buffer_p;

  for (uint32_t VAR_6 = 0; VAR_6 < VAR_4->item_count; VAR_6++)
  {
    ecma_string_t *VAR_7 = FUNC_4 (VAR_5[VAR_6]);


    ecma_property_descriptor_t VAR_8;

    if (!FUNC_7 (VAR_3, VAR_7, &VAR_8))
    {
      continue;
    }


    VAR_8.flags &= (uint16_t) ~VAR_1;
    VAR_8.flags |= VAR_2;


    ecma_value_t VAR_9 = FUNC_6 (VAR_3,
                                                                           VAR_7,
                                                                           &VAR_8);

    FUNC_2 (&VAR_8);

    if (FUNC_0 (VAR_9))
    {
      FUNC_1 (VAR_4);
      return VAR_9;
    }

    FUNC_3 (VAR_9);
  }

  FUNC_1 (VAR_4);


  FUNC_10 (VAR_3, 0);


  FUNC_9 (VAR_3);
  return FUNC_5 (VAR_3);
}
