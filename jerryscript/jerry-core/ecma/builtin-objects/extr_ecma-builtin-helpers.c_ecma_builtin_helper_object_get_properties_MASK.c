
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ecma_value_t ;
typedef int ecma_object_t ;
struct TYPE_5__ {int item_count; int * buffer_p; } ;
typedef TYPE_1__ ecma_collection_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (int *,int) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int) ;
 TYPE_1__* FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int) ;

ecma_value_t
FUNC_10 (ecma_object_t *VAR_0,
                                           uint32_t VAR_1)
{
  FUNC_1 (VAR_0 != ((void*)0));

  ecma_value_t VAR_2 = FUNC_6 (((void*)0), 0, 0);
  FUNC_1 (!FUNC_0 (VAR_2));
  ecma_object_t *VAR_3 = FUNC_5 (VAR_2);

  ecma_collection_t *VAR_4 = FUNC_7 (VAR_0, VAR_1);

  if (VAR_4->item_count == 0)
  {
    FUNC_2 (VAR_4);
    return VAR_2;
  }

  FUNC_1 (FUNC_8 (VAR_3));

  ecma_value_t *VAR_5 = VAR_4->buffer_p;
  ecma_value_t *VAR_6 = FUNC_4 (VAR_3, VAR_4->item_count);

  FUNC_9 (VAR_6, VAR_5, VAR_4->item_count * sizeof (ecma_value_t));

  FUNC_3 (VAR_4);

  return VAR_2;
}
