
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ecma_value_t ;
struct TYPE_3__ {int * buffer_p; int capacity; scalar_t__ item_count; } ;
typedef TYPE_1__ ecma_collection_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int const) ;

ecma_collection_t *
FUNC_2 (void)
{
  ecma_collection_t *VAR_1;
  VAR_1 = (ecma_collection_t *) FUNC_1 (sizeof (ecma_collection_t));

  VAR_1->item_count = 0;
  VAR_1->capacity = VAR_0;
  const uint32_t VAR_2 = FUNC_0 (VAR_0);
  VAR_1->buffer_p = (ecma_value_t *) FUNC_1 (VAR_2);

  return VAR_1;
}
